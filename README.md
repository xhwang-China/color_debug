# color_debug
个人使用，在内核下调试打印信息带颜色，也可在linux c应用程序中使用，需要配合支持颜色的终端工具，如：crt、mobaXterm等

/**
 *创建时间：2020年3月4日 17:41:04
 *修改时间：2020年3月4日 17:41:09
 *作者：王晓辉
 *邮箱：370982075@qq.com
 *用法步骤：
 *方法一：	1、复制本头文件到内核路径include/linux/文件夹下
 *			2、在文件include/linux/printk.h中末尾加上
 *				#include <linux/color_debug.h>
 *
 *方式二：	在需要调用的代码中#include <linux/color_debug.h>
 *
**/
