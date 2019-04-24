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
private :
	int demoVar;
public:
	Parent():demoVar(0){

	}

	Parent(const Parent &other):demoVar(0){
		demoVar=other.demoVar;
		cout<<"Copy Parents"<<endl;
	}
	virtual void print(){
		cout<<"Parent"<<endl;
	}

 virtual ~Parent(){

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
