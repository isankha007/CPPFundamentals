#include<stdio.h>
#include <stdlib.h>

int main(){
	int a[][4]={
			{5,7,5,9},
			{4,6,3,1},
			{2,9,0,6}
	};
	int *p;
	int (*q)[4]; // pointer to an array of 4 integer
	p=(int*)a;
	q=a;
	printf("%u %u \n",(unsigned int)p,(unsigned int)q);
	p++; // pointing to next integer in the array // 7
	q++;// pointing to next 1-d array //4,6,3,1
	printf("%u %u \n",(unsigned int)p,(unsigned int)q);


	printf("Sizeof %d %d",*p,(*(++q))[0]);

   //////////// 2 d array with pointer or pointer

    int i,j,row=10,col=5;
	int **arr=(int**)malloc(row*sizeof(int*));
		for(i=0;i<row;i++){
			arr[i]=(int*)malloc(col*sizeof(int));
		}

		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				arr[i][j]=i+j;
			}
			printf("\n");
		}


	for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				printf("%d ",arr[i][j]);
			}
			printf("\n");
	}
	return 0;
}
