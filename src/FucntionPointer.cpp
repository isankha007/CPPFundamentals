#include<iostream>

using namespace std;

class Parents{
private:
	int one;
public:
	Parents():one(0){}
	Parents(const Parents &other):one(0){
		one=other.one;
	}
	virtual void print(){
		cout<<"parents Called"<<endl;
	}
 virtual ~Parents(){}
};
class Child:public Parents{
	int two;
	void print(){
		cout<<"child Called"<<endl;
	}
};

int display(int *n){
	cout<<"This fucntion get called:"<<*n<<endl;
	return ++(*n);
}

int main(){
	int (*fptr)(int*)=display;
	int l=10;
	int k=fptr(&l);
	cout<<"THe value K= "<<k<<" n :"<<l<<endl;
	Child c;
	Parents &p=c;
	p.print();

	Parents p1=Child();
	p1.print();
	return 0;
}
