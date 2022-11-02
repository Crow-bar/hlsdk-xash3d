/*
client_psp.c - HLSDK Client module startup
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

PSP_MODULE_INFO( "client", 0, 1, 1 );
PSP_HEAP_SIZE_KB( 128 );
PSP_NO_CREATE_MAIN_THREAD();

void __do_global_dtors( void );
void __do_global_ctors( void );

extern void __psp_libc_init( int argc, char *argv[] );
extern int __psp_free_heap( void );

PSPEXPORTFUNWD( Initialize );
PSPEXPORTFUNWD( HUD_VidInit );
PSPEXPORTFUNWD( HUD_Init );
PSPEXPORTFUNWD( HUD_Shutdown );
PSPEXPORTFUNWD( HUD_Redraw );
PSPEXPORTFUNWD( HUD_UpdateClientData );
PSPEXPORTFUNWD( HUD_Reset );
PSPEXPORTFUNWD( HUD_PlayerMove );
PSPEXPORTFUNWD( HUD_PlayerMoveInit );
PSPEXPORTFUNWD( HUD_PlayerMoveTexture );
PSPEXPORTFUNWD( HUD_ConnectionlessPacket );
PSPEXPORTFUNWD( HUD_GetHullBounds );
PSPEXPORTFUNWD( HUD_Frame );
PSPEXPORTFUNWD( HUD_PostRunCmd );
PSPEXPORTFUNWD( HUD_Key_Event );
PSPEXPORTFUNWD( HUD_AddEntity );
PSPEXPORTFUNWD( HUD_CreateEntities );
PSPEXPORTFUNWD( HUD_StudioEvent );
PSPEXPORTFUNWD( HUD_TxferLocalOverrides );
PSPEXPORTFUNWD( HUD_ProcessPlayerState );
PSPEXPORTFUNWD( HUD_TxferPredictionData );
PSPEXPORTFUNWD( HUD_TempEntUpdate );
PSPEXPORTFUNWD( HUD_DrawNormalTriangles );
PSPEXPORTFUNWD( HUD_DrawTransparentTriangles );
PSPEXPORTFUNWD( HUD_GetUserEntity );
PSPEXPORTFUNWD( Demo_ReadBuffer );
PSPEXPORTFUNWD( CAM_Think );
PSPEXPORTFUNWD( CL_IsThirdPerson );
PSPEXPORTFUNWD( CL_CameraOffset );
PSPEXPORTFUNWD( CL_CreateMove );
PSPEXPORTFUNWD( IN_ActivateMouse );
PSPEXPORTFUNWD( IN_DeactivateMouse );
PSPEXPORTFUNWD( IN_MouseEvent );
PSPEXPORTFUNWD( IN_Accumulate );
PSPEXPORTFUNWD( IN_ClearStates );
PSPEXPORTFUNWD( V_CalcRefdef );
PSPEXPORTFUNWD( KB_Find );
PSPEXPORTFUNWD( HUD_GetStudioModelInterface );
PSPEXPORTFUNWD( HUD_DirectorMessage );
PSPEXPORTFUNWD( HUD_VoiceStatus );
PSPEXPORTFUNWD( IN_ClientMoveEvent );
PSPEXPORTFUNWD( IN_ClientLookEvent );

int module_start( SceSize arglen, void *argp )
{
	void	**expptr;
	char	*rootdir;
	char	*libc_argv[2];

	expptr = (void**)((unsigned int*)argp)[0];
	rootdir = ( arglen > 4 ) ? (char*)((unsigned int*)argp)[1] : NULL;

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
