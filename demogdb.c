#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int isPrime(int n){
	if(n%2==0){
		return 0;
	}
	for(int i=2;i<sqrt((float)n);i=i+2){
		if(n%i==0){
			return 0;
		}
	}
	return 1;

}
int *getPrime(int n){
	int result[n];
	int i=0;
	int x=2;
	while(i>n){
		if(isPrime(n)){
			result[i]=n;
			x+=2;
		}
	}
	return result;

}
int main(){
	int k;
	printf("Enter the value\n");
	scanf("%d",&k);
	int *res=getPrime(k);
//	for(int i=0;i<k;k++){
//		printf("%d\n",res[i]);
//	}
	return 0;

}
