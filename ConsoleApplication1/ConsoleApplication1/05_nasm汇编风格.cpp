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

αָ�org, section , bits
������� �� $,$$

ORG ����һ��ê��
BITS ���߻�������������д�Ĵ�����16λ�ģ���Ϊ�ڱ���ģʽ�£�


print ������

.loop Ҳ��һ��ê��

MBR(0����  0�ŵ�  1������λ��)��
β���������ֽ�  55 aa

*/