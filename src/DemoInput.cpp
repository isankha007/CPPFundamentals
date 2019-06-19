#include<iostream>
#include<sstream>
#include <string>
using namespace std;
int main(void) {
//	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	while(1){
	int n;
	cout<<"Enter what to fetch command (1) or value(2) input\n"<<endl;
	cin>>n;
//	cin.ignore();
	switch(n){
	case 1: //command //3rd
	{ 		string str1;
			//getline(cin,str1);

//	       int counter=1;
//	       while(counter<=1){
//			cout<<"Enter value input\n";
//			cin>>str1;
//			counter++;
////			cin.ignore();
//	       }
//	       cin.ignore();
//			fflush(stdin);
//			getline(cin, str1);
//			cin.ignore();
//			fflush(stdin);
	    //getline(cin,str1);
	   cin>>str1;
	    while(getchar()!='\n'){

	    }
	    cout<<"String 1"<<str1<<endl;
		break;
	}
	case 2:
	{
//			char str2[100];
//			printf("Enter command input\n");
//			scanf("%s",str2);
//			printf("%s\n",returnValue(n, str2));
		 string str2;
//		 getline(cin,str2);
		 cin>>str2;
		 while(getchar()!='\n'){}
		 cout<<"String 2"<<str2<<endl;
		break;
	}
	case 3:
		exit(0);
		break;
	default:
		printf("Enter Valid input\n");
	  }
	}

	return EXIT_SUCCESS;
}
