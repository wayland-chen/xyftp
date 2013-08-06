/*
 * =====================================================================================
 *
 *       Filename:  log.h
 *
 *    Description:  日志处理
 *
 *        Version:  1.0
 *        Created:  2013年08月06日 11时08分36秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
 *        Company:  Class 1107 of Computer Science and Technology
 *
 * =====================================================================================
 */

#ifndef LOG_H_
#define LOG_H_

#include <syslog.h>

// 写入日志信息
void xyftp_write_log(int level, char *info);

#endif 	// LOG_H_

