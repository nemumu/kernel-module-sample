#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("BSD");

/* Module Init */
static int kit_init(void) {
    printk(KERN_INFO "Module Init!\n");
    return 0;
}

/* Module Exit */
static void kit_exit(void) {
    printk(KERN_INFO "Module Exit!\n");
}

module_init(kit_init);
module_exit(kit_exit);
