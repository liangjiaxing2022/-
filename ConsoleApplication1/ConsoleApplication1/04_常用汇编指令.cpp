#include "stdafx.h"

/*

mov 
add

xor eax,eax  给寄存器清零


条件判断
cmp
本质上做减法运算
cmp eax,0  等价于 sub  eax,0
差别是cmp的运算结果只会改 eflags寄存器，不会修改eax寄存器的值
通常配合JCC指令使用实现条件跳转


JCC指令
任何语言的底层，循环结构及条件判断，都是基于cflags寄存器 + JCC指令实现的

int i=10;
if(i==10){
i=11;
}
i=12;

xor eax,eax
mov eax,10
cmp eax,10
je 地址
mov eax,12
mov eax,11

*/