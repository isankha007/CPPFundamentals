#include<iostream>
using namespace std;

template<class T,class k>
class Test{
private :
	T obj;

public:
	Test(T obj){
		this->obj=obj;
	}
	void print(){
		cout<<obj<<endl;
	}
};
int main(){
	Test<string,int>test1("Sankha");
	test1.print();
	return 0;
}
