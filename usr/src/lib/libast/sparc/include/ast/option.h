
/* : : generated by proto : : */
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
                  
/*
 * Glenn Fowler
 * AT&T Research
 *
 * command line option parse interface
 */

#ifndef _OPTION_H
#if !defined(__PROTO__)
#include <prototyped.h>
#endif
#if !defined(__LINKAGE__)
#define __LINKAGE__		/* 2004-08-11 transition */
#endif

#define _OPTION_H

#include <ast.h>

#define OPT_VERSION	20070319L

#define OPT_USER	(1L<<16)	/* first user flag bit		*/

struct Opt_s;
struct Optdisc_s;

typedef int (*Optinfo_f) __PROTO__((struct Opt_s*, Sfio_t*, const char*, struct Optdisc_s*));

typedef struct Optdisc_s
{
	unsigned long	version;	/* OPT_VERSION			*/
	unsigned long	flags;		/* OPT_* flags			*/
	char*		catalog;	/* error catalog id		*/
	Optinfo_f	infof;		/* runtime info function	*/
} Optdisc_t;

/* NOTE: Opt_t member order fixed by a previous binary release */

#ifndef _OPT_PRIVATE_
#define _OPT_PRIVATE_	\
	char		pad[3*sizeof(__V_*)];
#endif

typedef struct Opt_s
{
	int		again;		/* see optjoin()		*/
	char*		arg;		/* {:,#} string argument	*/
	char**		argv;		/* most recent argv		*/
	int		index;		/* argv index			*/
	char*		msg;		/* error/usage message buffer	*/
	long		num;		/* OBSOLETE -- use number	*/
	int		offset;		/* char offset in argv[index]	*/
	char		option[8];	/* current flag {-,+} + option  */
	char		name[64];	/* current long name or flag	*/
	Optdisc_t*	disc;		/* user discipline		*/
	intmax_t	number;		/* # numeric argument		*/
	unsigned char	assignment;	/* option arg assigment op	*/
	unsigned char	pads[sizeof(__V_*)-1];
	_OPT_PRIVATE_
} Opt_t;

#if _BLD_ast && defined(__EXPORT__)
#undef __MANGLE__
#define __MANGLE__ __LINKAGE__ __EXPORT__
#endif
#if !_BLD_ast && defined(__IMPORT__)
#undef __MANGLE__
#define __MANGLE__ __LINKAGE__ __IMPORT__
#endif

extern __MANGLE__ Opt_t*		_opt_infop_;

#define opt_info	(*_opt_infop_)

#undef __MANGLE__
#define __MANGLE__ __LINKAGE__

#define optinit(d,f)	(memset(d,0,sizeof(*(d))),(d)->version=OPT_VERSION,(d)->infof=(f),opt_info.disc=(d))

#if _BLD_ast && defined(__EXPORT__)
#undef __MANGLE__
#define __MANGLE__ __LINKAGE__		__EXPORT__
#endif

extern __MANGLE__ int		optget __PROTO__((char**, const char*));
extern __MANGLE__ int		optjoin __PROTO__((char**, ...));
extern __MANGLE__ char*		opthelp __PROTO__((const char*, const char*));
extern __MANGLE__ char*		optusage __PROTO__((const char*));
extern __MANGLE__ int		optstr __PROTO__((const char*, const char*));
extern __MANGLE__ int		optesc __PROTO__((Sfio_t*, const char*, int));
extern __MANGLE__ Opt_t*		optctx __PROTO__((Opt_t*, Opt_t*));

#undef __MANGLE__
#define __MANGLE__ __LINKAGE__

#endif
