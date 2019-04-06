#include <iostream>
#include <fstream>

using namespace std;

int main(){
//
	//fstream outfile;
     /////Parsing??????///////

	string filename="Stats.txt";

	ifstream input;
	input.open(filename);
	if(!input.is_open()){
		return 1;
	}
	while(input){
		string line;
		getline(input,line,':');
		int val;
		input>>val;

//		input.get();
//		input>>ws;
		line.erase(std::remove(line.begin(), line.end(), '\n'), line.end());
		if(!input)break;
		cout<<line<<" >> "<<val<<endl;
	}
	input.close();




     ///////////reading ///////
	/*
	ifstream infile;
	string filename="Demo.txt";
	infile.open(filename);
	if(infile.is_open()){
        string lines;
//        while(!infile.eof())
        while(infile)
        {
			getline(infile,lines);
			cout<<lines<<endl;
        }
		infile.close();
	}else{
		cout<<"Could not create file:"<<infile<<endl;
	}
	*/


	/*//////////Writing////////////
	 *
    ofstream outfile;
//	outfile.open(filename);
//	outfile.open(filename,ios::out);
	if(infile.is_open()){
		for(int i=0;i<5;i++)
		  outfile<<"Hello There"<<i<<endl;
		outfile.close();
	}else{
		cout<<"Could not create file:"<<outfile<<endl;
	}*/
	return 0;
}
