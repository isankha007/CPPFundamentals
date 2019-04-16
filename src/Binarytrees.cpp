#include<cstdlib>
#include<iostream>

using namespace std;
struct Node{
	int data;
	struct Node *left,*right;
};

typedef struct Node * node;

node createNewNode(int data){
	node head=(node)malloc(sizeof(struct Node));
	head->data=data;
	head->left=NULL;
	head->right=NULL;
	return head;
}

void displayTreePreOrder(node head){
	if(head==NULL)return;
	displayTreePreOrder(head->left);
	cout<<"  "<<head->data<<flush;
	displayTreePreOrder(head->right);

}

int maxDepth(node head){
	if(head==NULL)return 0;
	else{
		return 1+max(maxDepth(head->left),maxDepth(head->right));
	}
}


int main(){
	node root=createNewNode(40);
	root->left=createNewNode(35);
	root->right=createNewNode(56);
	root->left->left=createNewNode(22);
	root->right->left=createNewNode(48);
	root->right->right=createNewNode(65);
	displayTreePreOrder(root);
	cout<<endl;
	cout<<"Max Height ="<<maxDepth(root);
	cout<<endl;


 return 0;
}
