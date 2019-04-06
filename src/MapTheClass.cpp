#include<iostream>
#include<map>
using namespace std;

class Person{
private:
	string name;
	int age;
public:

	Person():name(""),age(0){

	}

	Person(const Person &person){
		name=person.name;
		age=person.age;
		cout<<"Copy Constractor"<<endl;
	}
	Person(string name,int age):
	name(name),age(age){
	}
	void print()const{
		cout<<name<<":"<<age<<endl;
	}
};
int main(){
	map<int,Person> people;
	people[0]=Person("sankha",40);
	people[1]=Person("Debdoot",28);
	people[2]=Person("Shankar",28);
	people.insert(make_pair(65,Person("Naba",33)));
	for(map<int,Person>::iterator it=people.begin();it!=people.end();it++){
		it->second.print();
	}
}
