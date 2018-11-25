/*
 * Copyright 2010 Vicente J. Botet Escriba
 * Copyright 2015, 2017 Andrey Semashev
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef BOOST_WINAPI_EVENT_HPP_INCLUDED_
#define BOOST_WINAPI_EVENT_HPP_INCLUDED_

#include <boost/winapi/basic_types.hpp>

#ifdef BOOST_HAS_PRAGMA_ONCE
#pragma once
#endif

#if !defined( BOOST_USE_WINDOWS_H ) && BOOST_WINAPI_PARTITION_APP_SYSTEM
extern "C" {
#if !defined( BOOST_NO_ANSI_APIS )
	BOOST_SYMBOL_IMPORT boost::winapi::HANDLE_ WINAPI
	CreateEventA(
	    ::_SECURITY_ATTRIBUTES* lpEventAttributes,
	    boost::winapi::BOOL_ bManualReset,
	    boost::winapi::BOOL_ bInitialState,
	    boost::winapi::LPCSTR_ lpName);
#endif

	BOOST_SYMBOL_IMPORT boost::winapi::HANDLE_ WINAPI
	CreateEventW(
	    ::_SECURITY_ATTRIBUTES* lpEventAttributes,
	    boost::winapi::BOOL_ bManualReset,
	    boost::winapi::BOOL_ bInitialState,
	    boost::winapi::LPCWSTR_ lpName);
} // extern "C"
#endif // !defined( BOOST_USE_WINDOWS_H ) && BOOST_WINAPI_PARTITION_APP_SYSTEM

#if !defined( BOOST_USE_WINDOWS_H )
extern "C" {
#if !defined( BOOST_NO_ANSI_APIS )
#if BOOST_USE_WINAPI_VERSION >= BOOST_WINAPI_VERSION_WIN6
	BOOST_SYMBOL_IMPORT boost::winapi::HANDLE_ WINAPI
	CreateEventExA(
	    ::_SECURITY_ATTRIBUTES *lpEventAttributes,
	    boost::winapi::LPCSTR_ lpName,
	    boost::winapi::DWORD_ dwFlags,
	    boost::winapi::DWORD_ dwDesiredAccess);
#endif

	BOOST_SYMBOL_IMPORT boost::winapi::HANDLE_ WINAPI
	OpenEventA(
	    boost::winapi::DWORD_ dwDesiredAccess,
	    boost::winapi::BOOL_ bInheritHandle,
	    boost::winapi::LPCSTR_ lpName);
#endif // !defined( BOOST_NO_ANSI_APIS )

#if BOOST_USE_WINAPI_VERSION >= BOOST_WINAPI_VERSION_WIN6
	BOOST_SYMBOL_IMPORT boost::winapi::HANDLE_ WINAPI
	CreateEventExW(
	    ::_SECURITY_ATTRIBUTES *lpEventAttributes,
	    boost::winapi::LPCWSTR_ lpName,
	    boost::winapi::DWORD_ dwFlags,
	    boost::winapi::DWORD_ dwDesiredAccess);
#endif

	BOOST_SYMBOL_IMPORT boost::winapi::HANDLE_ WINAPI
	OpenEventW(
	    boost::winapi::DWORD_ dwDesiredAccess,
	    boost::winapi::BOOL_ bInheritHandle,
	    boost::winapi::LPCWSTR_ lpName);

// Windows CE define SetEvent/ResetEvent as inline functions in kfuncs.h
#if !defined( UNDER_CE )
	BOOST_SYMBOL_IMPORT boost::winapi::BOOL_ WINAPI
	SetEvent(boost::winapi::HANDLE_ hEvent);

	BOOST_SYMBOL_IMPORT boost::winapi::BOOL_ WINAPI
	ResetEvent(boost::winapi::HANDLE_ hEvent);
#endif
} // extern "C"
#endif

namespace boost
{
namespace winapi
{

#if !defined( BOOST_NO_ANSI_APIS )
using ::OpenEventA;
#endif
using ::OpenEventW;
using ::SetEvent;
using ::ResetEvent;

#if defined( BOOST_USE_WINDOWS_H )

const DWORD_ EVENT_ALL_ACCESS_ = EVENT_ALL_ACCESS;
const DWORD_ EVENT_MODIFY_STATE_ = EVENT_MODIFY_STATE;
#if BOOST_USE_WINAPI_VERSION >= BOOST_WINAPI_VERSION_WIN6
const DWORD_ CREATE_EVENT_INITIAL_SET_ = CREATE_EVENT_INITIAL_SET;
const DWORD_ CREATE_EVENT_MANUAL_RESET_ = CREATE_EVENT_MANUAL_RESET;
#endif

#else // defined( BOOST_USE_WINDOWS_H )

const DWORD_ EVENT_ALL_ACCESS_ = 0x001F0003;
const DWORD_ EVENT_MODIFY_STATE_ = 0x00000002;
#if BOOST_USE_WINAPI_VERSION >= BOOST_WINAPI_VERSION_WIN6
const DWORD_ CREATE_EVENT_INITIAL_SET_ = 0x00000002;
const DWORD_ CREATE_EVENT_MANUAL_RESET_ = 0x00000001;
#endif

#endif // defined( BOOST_USE_WINDOWS_H )

// Undocumented and not present in Windows SDK. Enables NtQueryEvent.
// http://undocumented.ntinternals.net/index.html?page=UserMode%2FUndocumented%20Functions%2FNT%20Objects%2FEvent%2FNtQueryEvent.html
const DWORD_ EVENT_QUERY_STATE_ = 0x00000001;

const DWORD_ event_all_access = EVENT_ALL_ACCESS_;
const DWORD_ event_modify_state = EVENT_MODIFY_STATE_;
#if BOOST_USE_WINAPI_VERSION >= BOOST_WINAPI_VERSION_WIN6
const DWORD_ create_event_initial_set = CREATE_EVENT_INITIAL_SET_;
const DWORD_ create_event_manual_reset = CREATE_EVENT_MANUAL_RESET_;
#endif

#if !defined( BOOST_NO_ANSI_APIS )
BOOST_FORCEINLINE HANDLE_ CreateEventA(SECURITY_ATTRIBUTES_* lpEventAttributes, BOOL_ bManualReset, BOOL_ bInitialState, LPCSTR_ lpName)
{
#if !BOOST_WINAPI_PARTITION_APP_SYSTEM && BOOST_USE_WINAPI_VERSION >= BOOST_WINAPI_VERSION_WIN6
	const DWORD_ flags = (bManualReset ? create_event_manual_reset : 0u) | (bInitialState ? create_event_initial_set : 0u);
	return ::CreateEventExA(reinterpret_cast< ::_SECURITY_ATTRIBUTES* >(lpEventAttributes), lpName, flags, event_all_access);
#else
	return ::CreateEventA(reinterpret_cast< ::_SECURITY_ATTRIBUTES* >(lpEventAttributes), bManualReset, bInitialState, lpName);
#endif
}

#if BOOST_USE_WINAPI_VERSION >= BOOST_WINAPI_VERSION_WIN6
BOOST_FORCEINLINE HANDLE_ CreateEventExA(SECURITY_ATTRIBUTES_* lpEventAttributes, LPCSTR_ lpName, DWORD_ dwFlags, DWORD_ dwDesiredAccess)
{
	return ::CreateEventExA(reinterpret_cast< ::_SECURITY_ATTRIBUTES* >(lpEventAttributes), lpName, dwFlags, dwDesiredAccess);
}
#endif
#endif

BOOST_FORCEINLINE HANDLE_ CreateEventW(SECURITY_ATTRIBUTES_* lpEventAttributes, BOOL_ bManualReset, BOOL_ bInitialState, LPCWSTR_ lpName)
{
#if !BOOST_WINAPI_PARTITION_APP_SYSTEM && BOOST_USE_WINAPI_VERSION >= BOOST_WINAPI_VERSION_WIN6
	const DWORD_ flags = (bManualReset ? create_event_manual_reset : 0u) | (bInitialState ? create_event_initial_set : 0u);
	return ::CreateEventExW(reinterpret_cast< ::_SECURITY_ATTRIBUTES* >(lpEventAttributes), lpName, flags, event_all_access);
#else
	return ::CreateEventW(reinterpret_cast< ::_SECURITY_ATTRIBUTES* >(lpEventAttributes), bManualReset, bInitialState, lpName);
#endif
}

#if BOOST_USE_WINAPI_VERSION >= BOOST_WINAPI_VERSION_WIN6
BOOST_FORCEINLINE HANDLE_ CreateEventExW(SECURITY_ATTRIBUTES_* lpEventAttributes, LPCWSTR_ lpName, DWORD_ dwFlags, DWORD_ dwDesiredAccess)
{
	return ::CreateEventExW(reinterpret_cast< ::_SECURITY_ATTRIBUTES* >(lpEventAttributes), lpName, dwFlags, dwDesiredAccess);
}
#endif

#if !defined( BOOST_NO_ANSI_APIS )
BOOST_FORCEINLINE HANDLE_ create_event(SECURITY_ATTRIBUTES_* lpEventAttributes, BOOL_ bManualReset, BOOL_ bInitialState, LPCSTR_ lpName)
{
	return winapi::CreateEventA(lpEventAttributes, bManualReset, bInitialState, lpName);
}

BOOST_FORCEINLINE HANDLE_ open_event(DWORD_ dwDesiredAccess, BOOL_ bInheritHandle, LPCSTR_ lpName)
{
	return ::OpenEventA(dwDesiredAccess, bInheritHandle, lpName);
}
#endif

BOOST_FORCEINLINE HANDLE_ create_event(SECURITY_ATTRIBUTES_* lpEventAttributes, BOOL_ bManualReset, BOOL_ bInitialState, LPCWSTR_ lpName)
{
	return winapi::CreateEventW(lpEventAttributes, bManualReset, bInitialState, lpName);
}

BOOST_FORCEINLINE HANDLE_ open_event(DWORD_ dwDesiredAccess, BOOL_ bInheritHandle, LPCWSTR_ lpName)
{
	return ::OpenEventW(dwDesiredAccess, bInheritHandle, lpName);
}

BOOST_FORCEINLINE HANDLE_ create_anonymous_event(SECURITY_ATTRIBUTES_* lpEventAttributes, BOOL_ bManualReset, BOOL_ bInitialState)
{
	return winapi::CreateEventW(lpEventAttributes, bManualReset, bInitialState, 0);
}

}
}

#endif // BOOST_WINAPI_EVENT_HPP_INCLUDED_
