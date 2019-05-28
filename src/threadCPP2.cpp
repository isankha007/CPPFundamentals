#include<thread>
#include<string>
#include<iostream>
#include<fstream>
#include<mutex>
#include<algorithm>
//https://www.youtube.com/watch?v=TPVH_coGAQs
using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;

ull oddsum=0;
ull evensum=0;

void findEven(ull start,ull end){
	for(ull i=start;i<=end;i++)
	{    if((i&1)==0)
	   {
		evensum+=1;
	   }
	}
}

void findOdd(ull start,ull end){
	for(ull i=start;i<=end;i++)
	{    if((i&1)==1)
	   {
		oddsum+=1;
	   }
	}
}
int main(){
	ull start =0,end=1900000000;
	auto startTime = high_resolution_clock::now();

	std::thread t1(findEven,start,end); // @suppress("Invalid arguments")
	std::thread t2(findOdd,start,end); // @suppress("Invalid arguments")

	t1.join();
	t2.join();

//	findOdd(start,end);
//	findEven(start,end);
	auto stopTime = high_resolution_clock::now();
	auto totalDuration = duration_cast<microseconds>(stopTime - startTime);

	cout<<"Odd sum: "<<oddsum<<endl;
	cout<<"Even sum: "<<evensum<<endl;

	cout<< totalDuration.count()/1000000<<" Seconds"<<endl;

	return 0;
}
