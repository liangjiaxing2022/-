#include "stdafx.h"

/*

mov 
add

xor eax,eax  ���Ĵ�������


�����ж�
cmp
����������������
cmp eax,0  �ȼ��� sub  eax,0
�����cmp��������ֻ��� eflags�Ĵ����������޸�eax�Ĵ�����ֵ
ͨ�����JCCָ��ʹ��ʵ��������ת


JCCָ��
�κ����Եĵײ㣬ѭ���ṹ�������жϣ����ǻ���cflags�Ĵ��� + JCCָ��ʵ�ֵ�

int i=10;
if(i==10){
i=11;
}
i=12;

xor eax,eax
mov eax,10
cmp eax,10
je ��ַ
mov eax,12
mov eax,11

*/