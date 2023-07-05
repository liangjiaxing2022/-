#include "stdafx.h"
/*
[ORG  Ox7c00]
[SECTION .text]
[BITS 16]
global _start
_start:
  mov ax,3
  int 0x10

  mov ax,0
  call print

  jmp $

print:
  mov ah,0x0e
  mov bh,0

.loop:
  mov al,[si]
  cmp al,0
  jz .done
  int 0x10

  inc si
  jmp .loop

伪指令：org, section , bits
特殊符号 ： $,$$

ORG 定义一个锚点
BITS 告诉汇编编译器，下面写的代码是16位的（因为在保护模式下）


print 函数名

.loop 也是一个锚点

MBR(0柱面  0磁道  1扇区的位置)：
尾部的两个字节  55 aa

*/