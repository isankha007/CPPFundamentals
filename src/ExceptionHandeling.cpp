#include<iostream>

using namespace std;

class CanGoWrong{
	public:
	CanGoWrong(){
		char *abc=new char[999999999999999999];
		delete[] abc;
	}
};

class MyException: public exception{
public :
	virtual const char* what() const throw(){
		return "Something goes wrong";
	}
};
/*void mightGetError(){
	bool error=true;
	if(error){
		//throw(8);
		//throw("this is a const char exp");
		throw(string("this is string exception"));
	}
}*/
class Test{
public:
	void goesWrong(){
		throw MyException();
	}
};

int main(){
	Test test;
	try{
		test.goesWrong();
//		mightGetError();
		//CanGoWrong gowrong;
	}
	catch (int e) {
		cout<<"Exception "<<e<<endl;
	}
	catch (const char *e) {
		cout<<"Exception "<<e<<endl;
	}
	catch(string & e){
		cout<<"Exception "<<e<<endl;
	}
	catch (bad_alloc &e) {
		cout<<"Exception "<<e.what()<<endl;
	}catch(MyException & e){
		cout<<"MY custome excp"<<e.what()<<endl;
	}
	return 0;
}
