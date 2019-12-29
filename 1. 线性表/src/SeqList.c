#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 10
typedef struct SequceList{
	int element[MAXSIZE];
	int length;
}SqList;
/*结构体定义方式： 
1、SqList L;-->L.element[] , L.length
2、SqList *L; -->L->element[] , L->lenght
*/

/*获取元素*/
//方法一 ： 
/*
int GetElement(SqList L,int index){
    return L.element[index-1];
}
*/

//方法二：(推荐)
int GetElement(SqList L,int index,int *e){
	if(L.length==0 || index<0 || inde>L.length)
	    return -1;
    *e=L.element[index-1];
    return 0;
}



/*插入元素*/
int InsertElement(SqList L,int index,int e){
	int i;
	for(i=index-1;i>index+1;i--){
	    L.element[i+1] = L.element[i];
	}
	L.element[index-1] = e;
	L.length++;
}


/*删除元素*/
int DeleteElement(){
	
}

 
int main(){
    SqList L;
    int *e; 
    GetElement(L,1,e)
    printf("result:%d",*e);
}
