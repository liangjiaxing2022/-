#include "stdafx.h"


/*

CPU����Ĵ��������û��ָ��

ͨ�üĴ���
��
eax
ebx
ecx
edx
edi

eip

esp
ebp


rax 64λ
   eax 32λ
      ax  16λ
	    ah  8λ
		al  8λ


rax ����һ���� eax
������ƣ�eax����һ���� ax

��


�μĴ���
(
cs  code  segment�����
ss  stack  segment ջ��
)

���ƼĴ���
��
cr1 �� cr5

cr2��¼�ڴ�����ַ
��

״̬�Ĵ���  eflags
����Ĵ���

���� ͨ�üĴ������μĴ�����״̬�Ĵ��� ���ܿ����ġ�
���ƼĴ����ǿ�������

��ô���Ĵ��� 
vs2013  ����-����-�Ĵ���

*/