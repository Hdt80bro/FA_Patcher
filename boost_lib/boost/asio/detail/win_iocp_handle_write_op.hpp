//
// detail/win_iocp_handle_write_op.hpp
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
// Copyright (c) 2003-2018 Christopher M. Kohlhoff (chris at kohlhoff dot com)
// Copyright (c) 2008 Rep Invariant Systems, Inc. (info@repinvariant.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef BOOST_ASIO_DETAIL_WIN_IOCP_HANDLE_WRITE_OP_HPP
#define BOOST_ASIO_DETAIL_WIN_IOCP_HANDLE_WRITE_OP_HPP

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)

#include <boost/asio/detail/config.hpp>

#if defined(BOOST_ASIO_HAS_IOCP)

#include <boost/asio/error.hpp>
#include <boost/asio/detail/bind_handler.hpp>
#include <boost/asio/detail/buffer_sequence_adapter.hpp>
#include <boost/asio/detail/fenced_block.hpp>
#include <boost/asio/detail/handler_alloc_helpers.hpp>
#include <boost/asio/detail/handler_invoke_helpers.hpp>
#include <boost/asio/detail/memory.hpp>
#include <boost/asio/detail/operation.hpp>

#include <boost/asio/detail/push_options.hpp>

namespace boost
{
namespace asio
{
namespace detail
{

template <typename ConstBufferSequence, typename Handler>
class win_iocp_handle_write_op : public operation
{
public:
	BOOST_ASIO_DEFINE_HANDLER_PTR(win_iocp_handle_write_op);

	win_iocp_handle_write_op(const ConstBufferSequence& buffers, Handler& handler)
		: operation(&win_iocp_handle_write_op::do_complete),
		  buffers_(buffers),
		  handler_(BOOST_ASIO_MOVE_CAST(Handler)(handler))
	{
		handler_work<Handler>::start(handler_);
	}

	static void do_complete(void* owner, operation* base,
	                        const boost::system::error_code& ec, std::size_t bytes_transferred)
	{
		// Take ownership of the operation object.
		win_iocp_handle_write_op* o(static_cast<win_iocp_handle_write_op*>(base));
		ptr p = { boost::asio::detail::addressof(o->handler_), o, o };
		handler_work<Handler> w(o->handler_);

		BOOST_ASIO_HANDLER_COMPLETION((*o));

#if defined(BOOST_ASIO_ENABLE_BUFFER_DEBUGGING)
		if (owner)
		{
			// Check whether buffers are still valid.
			buffer_sequence_adapter<boost::asio::const_buffer,
			                        ConstBufferSequence>::validate(o->buffers_);
		}
#endif // defined(BOOST_ASIO_ENABLE_BUFFER_DEBUGGING)

		// Make a copy of the handler so that the memory can be deallocated before
		// the upcall is made. Even if we're not about to make an upcall, a
		// sub-object of the handler may be the true owner of the memory associated
		// with the handler. Consequently, a local copy of the handler is required
		// to ensure that any owning sub-object remains valid until after we have
		// deallocated the memory here.
		detail::binder2<Handler, boost::system::error_code, std::size_t>
		handler(o->handler_, ec, bytes_transferred);
		p.h = boost::asio::detail::addressof(handler.handler_);
		p.reset();

		// Make the upcall if required.
		if (owner)
		{
			fenced_block b(fenced_block::half);
			BOOST_ASIO_HANDLER_INVOCATION_BEGIN((handler.arg1_, handler.arg2_));
			w.complete(handler, handler.handler_);
			BOOST_ASIO_HANDLER_INVOCATION_END;
		}
	}

private:
	ConstBufferSequence buffers_;
	Handler handler_;
};

} // namespace detail
} // namespace asio
} // namespace boost

#include <boost/asio/detail/pop_options.hpp>

#endif // defined(BOOST_ASIO_HAS_IOCP)

#endif // BOOST_ASIO_DETAIL_WIN_IOCP_HANDLE_WRITE_OP_HPP
