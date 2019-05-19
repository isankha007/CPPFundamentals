#include<iostream>
using namespace std;
class Demo{
	int k;
public :
	Demo():k(0){}
	int getVal() const{
		return k;
	}
	void setVal(int data){
		k=data;
	}
//	friend ostream &operator<<(ostream &out,const Demo &other){
};

ostream &operator<<(ostream &out,const Demo &other){
		out<<other.getVal();
		return out;
}
int main(){
    Demo dm;
    dm.setVal(12);
    cout<<dm;
	return 0;
}
