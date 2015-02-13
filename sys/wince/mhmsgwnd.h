/* NetHack 3.5	mhmsgwnd.h	$Date$  $Revision$ */
/*	SCCS Id: @(#)mhmsgwnd.h	3.5	2005/01/23	*/
/* Copyright (C) 2001 by Alex Kompel 	 */
/* NetHack may be freely redistributed.  See license for details. */

#ifndef MSWINMessageWindow_h
#define MSWINMessageWindow_h

#include "winMS.h"
#include "config.h"
#include "global.h"

HWND mswin_init_message_window ();
void mswin_message_window_size (HWND hWnd, LPSIZE sz);


#endif /* MSWINMessageWindow_h */