#include <stdio.h>
#include<signal.h>
#include<stdlib.h>
#include <unistd.h>

void InteruptHandler(int sig){
	char c;
	signal(sig,SIG_IGN);
	printf("You Pressed Ctrl+c [Y/n] \n");
	c=getchar();
	if(c=='Y')exit(0);
	else
	   signal(SIGINT, InteruptHandler);
	 getchar(); // Get new line character
}

int main(){

	signal(SIGINT,InteruptHandler);
	while(1){
		pause();
	}

	return 0;
}
