#include<stdio.h>
#include<stdlib.h>
#include"LinkedList.h"

typedef struct Node* node;

node createNode(){
	node temp;
	temp=(node)malloc(sizeof(struct Node));
	temp->next=NULL;
//	printf("createNode  \n");
	return temp;
}
void addNodeAtLast(node *head,int value){
	node temp,p;
	temp=createNode();
	temp->data=value;
	if(*head==NULL){
		*head = temp;
	}else{
		printf("addNodeAtLast 222 \n");
		p= *head;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=temp;
	}
	return ;

}
void insertAtTheDbegining(node *head,int val){

}
void printList(node head){
	node p=head;
	printf("printList \n");
	while(p!=NULL){
		printf("Val %d - ",p->data);
		p=p->next;
	}
	printf("\n*****************************");
}
int main(){
    node root=NULL;
    //(node)malloc(sizeof(struct Node));
    int n,i;
    printf("Enter how many?\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	int val;
    	printf("enter data for pos%d :",i);
    	scanf("%d",&val);
    	printf("Data scanned \n");
    	addNodeAtLast(&root,val);
    }
    printList(root);
	return 0;
}
