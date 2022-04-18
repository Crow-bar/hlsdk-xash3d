#ifdef __PSP__
#pragma GCC push_options
#pragma GCC optimize ("O0")

#include <stdint.h>

void *__dso_handle = &__dso_handle;

typedef void (*CDtor)(void);

static CDtor ctors[1]
__attribute__ ((unused, section(".ctors"), aligned(sizeof(CDtor))))
    = { (CDtor)(-1) };

extern CDtor __init_array_start __attribute__ ((visibility ("hidden")));
extern CDtor __init_array_end __attribute__ ((visibility ("hidden")));

static void call_global_ctors(void)
{
    intptr_t n = (intptr_t)ctors[0];

    if(n == -1) {
        for(n = 0; ctors[n + 1] != 0; n++);
    }

	intptr_t i;
    for( i = n; i >= 1; i--) {
        ctors[i]();
    }
}

static void call_init_array(void)
{
	CDtor *ctor;
    for( ctor = &__init_array_start; ctor < &__init_array_end; ctor++) {
        (*ctor)();
    }
}

void __global_ctors(int argc, char *argv[])
{
    call_global_ctors();
    //call_init_array();
}

#pragma GCC pop_options
#endif