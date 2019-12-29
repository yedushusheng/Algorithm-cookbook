#include<stdio.h>
#include<stdlib.h>

typedef struct LinkListNode{
	int element;
	LinkList *next;	
}LinkListNode;

typedef LinkListNode *LinkList;

/*»ñÈ¡ÔªËØ*/
int GetElement(LinkList L,int index,int *e){
	int i;
	LinkList p;
	p=L->next;
	for(i<index && p){
	    p=p->next;
	    ++i;
	}
	*e=p->element;
	return 1;
}

