#include<iostream>
using namespace std;
//https://www.geeksforgeeks.org/array-rotation/
int gcd(int a,int b){
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}

void circularRotate(int arr[],int d,int n){
	for(int i=0;i<gcd(d,n);i++){
		int temp=arr[i];
		int j=i;
		while(1){
			int k=j+d;
			if(k>=n)
				k=k-n;
			if(k==i)break;

			arr[j]=arr[k];
			j=k;

		}
		arr[j]=temp;
	}
}
int main(){
	int arr[]={1,2,3,4,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	circularRotate(arr,3,n);
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}
