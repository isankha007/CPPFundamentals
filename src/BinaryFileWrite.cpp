#include<iostream>
#include <fstream>
using namespace std;

#pragma pack(push,1)
//#pragma pack(pop)

struct Person{
   char name[50];
   int age;
   double height;
};

#pragma pack(pop)

int main(int argc, char **argv) {

	Person someone={"Frodo",220,0.8};
    string filename="test.bin";
    ofstream outfile;

    outfile.open(filename,ios::binary);
    if(outfile.is_open()){

//       outfile.write((char*)&someone,sizeof(Person));
       outfile.write(reinterpret_cast<char*>(&someone),sizeof(Person));


    	outfile.close();

    }else{
    	cout<<"Could Not open File "+filename<<endl;
    }

    //////////Reading Binary file
    ifstream infile;

    Person someoneElse={};

    infile.open(filename,ios::binary);
        if(infile.is_open()){

    //       outfile.write((char*)&someone,sizeof(Person));
        	infile.read(reinterpret_cast<char*>(&someoneElse),sizeof(Person));


           infile.close();

        }else{
        	cout<<"Could Not open File "+filename<<endl;
        }

        cout<<someoneElse.name<<endl;

	return 0;
}

