#ifndef __COLOR_DEBUG_H__
#define __COLOR_DEBUG_H__

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

#include <linux/kernel.h>

/**定义打印函数printk:内核使用，printf:linux c应用层使用**/
#define PRINT_FUN	printk

/**版本号**/
#define COLOR_DEBUG_VERSION	("1.0.0")

/*******************************字体颜色*****************************************/
/**清除**/
#define	COLOR_NONE		"\033[0m"
/**黑色**/
#define	COLOR_BLACK		"\033[30m"
/**红色**/
#define	COLOR_RED		"\033[31m"
/**绿色**/
#define	COLOR_GREEN		"\033[32m"
/**黄色**/
#define	COLOR_YELLOW	"\033[33m"
/**蓝色**/
#define	COLOR_BLUE		"\033[34m" 
/**紫色**/
#define	COLOR_PURPLE	"\033[35m" 
/**天蓝**/
#define	COLOR_SKY_BLUE	"\033[36m" 
/**白色**/
#define	COLOR_WHITE		"\033[37m" 

/*******************************背景颜色*****************************************/
/**黑色底**/
#define	COLOR_BG_BLACK		"\033[40m"
/**红色底**/
#define	COLOR_BG_RED		"\033[41m"
/**绿色底**/
#define	COLOR_BG_GREEN		"\033[42m"
/**黄色底**/
#define	COLOR_BG_YELLOW		"\033[43m"
/**蓝色底**/
#define	COLOR_BG_BLUE		"\033[44m" 
/**紫色底**/
#define	COLOR_BG_PURPLE		"\033[45m" 
/**天蓝底**/
#define	COLOR_BG_SKY_BLUE	"\033[46m" 
/**白底**/
#define	COLOR_BG_WHITE		"\033[47m" 

#define COLOR_BLK_WH		"\033[40;37m"

/*******************************打印函数*****************************************/
#define cl_version() \
	PRINT_FUN(COLOR_BLK_WH "color debug version is %s" COLOR_NONE "\r\n", COLOR_DEBUG_VERSION)

/**默认调试颜色**/
#define cl_debug(fmt, ...) \
	PRINT_FUN(COLOR_GREEN fmt COLOR_NONE, ##__VA_ARGS__)
	
#define cl_focus1(fmt, ...) \
	PRINT_FUN(COLOR_BG_YELLOW fmt COLOR_NONE, ##__VA_ARGS__)
	
#define cl_focus2(fmt, ...) \
	PRINT_FUN(COLOR_BG_SKY_BLUE fmt COLOR_NONE, ##__VA_ARGS__)

/**所有颜色接口**/
#define cl_debug_bk(fmt, ...) \
	PRINT_FUN(COLOR_BLACK fmt COLOR_NONE, ##__VA_ARGS__)

#define cl_debug_rd(fmt, ...) \
	PRINT_FUN(COLOR_RED fmt COLOR_NONE, ##__VA_ARGS__)
	
#define cl_debug_gn(fmt, ...) \
	PRINT_FUN(COLOR_GREEN fmt COLOR_NONE, ##__VA_ARGS__)
	
#define cl_debug_ye(fmt, ...) \
	PRINT_FUN(COLOR_YELLOW fmt COLOR_NONE, ##__VA_ARGS__)
	
#define cl_debug_bu(fmt, ...) \
	PRINT_FUN(COLOR_BLUE fmt COLOR_NONE, ##__VA_ARGS__)
	
#define cl_debug_pp(fmt, ...) \
	PRINT_FUN(COLOR_PURPLE fmt COLOR_NONE, ##__VA_ARGS__)	
	
#define cl_debug_sky_bu(fmt, ...) \
	PRINT_FUN(COLOR_SKY_BLUE fmt COLOR_NONE, ##__VA_ARGS__)	
	
#define cl_debug_wh(fmt, ...) \
	PRINT_FUN(COLOR_WHITE fmt COLOR_NONE, ##__VA_ARGS__)

#endif /**__COLOR_DEBUG_H__**/