#include "stdafx.h"


/*

CPU四组寄存器及常用汇编指令

通用寄存器
（
eax
ebx
ecx
edx
edi

eip

esp
ebp


rax 64位
   eax 32位
      ax  16位
	    ah  8位
		al  8位


rax 后面一半是 eax
如此类推，eax后面一半是 ax

）


段寄存器
(
cs  code  segment代码段
ss  stack  segment 栈段
)

控制寄存器
（
cr1 到 cr5

cr2记录内存错误地址
）

状态寄存器  eflags
浮点寄存器

其中 通用寄存器，段寄存器，状态寄存器 是能看到的。
控制寄存器是看不到的

怎么看寄存器 
vs2013  调试-窗口-寄存器

*/