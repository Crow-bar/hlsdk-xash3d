/* C++ startup code */
#include <stdint.h>

typedef void (*func_ptr) (void);

#ifdef CRT_BEGIN
void *__dso_handle = &__dso_handle;

static func_ptr __CTOR_LIST__[1] __attribute__ ((section (".ctors"), aligned(sizeof(func_ptr))))
     = { (func_ptr) (-1) };

static func_ptr __DTOR_LIST__[1] __attribute__ ((section (".dtors"), aligned(sizeof(func_ptr))))
     = { (func_ptr) (-1) };

/* Run all the global destructors */
void __do_global_dtors( void )
{
	func_ptr *p;
	for ( p = __DTOR_LIST__ + 1; *p; p++ ){
		( *p )();
	}
}
#endif // CRT_BEGIN

#ifdef CRT_END
static func_ptr __CTOR_END__[1] __attribute__ ((section (".ctors"), aligned(sizeof(func_ptr))))
     = { (func_ptr) 0 };

static func_ptr __DTOR_END__[1] __attribute__ ((section (".dtors"), aligned(sizeof(func_ptr))))
     = { (func_ptr) 0 };

/* Run all the global constructors */
void __do_global_ctors( void )
{
	func_ptr *p;
	for ( p = __CTOR_END__ - 1; *p != ( func_ptr ) -1; p-- ){
		( *p )();
	}
}
#endif // CRT_END
