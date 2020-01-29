#include<stdio.h>
#include<stdlib.h>

/*
函数名称：RecursiveStringLength
入    参：字符串数组头指针ch 
出    参：字符串长度 
返 回 值: 字符串长度 
功    能：递归遍历字符并获取长度信息*/
int RecursiveStringLength(char *ch)
{
	if(ch[0] == '\0')/*如果数组的第一个元素就是结束符,此时直接返回长度为0*/
		return 0;
	else
		return RecursiveStringLength(ch+1)+1; /*每调用一次则入参向后移动一位,且返回值值+1,递归函数在找到最后结束符时自动停止*/
}

int main()
{
	char ch[] = "L love coding";/*字符数组,自动以'\0'结尾*/
	printf("char length is :%d\n",RecursiveStringLength(ch));
	getchar();	
}
