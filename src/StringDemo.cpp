#include<iostream>

using namespace std;


int main(){
	 char str[] = "This is Sankha  ha ha ";
	 int counter=0;

	    // Returns first token
	    char *token = strtok(str, " ");

	    // Keep printing tokens while one of the
	    // delimiters present in str[].
	    while (token != NULL)
	    {
//	        printf("%s\n", token);
	    	cout<<token<<endl;
	        token = strtok(NULL, " ");
	        counter++;
	    }

	cout<<counter<<endl;
	return 0;
}
