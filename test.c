#include <linux/init.h>
#include <linux/module.h>
#include<linux/moduleparam.h>

int param_var = 0;

void display(void){
printk(KERN_ALERT "TEST: param = %d" ,param_var);
}
module_param(param_var,int, S_IRUSR | S_IWUSR);
static int hello_init(void){
	printk(KERN_ALERT "TEST: Hello world");
display();
 return 0;
}

static void hello_exit(void){
	printk(KERN_ALERT "TEST: Hello world");
}

module_init(hello_init);
module_exit(hello_exit);
