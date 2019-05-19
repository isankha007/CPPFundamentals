//#include<bits/stdc++.h> //for linux
#include<iostream>
#include<vector>
#include <map>
using namespace std;
//source Singletone
//https://www.tutorialspoint.com/Explain-Cplusplus-Singleton-design-pattern
class Singleton{
	 static Singleton *instance;
	 int data;
	 Singleton():data(0){}
public:
	 static Singleton *getinstance(){
		 if(!instance)
			 instance =new Singleton;
		 return instance;
	 }
	 int getData(){
		 return this->data;
	 }
	 void setData(int val){
		 this->data=val;
	 }
public:
        Singleton(Singleton const&)               = delete;
        void operator=(Singleton const&)  = delete;
};

Singleton *Singleton::instance=NULL; //0;

//https://stackoverflow.com/questions/5607589/right-way-to-split-an-stdstring-into-a-vectorstring
vector<string> split(string str,string token){
	vector<string>finalStr;
	while(str.size()){
		int index=str.find(token);
		if(index!=string::npos){
//			cout<<"Called "<<str.substr(0,index)<<endl;
			finalStr.push_back(str.substr(0,index));
			str=str.substr(index+token.size());
			if(str.size()==0){
				finalStr.push_back(str);
			}
		}else{
			finalStr.push_back(str);
			str="";
		}
	}
	return finalStr;
}

int main()
{

    // su is the string which is converted to uppercase
    string str = "sankhadeep chatterjee";
/*
    // using transform() function and ::toupper in STL
//    transform(su.begin(), su.end(), su.begin(), ::toupper);

    transform(su.begin(), su.end() , su.begin(), ::toupper);
    cout << su << endl;


    */
	int len=str.length();
	for(int i=0;i<len;i++){
		if(str[i]>='a' && str[i]<='z'){
			str[i]=str[i]-32;
		}
//		else if(su[i]>='A' && su[i]<='Z'){
//					su[i]=su[i]+32;
//				}
	}
   cout<<str<<endl;
   str="Heome/usr/abc/logo.jpg";
   vector<string> vec=split(str,"/");
   for(vector<string>:: iterator it=vec.begin();it!=vec.end();it++){
	   cout<<*it<<endl;
   }
   pair<int,string> pr;
   pr=make_pair(10,"sankha");
   pair<int,string> pr2;
   pr2=make_pair(11,"soumya");
   auto  pr3=make_pair(12,"Uma");
   cout<<pr.first<<" , "<<pr.second<<endl;
   map<int,pair<int,string> > mp;
   mp[5]=pr;
   mp[6]=pr2;
   mp.insert(make_pair(4,pr3));
   for(map<int,pair<int,string> >::iterator it=mp.begin();it!=mp.end();it++){
	   cout<<it->second.second<<endl;
   }


   Singleton *s=s->getinstance();
   s->setData(120);
   cout<<s->getData()<<endl;
   string str1 = "sankhadeep chatterjee";
   string str2 = "soumyadeep chatterjee";//"soumyadeep chatterjee";
  if(str1.compare(str2)<0){
	  cout<<str1<<" Smaller than "<< str2<<endl;
  }else if(str1.compare(str2)==0){
	  cout<<str1<<" and "<< str2<<" are same"<<endl;
  }else{
	  cout<<str1<<" greater than "<< str2<<endl;
  }

//   Singleton n(Singleton &s);
//   cout<<" ........ "<<n.<<endl;

    return 0;
}
