#include<stdio.h> 
#include<stdlib.h>
struct ListNode * AddTwoNumbers(struct ListNode*,struct ListNode*);
struct LisNode{
	int val;
	struct ListNode * next;
};
int main() {
	struct ListNode * l1;
	l1 = (struct ListNode *) malloc (sizeof(struct ListNode));
	l1 -> next = NULL;
	struct ListNode * l2 ;
	l2 = (struct ListNode *) malloc (sizeof(struct ListNode)); 
	l2 -> next = NULL;
	struct ListNode * current;
	current = l1 -> next;
	char ch;
	while ((ch = getchar()) != '\n') {
		if (ch = ' ') {
			continue;
		}
		else {
			current = (struct ListNode *) malloc (sizeof(struct ListNode));
			current -> val = ch - '0';
			current = current ->next; 
		}
	}
	current = NULL;
	
	struct ListNode * current2;
	current2 = l2 -> next;
	while ((ch = getchar()) != '\n') {
		if (ch = ' ') {
			continue;
		}
		else {
			
			current2 = (struct ListNode *) malloc (sizeof(struct ListNode)); 
			current2 -> val = ch - '0';
			current2 = current2 ->next;
			
		}
	}
	current2 = NULL;
	
	AddTwoNumbers(l1,l2);
}
struct ListNode * AddTwoNumbers(struct ListNode * l1,struct ListNode* l2){
    struct ListNode * p = l1 -> next;    //第一个节点 
	struct ListNode * q = l2 -> next;    //第二个节点
    
	struct ListNode * result;
	result = (struct ListNode *) malloc (sizeof(struct ListNode));
    
    struct ListNode * temp = result -> next;
    
	// temp = (struct ListNode *) malloc (sizeof(struct ListNode));
	// temp = result -> next;    //result的第一个节点
    //temp = (struct ListNode *) malloc (sizeof(struct ListNode));
	while (p != NULL && q != NULL) {
		int sum = p -> val + q -> val;
		temp = (struct ListNode *) malloc (sizeof(struct ListNode));
		temp -> val = sum % 10;	
        temp = temp -> next;
        //temp = (struct ListNode *) malloc (sizeof(struct ListNode));
        p = p -> next;
        q = q -> next;
	} 
	if (p == NULL) {
        temp = (struct ListNode *) malloc (sizeof(struct ListNode));
		temp = q;
	}
	if (q == NULL) {
        temp = (struct ListNode *) malloc (sizeof(struct ListNode));
		temp = p;
	}
    else {
        temp = (struct ListNode *) malloc (sizeof(struct ListNode));
        temp = NULL;
    }
    // if (p != NULL && q != NULL) {
    //     temp -> next = NULL;    
    // }
	return result;
}
