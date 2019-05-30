#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "SystemHeader.h"

struct demo{
	char *name;
	int data;
};
typedef struct demo Node;

int main(){
char str[]="Sankhadeep";
char *p="Sankhadeep";
char str2[11];
//str2=str; //not assignable ... const char *
strcpy(str2,str);
char *q;
q=p;
printf("%s\n",q);
printf("%c\n",str[2]);
printf("%s===\n",p+2);
printf("%c --- \n",p[2]);
//p[2]='k' //will give bus error
//*(p+2)='k'; //Bus error: 10
str[2]='k';
printf("%c --- \n",p[2]);
printf("%c\n",str[2]);
printf("%s\n",str);
printf("str = %s ,str2=%s \n",str,str2);
printf("+++++++++++++++++++++++\n");
char *r=q;//Shallow Copy
//memccpy(r,q,strlen())
//str="Chatterjee" //array type 'char [11]' is not assignable
printf("before :r=%s\n",r);
q="Chatterjee";
printf("p=%s\n",p);
printf("q=%s\n",q);
printf("p=%s\n",p);
printf("q=%s\n",q);
printf("after:r=%s\n",r);
printf("address:r=%p ,q=%p, p=%p\n",r,q,p);

//https://stackoverflow.com/a/15278367/1325955
Node n1,n2,n3;
char name[]="Sankhadeep";
n1=(Node){name,1234};
n2=n1; //shalow copy
printf("n1=%s ,n2=%s \n",n1.name,n2.name);
n1.name="Chatterjee";
printf("n1=%s ,n2=%s \n",n1.name,n2.name);

n3.name = strdup(n1.name); // Deep copy -
//memcpy(n3.name,n1.name,strlen(n1.name));
n3.data=n1.data;
printf("n1=%s ,n3=%s \n",n1.name,n3.name);
int h=5;
int k=0;
printMax(h,k);
printf(".....MAX ... %d\n",k);

return 0;
}
