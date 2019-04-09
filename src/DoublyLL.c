#include<stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *prev;
	struct Node *next;
};

typedef struct Node *node;


node createNode(){
	node temp;
	temp=(node)malloc(sizeof(struct Node));
	temp->next=NULL;
	temp->prev=NULL;
	return temp;
}
void addNodeAtLast(node *head,int value){
	node temp,p;
	temp=createNode();
	temp->data=value;
	if(*head==NULL){
		*head = temp;
	}else{
		p= *head;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=temp;
		temp->prev=p;
		temp->next=NULL;
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
	   (*head)->prev=temp;
	   *head=temp;
   }

}

void deleteFromList(node *head,int val){
	 if ((*head) == NULL)
	        return;
	 node cur=*head;
	 node next;
	 while(cur!=NULL){
		 if(cur->data==val){
			 next=cur->next;
			 if(*head==NULL||cur==NULL){
				 continue;
			 }
			 if(cur==*head){
				 *head=cur->next;
			 }
			 if(cur->next!=NULL){
				 cur->next->prev=cur->prev;
			 }
			 if(cur->prev!=NULL){
				 cur->prev->next=cur->next;
			 }
			 free(cur);
			 cur=next;
		 }else{
			 cur=cur->next;
		 }
	 }


/*	node p,temp;
	p=*head;
	temp=*head;
	while(p!=NULL){
		if(p->data==val){
			if(p==*head){
				*head=p->next;

			}
			if(p->next!=NULL){
				p->next->prev=p->prev;
			}
			if(p->prev!=NULL){
				p->prev->next=p->next;
			}
          free(p);

//			temp->next=p->next;
//			p->next->prev=temp;
//			p->prev=NULL;
//			p->next=NULL;
//			free(p);
//			p=NULL;
		}else{
			p=p->next;
		}
	}*/


}

void printList(node head){
	node p=head;
	printf("printList \n");
	while(p!=NULL){
		printf("Val %d -      ",p->data);
		if(p->prev!=NULL)
			printf("prev Val %d - ",p->prev->data);
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

//    for(i=0;i<n;i++){
//        	int val;
//        	printf("enter data for pos%d :",i);
//        	scanf("%d",&val);
//        	printf("Data scanned \n");
//        	insertAtTheDbegining(&root,val);
//        }
    printList(root);

    printf("Enter value to delete\n");
    int val;
    scanf("%d",&val);
    deleteFromList(&root,val);
    printList(root);


	return 0;
}
