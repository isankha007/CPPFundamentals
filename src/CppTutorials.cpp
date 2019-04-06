//============================================================================
// Name        : CppTutorials.cpp
// Author      : sankha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
using namespace std;
typedef struct Demo{
	int a;
	int b;
}demo;


Demo operator + ( Demo const& demo,Demo const& demo2){
	struct Demo sumDemo;
	sumDemo.a=0;
	sumDemo.b=0;
	sumDemo.a = demo.a+demo2.a;
	sumDemo.b = demo.b+demo2.b;
	return sumDemo;
}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	struct Demo demo ;//= new Demo();
	struct Demo demo2 ;//= new Demo();
	demo.a=7;
	demo.b=5;
	demo2.a=3;
	demo2.b=7;
	struct Demo res= demo+demo2;
	cout<<"sum A "<<res.a <<" Sum b "<<res.b<<endl;

	return 0;
}
