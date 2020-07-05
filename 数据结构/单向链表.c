#include<stdio.h>
#include<stdlib.h>

struct list {
	int data;
	struct list *next;
};

struct list *createListNode() {//创建节点 
	
	return (struct list *) malloc(sizeof(struct list));
	
}

void traverse(struct list *list) {//遍历俩表 
	
	struct list *p = list;
	
	while(p != NULL) {
		printf("%d\n", p->data);
		p = p->next;
	}	
} 
void insertListNode(struct list *list, int n, int data) {//在入第n+1个节点后插入节点 
	
	struct list *p = list;
	struct list *p1 = createListNode();

	p1->data = data;
	
	while(p && n--) {
		p = p->next;
	} 

	if(p == NULL) {
		
		return NULL;
	}

	p1->next = p->next;
	p->next = p1;
	
	return p1;
} 

int deletListNode(struct list *list, int n) {//删除第n+1个节点 
	
	struct list *p = list;
	
	while(p && n--) {
		p = p->next;
	}
	
	if(p == NULL) {//n超出范围 
		return -1;
	}
	
	struct list *p1 = p->next;
	p->next = p->next->next;
	free(p1);
	
	return 0;//删除成功 
} 


int main() {
	
    struct list *L = createListNode();;
	struct list *p = L;
	
	p->data = 1;
	
	p->next = createListNode();
	p = p->next;
	p->data = 2;
	
	p->next = NULL;//链表的最后一个节点 
	insertListNode(L, 1, 3);
	insertListNode(L, 2, 4);
	traverse(L);
	deletListNode(L, 2); 
	traverse(L);
	
	
	return 0;
}
