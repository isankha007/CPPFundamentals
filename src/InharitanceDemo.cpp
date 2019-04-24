#include<iostream>

using namespace std;
class Student{
private:
	string name;
public:
	Student():name(""){

	}
	Student(string name){
       this->name=name;
	}
	string getName(){
		return this->name;
	}
	string stat(){
		return "ABCD";
	}
friend class Child;
};

class Parent{
public:
	virtual void print(){
		cout<<"Parent"<<endl;
	}
};

class Child:public Parent,public Student{ // @suppress("Class has a virtual method and non-virtual destructor")
public:
//    Child(string name){
//    	Student(name);
//    }
	string name;
	void print(){
		cout<<"Child "<<this->name<<" "<<stat()<<endl;
	}
};

int main(){
	Child c1;
	Student st("Sankhadeep");
	c1.name=st.getName();
//	c1.Student("Sankha");
//	c1.Studentname="sankha";
	Parent &p1=c1;
	p1.print();
	return 0;
}
