#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static void greet(char *g)
{
  printk(KERN_INFO "%s WORLD\n", g);
}  

static int hello(void)
{
  char *hi = "HELLO";
  greet(hi);
  return 0;
}

void goodbye(void)
{
  char *bye = "GOODBYE";
  greet(bye);
}

module_init(hello)
module_exit(goodbye)
