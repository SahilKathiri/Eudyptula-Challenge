/**
 * hello_world.c
 * Module author: 3330aaa2c108
 * Module Description: 
 * Module Licence: GPL
 */
#define DRIVER_AUTHOR "3330aaa2c108"
#define DRIVER_DESC   "Hello World Module"

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int hello_init(void) {
	printk(KERN_DEBUG "Hello World!\n");
	return 0;
}

static void hello_exit(void) {
	printk(KERN_DEBUG "See you later.\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
