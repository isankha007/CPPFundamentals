#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<csignal>

using namespace std;

struct Node{
	int data;
	struct Node *next;
};

typedef struct Node* node;


class LList{
public:
	node createNode(int data);
	void insertAtFirst(int data,node *head);
	void insertAtPosition(int data,node *head);
	void insertAtLast(int data,node *head);
	void deleteAt();
	void find();
	void printLis(node head);
	void reverser(node *head);
	LList(){

	}
};

node  LList::createNode(int data){
	node temp=(node)malloc(sizeof(struct Node));
	if(temp==NULL){
		cout<<"Unable to acclocate the memory"<<endl;
		return 0;
	}
	temp->data=data;
	temp->next=NULL;
	return temp;
}
void LList::insertAtFirst(int data,node *head){
     node temp=createNode(data);
     if(*head==NULL){
    	 *head=temp;
     }
     else
     {
    	 temp->next=*head;
    	 *head=temp;
     }
}
void LList::insertAtLast(int data,node *head){
  node temp=createNode(data);
  node p;
  temp->data=data;
  if(*head==NULL){
	  *head=temp;
  }else{
    p=*head;
    while(p->next!=NULL){
    	p=p->next;
    }
    p->next=temp;
  }
  return;

}
void LList::printLis(node head){
	node p=head;
	printf("printList \n");
	while(p!=NULL){
		printf(" %d -> ",p->data);
		p=p->next;
	}
	cout<<endl;
}

void LList::reverser(node *head){
  node prev,curr,next;
  curr=*head;
  prev=NULL;
 while(curr!=NULL){
	 next =curr->next;
	 curr->next=prev;
	 prev=curr;
	 curr= next;
 }
 *head=prev;

}

void InteruptHandler(int sig){
	char c;
	signal(sig,SIG_IGN);
	printf("You Pressed Ctrl+c [Y/n] \n");
	c=getchar();
	if(c=='Y')exit(0);
	else
	   signal(SIGINT, InteruptHandler);
	 getchar(); // Get new line character
}

int main(){
	int ch,val;
    LList lstObj;
    node head=NULL;
    signal(SIGINT,InteruptHandler);
	while(1){
		cout<<"1.insert first/2.insert last/3 serarch /4 reverse 5/show"<<endl;
		cin>>ch;
		switch(ch){
		case 1:
			cin>>val;
			lstObj.insertAtFirst(val,&head);
			break;
		case 2:
			cin>>val;
			lstObj.insertAtLast(val,&head);
			break;
		case 3:
			break;
		case 4:
			lstObj.reverser(&head);
			break;
		case 5:
			lstObj.printLis(head);
			break;
		default:
			cout<<"Enter Valid Input"<<endl;
		}
	}
}
