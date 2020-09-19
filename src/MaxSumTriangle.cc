#include <iostream>
#include <cmath>
using namespace std;
///converting this to roundoff one
void makeItRound(float amt,int opt);
int main(){
      float amt;
      int opt;
      cout<<"Amount "<<endl;
      cin>>amt;
      cout<<"OPt "<<endl;
      cin>>opt;
      makeItRound(amt,opt);
      return 1;
}
void makeItRound(float amt,int opt){

	int amtR=ceil(amt);
	int multiplier = amtR/opt;
	if(multiplier*opt<amtR){
		multiplier+=1;
	}
	cout<<"Amount to Round Off "<<(multiplier*opt)<<endl;
}

void  maxPathSum(){

}
