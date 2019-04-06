#include<iostream>
#include<list>

using namespace std;

int main(){
 list<string> menu;
 int n,ch,k,l;
 cout<<"insert elements range"<<endl;

 cin>>n;
 cout<<"Insert Items"<<endl;
 while(n>0){
	 string s;
	 cin>>s;
	 menu.push_back(s);
	 n--;
 }


 list<string>::iterator it;

 while(1){
	 cout<<"\n1.insert at \n 2.erase at \n 3.insert into front \n 4.view list\n 5.exit \n"<<endl;
	 cin>>ch;
	 if(ch==5)break;
	 switch(ch){
	 case 1:
	 {
		 cout<<"Enter Position and item"<<endl;
		 it=menu.begin();
		 string item;
		 cin>>k;
		 cin>>item;
		 while(it!=menu.end()){
			 if(l==k){
			    break;
			 }
			 l++;
			 it++;
		 }
		 menu.insert(it,item);
		 cout<<"Item Inserted"<<endl;
		 break;
	 }
	 case 2:
	 {
		 cout<<"Enter Position "<<endl;
		 it=menu.begin();
		 cin>>k;
		 while(it!=menu.end()){
			 if(l==k){
				 break;

			 }
			 l++;
			 it++;
		 }
		 if (it != menu.end())
		 {

		 cout<<"Item deleted "<<*it<<endl;

		 it=menu.erase(it);
		 }else{
		 cout<<"Invalid Position"<<endl;
		 }

		 break;
	 }
	 case 3:
	 {   string item;
	 	 cout<<"item ? "<<endl;
	 	 cin>>item;
		 menu.push_front(item);
		 break;
	 }
	 case 4:
	 {
		 it=menu.begin();
		 while(it!=menu.end()){
			 cout<<*it<<endl;
			 it++;
		 }
		 break;
	 }
	}
 }

}
