#include <compiler.h>
#include <printk.h>
#include <sys/kernel.h>


    
void
handle_cpu_div_zero (void)
{
    printk(
        "divide by zero exception detected, handler for this exception is not "
        "implemented yet ... system will hlt");
    hlt();
}

void
handle_cpu_nmskable_intrpt (void)
{
    printk(
        "non maskable interrupt exception detected, handler for this "
        "exception is not implemented yet ... system will hlt");
    hlt();
}

void
handle_cpu_brkpoint (void)
{
    printk(
        "cpu breakpoint exception detected, handler for this exception "
        "is not implemented yet ... system will hlt");
    hlt();
}

void
handle_cpu_overflow (void)
{
    printk(
        "cpu overflow exception detected, handler for this exception "
        "is not implemented yet ... system will hlt");
    hlt();
}

void
handle_cpu_invalid_opcode (void)
{
    printk(
        "cpu invalid operation code exception detected, handler for this "
        "exception is not implemented yet ... system will hlt");
    hlt();
}

void
handle_cpu_double_fault (void)
{
    printk(
        "cpu double fault exception detected, handler for this exception "
        "is not implemented yet ... system will hlt");
    hlt();
}

void
handle_cpu_invalid_tss (void)
{
    printk(
        "cpu invalid TSS exception detected, handler for this exception "
        "is not implemented yet ... system will hlt");
    hlt();
}

void
handle_cpu_segment_not_prsnt (void)
{
    printk(
        "cpu segment not present exception detected, handler for this "
        "exception is not implemented yet ... system will hlt");
    hlt();
}

void
handle_cpu_stack_segment_fault (void)
{
    printk(
        "cpu stack segment fault exception detected, handler for this "
        "exception is not implemented yet ... system will hlt");
    hlt();
}

void
handle_cpu_general_protection_fault (void)
{
    printk(
        "cpu general protection fault exception detected, handler for "
        "this exception is not implemented yet ... system will hlt");
    hlt();
}


/*
 * the *base* field for all entries of the IDT should be initially set
 * to the address of this function
*/
void
default_interrupt_handler (void)
{
    printk(
       "bleep blob unhandled interrupt or cpu exception .. system will halt");
    hlt();
}
