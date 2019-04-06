#include<iostream>
#include<vector>
#include<time.h>
using namespace std;

int main(){
	vector<string> strings;
	strings.push_back("sankha");
	strings.push_back("Abc");
	for(vector<string>::iterator it=strings.begin();it!=strings.end();it++){
		cout<<*(it)<<endl;
	}
	vector< vector<int> > grid(3,vector<int>(10,10));


	for(int row=0;row<grid.size();row++){
			for(int col=0;col<grid[row].size();col++){
				grid[row][col]=(row+1)*(col*1);
			}
			cout<<endl;
		}


	for(int row=0;row<grid.size();row++){
		for(int col=0;col<grid[row].size();col++){
			cout<<grid[row][col]<<" "<<flush;
		}
		cout<<endl;
	}

	/////TIME IS MONEY ...........

	time_t rawtime;
	struct tm *timeinfo;
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	cout<<"Current Time "<<asctime(timeinfo)<<endl;

	timeinfo->tm_year=2019-1900;
	timeinfo->tm_mon=4-1;
	timeinfo->tm_mday=4;
	const char *weekdays[]={"Sun","Mon","Tue","Wed","THu","Fra","SAt"};
	mktime(timeinfo);

	cout<<"Day is "<<weekdays[timeinfo->tm_wday]<<endl;

	return 0;
}
