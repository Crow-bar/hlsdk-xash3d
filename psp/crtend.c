#ifdef __PSP__
#pragma GCC push_options
#pragma GCC optimize ("O0")

#include <stdio.h>

typedef void (*CDtor)(void);


static CDtor ctors[1]
__attribute__ ((used, section(".ctors"), aligned(sizeof(CDtor))))
    = { (CDtor)(0) };
	
#pragma GCC pop_options
#endif