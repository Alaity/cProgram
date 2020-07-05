#include<stdio.h>
#include<stdlib.h>

struct list {
	int data;
	struct list *next;
};

struct list *createListNode() {//�����ڵ� 
	
	return (struct list *) malloc(sizeof(struct list));
	
}

void traverse(struct list *list) {//�������� 
	
	struct list *p = list;
	
	while(p != NULL) {
		printf("%d\n", p->data);
		p = p->next;
	}	
} 
void insertListNode(struct list *list, int n, int data) {//�����n+1���ڵ�����ڵ� 
	
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

int deletListNode(struct list *list, int n) {//ɾ����n+1���ڵ� 
	
	struct list *p = list;
	
	while(p && n--) {
		p = p->next;
	}
	
	if(p == NULL) {//n������Χ 
		return -1;
	}
	
	struct list *p1 = p->next;
	p->next = p->next->next;
	free(p1);
	
	return 0;//ɾ���ɹ� 
} 


int main() {
	
    struct list *L = createListNode();;
	struct list *p = L;
	
	p->data = 1;
	
	p->next = createListNode();
	p = p->next;
	p->data = 2;
	
	p->next = NULL;//��������һ���ڵ� 
	insertListNode(L, 1, 3);
	insertListNode(L, 2, 4);
	traverse(L);
	deletListNode(L, 2); 
	traverse(L);
	
	
	return 0;
}
