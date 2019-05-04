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
//friend ostream &operator<<(ostream &out,const Test<int,int> &other);
};

//ostream &operator<<(ostream &out,const Test<int,int> &other){
//		out<<other<<endl;
//		return out;
//}
template<class T>
void printW(T n){
	cout<<n<<endl;
}
int main(){
	Test<string,int>test1("Sankha");
	Test<int,int>test2(1234);
	test1.print();
//	test2.print();
    printW(12);
	return 0;
}
