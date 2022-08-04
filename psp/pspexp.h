/*
pspexp.h - Sony PSP Function export helper
Copyright (C) 2022 Sergey Galushko

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
*/
#ifndef PSPEXP_H
#define PSPEXP_H

typedef struct pspexport_s
{
	const char	*name;
	void		*addr;
} pspexport_t;

#define PSPEXPORTBEGIN    static pspexport_t __PSPEXP_begin__[1] __attribute__ ((used, section(".pspexp"), aligned(sizeof(pspexport_t)))) = { (const char *)-1, (void *)-1 }
#define PSPEXPORTFUN(X)   static pspexport_t __PSPEXP_##X __attribute__ ((used, section(".pspexp"), aligned(sizeof(pspexport_t)))) = { #X, (void*)X }
#define PSPEXPORTFUNWD(X) void X(); static pspexport_t __PSPEXP_##X __attribute__ ((used, section(".pspexp"), aligned(sizeof(pspexport_t)))) = { #X, (void*)X }
#define PSPEXPORTEND      static pspexport_t __PSPEXP_end__[1] __attribute__ ((used, section(".pspexp"), aligned(sizeof(pspexport_t)))) = { (const char *)0, (void *)0 }

#ifdef __cplusplus
extern "C"
#endif
void *PSP_ExportGetPtr(void);

#endif // PSPEXP_H
