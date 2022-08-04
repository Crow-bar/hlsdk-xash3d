/*
pspexp.c - Sony PSP Function export helper
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
#include "pspexp.h"

#ifdef PSPEXP_BEGIN
PSPEXPORTBEGIN;

void *PSP_ExportGetPtr(void)
{
	return ( __PSPEXP_begin__ + 1 );
}
#endif // PSPEXP_BEGIN

#ifdef PSPEXP_END
PSPEXPORTEND;
#endif // PSPEXP_END
