/*
server_psp.c - HLSDK Server module startup
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
#include <pspkernel.h>
#include <stdio.h>
#include "pspexp.h"

PSP_MODULE_INFO( "server", 0, 1, 1 );
PSP_HEAP_SIZE_KB( 384 );
PSP_NO_CREATE_MAIN_THREAD();

void __do_global_dtors( void );
void __do_global_ctors( void );

extern void __psp_libc_init( int argc, char *argv[] );
extern int __psp_free_heap( void );

PSPEXPORTFUNWD( GiveFnptrsToDll );
PSPEXPORTFUNWD( GetEntityAPI );
PSPEXPORTFUNWD( GetEntityAPI2 );

int module_start( SceSize arglen, void *argp )
{
	void	**expptr;
	char	*rootdir;
	char	*libc_argv[2];

	expptr = ( void** )(( unsigned int* )argp )[0];
	rootdir = ( arglen > 4 ) ? ( char* )(( unsigned int* )argp )[1] : NULL;

	*expptr = PSP_ExportGetPtr();

	libc_argv[0] = rootdir;
	libc_argv[1] = NULL;

	if( __psp_libc_init != NULL )
		__psp_libc_init( 1, libc_argv );
	__do_global_ctors();

	return 0;
}

int module_stop( SceSize arglen, void *argp )
{
	__do_global_dtors();
	__psp_free_heap();

	return 0;
}
