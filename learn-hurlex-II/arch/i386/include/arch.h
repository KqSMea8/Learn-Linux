/*
 * =====================================================================================
 *
 *       Filename:  arch.h
 *
 *    Description:  架构相关的头文件引用
 *
 *        Version:  1.0
 *        Created:  2014年11月05日 09时48分34秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Qianyi.lh (liuhuan), qianyi.lh@alibaba-inc.com
 *        Company:  Alibaba-Inc Aliyun
 *
 * =====================================================================================
 */

#ifndef ARCH_H_
#define ARCH_H_

#include "gdt.h"
#include "intr.h"
#include "pic.h"
#include "clock.h"
#include "console.h"
#include "task.h"

// 架构相关的初始化
void arch_init(void);

#endif  // ARCH_H_
