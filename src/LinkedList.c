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
   node temp;
   temp=createNode();
   temp->data=val;
   if(*head==NULL){
	   *head=temp;
   }else{
	   temp->next=*head;
	   *head=temp;
   }

}
void deleteFromList(node *head,int val){
	node p,temp;
//	int counter;
	p=*head;
	temp=*head;
	while(p!=NULL){
		if(p->data==val){
			if(p==*head){
				temp=p;
				*head=(*head)->next;
				p=*head;
				temp->next=NULL;
				free(temp);
				temp=NULL;
			}
			else{
				temp->next=p->next;
				p->next=NULL;
				free(p);
				p=NULL;
			}
		}else{
			temp=p;
			p=p->next;
		}
	}


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

    for(i=0;i<n;i++){
        	int val;
        	printf("enter data for pos%d :",i);
        	scanf("%d",&val);
        	printf("Data scanned \n");
        	insertAtTheDbegining(&root,val);
        }
    printList(root);

    printf("Enter value to delete\n");
    int val;
    scanf("%d",&val);
    deleteFromList(&root,val);
    printList(root);


	return 0;
}
