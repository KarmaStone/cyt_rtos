#ifndef __INIT_D_H__
#define __INIT_D_H__


#ifdef __cplusplus
 extern "C" {
#endif

#include <stdbool.h>

#if 0
#pragma section ="fn1"
#pragma section ="fn2"
#pragma section ="fn3"
#pragma section ="fn4"
#pragma section ="fn5"
#pragma section ="fn6"
#pragma section ="fn7"

#define FN1  @ "fn1"
#define FN2  @ "fn2"
#define FN3  @ "fn3"
#define FN4  @ "fn4"
#define FN5  @ "fn5"
#define FN6  @ "fn6"
#define FN7  @ "fn7"
#endif

#define FN1  __attribute__ ((unused,section(".fn1")))
#define FN2  __attribute__ ((unused,section(".fn2")))
#define FN3  __attribute__ ((unused,section(".fn3")))
#define FN4  __attribute__ ((unused,section(".fn4")))
#define FN5  __attribute__ ((unused,section(".fn5")))
#define FN6  __attribute__ ((unused,section(".fn6")))
#define FN7  __attribute__ ((unused,section(".fn7")))


 typedef struct  _initcall_t
 {
 	int (*fun)( void);
 }initcall_t;

#define __define_initcall(fn,id) static initcall_t  __initcall_##fn FN##id = { fn }



#define arch_init(fn)       	__define_initcall( fn , 1)
#define device_init(fn)     	__define_initcall( fn , 2)
#define modules_init(fn)    	 __define_initcall( fn , 3)
#define comp_init(fn)       	__define_initcall( fn , 4)
#define task_init(fn)       	__define_initcall( fn , 5)
#define resume_register(fn)     __define_initcall( fn , 6)
#define suspend_register(fn)    __define_initcall( fn , 7)

#define INIT_OK         0
#define INIT_FAIL       (!INIT_OK)
    
extern void driver_init(void);
extern void _setup( void );
extern void _resume( void );
extern void _suspend( void );

#ifdef __cplusplus
}
#endif   

#endif /* __DRIVER_REGISTER_H */
