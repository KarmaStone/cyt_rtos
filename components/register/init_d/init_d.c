#include <stdint.h>
#include <stddef.h>
#include "init_d.h"
#include "log.h"

extern uint32_t __fn1_start, __fn1_end;
extern uint32_t __fn2_start, __fn2_end;
extern uint32_t __fn3_start, __fn3_end;
extern uint32_t __fn4_start, __fn4_end;
extern uint32_t __fn5_start, __fn5_end;
extern uint32_t __fn6_start, __fn6_end;
extern uint32_t __fn7_start, __fn7_end;

void driver_init(void)
{
    initcall_t *tp;
    initcall_t *fn1_start = (initcall_t *)&__fn1_start;
    initcall_t *fn1_end = (initcall_t *)&__fn1_end;

    initcall_t *fn2_start = (initcall_t *)&__fn2_start;
    initcall_t *fn2_end = (initcall_t *)&__fn2_end;

    initcall_t *fn3_start = (initcall_t *)&__fn3_start;
    initcall_t *fn3_end = (initcall_t *)&__fn3_end;

    initcall_t *fn4_start = (initcall_t *)&__fn4_start;
    initcall_t *fn4_end = (initcall_t *)&__fn4_end;

    for (tp = fn1_start; tp < fn1_end; tp++)
    {
        if (tp != NULL)
        {
            tp->fun();
        }
        else
        {
            //log(ERR, "fn init is error , start=%x , end = %x\n", fn1_start, fn1_end);
        }
    }

    for (tp = fn2_start; tp < fn2_end; tp++)
    {
        if (tp != NULL)
        {
            tp->fun();
        }
        else
        {
            //log(ERR, "fn init is error , start=%x , end = %x\n", fn2_start, fn2_end);
        }
    }

    for (tp = fn3_start; tp < fn3_end; tp++)
    {
        if (tp != NULL)
        {
            tp->fun();
        }
        else
        {
            //log(ERR, "fn init is error , start=%x , end = %x\n", fn3_start, fn3_end);
        }
    }

    for (tp = fn4_start; tp < fn4_end; tp++)
    {
        if (tp != NULL)
        {
            tp->fun();
        }
        else
        {
            //log(ERR, "fn init is error , start=%x , end = %x\n", fn4_start, fn4_end);
        }
    }
}

void _setup(void)
{
    initcall_t *tp;
    initcall_t *fn5_start = (initcall_t *)&__fn5_start;
    initcall_t *fn5_end = (initcall_t *)&__fn5_end;

    for (tp = fn5_start; tp < fn5_end; tp++)
    {
        if (tp != NULL)
        {
            tp->fun();
        }
        else
        {
            //log(ERR, "fn init is error , start=%x , end = %x\n", fn5_start, fn5_end);
        }
    }
}

void _resume(void)
{
    initcall_t *tp;
    initcall_t *fn6_start = (initcall_t *)&__fn6_start;
    initcall_t *fn6_end = (initcall_t *)&__fn6_end;

    for (tp = fn6_start; tp < fn6_end; tp++)
    {
        if (tp != NULL)
        {
            tp->fun();
        }
        else
        {
            //log(ERR, "fn init is error , start=%x , end = %x\n", fn6_start, fn6_end);
        }
    }
}

void _suspend(void)
{
    initcall_t *tp;
    initcall_t *fn7_start = (initcall_t *)&__fn7_start;
    initcall_t *fn7_end = (initcall_t *)&__fn7_end;

    for (tp = fn7_start; tp < fn7_end; tp++)
    {
        if (tp != NULL)
        {
            tp->fun();
        }
        else
        {
            //log(ERR, "fn init is error , start=%x , end = %x\n", fn7_start, fn7_end);
        }
    }
}
