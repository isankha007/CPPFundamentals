#include<iostream>

using namespace std;

int display(int *n){
	cout<<"This fucntion get called:"<<*n<<endl;
	return ++(*n);
}

int main(){
	int (*fptr)(int*)=display;
	int l=10;
	int k=fptr(&l);
	cout<<"THe value K= "<<k<<" n :"<<l<<endl;
}
