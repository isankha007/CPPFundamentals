#include<iostream>
#include "Complex.h"
using namespace std;
using namespace sankha;

int main(){
    Complex c1(2,3);
    cout<<c1.getReal()<<" + i"<<c1.getImg()<<endl;
	return 0;
}
