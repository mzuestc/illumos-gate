/***********************************************************************
*                                                                      *
*               This software is part of the ast package               *
*          Copyright (c) 1985-2008 AT&T Intellectual Property          *
*                      and is licensed under the                       *
*                  Common Public License, Version 1.0                  *
*                    by AT&T Intellectual Property                     *
*                                                                      *
*                A copy of the License is available at                 *
*            http://www.opensource.org/licenses/cpl1.0.txt             *
*         (with md5 checksum 059e8cd6165cb4c31e351f2b69388fd9)         *
*                                                                      *
*              Information and Software Systems Research               *
*                            AT&T Research                             *
*                           Florham Park NJ                            *
*                                                                      *
*                 Glenn Fowler <gsf@research.att.com>                  *
*                  David Korn <dgk@research.att.com>                   *
*                   Phong Vo <kpv@research.att.com>                    *
*                                                                      *
***********************************************************************/

/* : : generated by proto : : */
/* : : generated from /home/gisburn/ksh93/ast_ksh_20081104/build_i386_64bit/src/lib/libast/features/time by iffe version 2008-01-31 : : */
                  
#ifndef _def_time_ast
#if !defined(__PROTO__)
#  if defined(__STDC__) || defined(__cplusplus) || defined(_proto) || defined(c_plusplus)
#    if defined(__cplusplus)
#      define __LINKAGE__	"C"
#    else
#      define __LINKAGE__
#    endif
#    define __STDARG__
#    define __PROTO__(x)	x
#    define __OTORP__(x)
#    define __PARAM__(n,o)	n
#    if !defined(__STDC__) && !defined(__cplusplus)
#      if !defined(c_plusplus)
#      	define const
#      endif
#      define signed
#      define void		int
#      define volatile
#      define __V_		char
#    else
#      define __V_		void
#    endif
#  else
#    define __PROTO__(x)	()
#    define __OTORP__(x)	x
#    define __PARAM__(n,o)	o
#    define __LINKAGE__
#    define __V_		char
#    define const
#    define signed
#    define void		int
#    define volatile
#  endif
#  define __MANGLE__	__LINKAGE__
#  if defined(__cplusplus) || defined(c_plusplus)
#    define __VARARG__	...
#  else
#    define __VARARG__
#  endif
#  if defined(__STDARG__)
#    define __VA_START__(p,a)	va_start(p,a)
#  else
#    define __VA_START__(p,a)	va_start(p)
#  endif
#  if !defined(__INLINE__)
#    if defined(__cplusplus)
#      define __INLINE__	extern __MANGLE__ inline
#    else
#      if defined(_WIN32) && !defined(__GNUC__)
#      	define __INLINE__	__inline
#      endif
#    endif
#  endif
#endif
#if !defined(__LINKAGE__)
#define __LINKAGE__		/* 2004-08-11 transition */
#endif

#define _def_time_ast	1
#define _sys_types	1	/* #include <sys/types.h> ok */
#define _lib_nanosleep	1	/* nanosleep() in default lib(s) */
#define _lib_usleep	1	/* usleep() in default lib(s) */
#define _hdr_time	1	/* #include <time.h> ok */
#define _sys_time	1	/* #include <sys/time.h> ok */
#define _sys_times	1	/* #include <sys/times.h> ok */
#define _hdr_stddef	1	/* #include <stddef.h> ok */
#define _hdr_stdlib	1	/* #include <stdlib.h> ok */
#define _typ_clock_t	1	/* clock_t is a type */
#define _typ_time_t	1	/* time_t is a type */
#include <sys/time.h>

#include <sys/times.h>

#if !defined(CLOCKS_PER_SEC) && defined(CLK_TCK)
#define CLOCKS_PER_SEC	CLK_TCK
#endif

#endif
