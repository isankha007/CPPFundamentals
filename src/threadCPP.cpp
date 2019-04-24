#include<thread>
#include<string>
#include<iostream>
#include<fstream>
#include<mutex>
//code from an youtube tutorial https://www.youtube.com/watch?v=3ZxZPeXPaM4&list=PL5jc9xFGsL8E12so1wlMS0r0hTQoJL74M&index=3
using namespace std;

//mutex mu;

class Logfile{
	std::mutex m_mutex;
	ofstream f;
public:
	Logfile(){
	  f.open("log.txt");
	}
	void sharedMassage(string id,int value){
		lock_guard<mutex> guard(m_mutex);
	//	mu.lock();
		f<<"from "<<id<<": "<<value<<endl;
	//	mu.unlock();
	}
//	const Logfile &operator=(const Logfile&other){
//         return *this;
//	}

	/*friend ostream &operator<<(ostream &out,const Logfile &test){
		out<<"something "<<":"<<"abc";
		return out;
	}*/

} ;

/*void sharedMassage(string msg,int id){
	lock_guard<mutex> guard(mu);
//	mu.lock();
	cout<<msg<<id<<endl;
//	mu.unlock();
}*/

void printIt(Logfile& log){
	for(int i=0;i>-100;i--){
//		cout<<"From t1:"<<i<<endl;
		log.sharedMassage(string("From T1:"),i);
	}
}

int main(){
	Logfile log;
	std::thread t1(printIt, std::ref(log));
	for(int i=0;i<100;i++){
		log.sharedMassage(string("From Main:"),i);
	}
	t1.join();
}
