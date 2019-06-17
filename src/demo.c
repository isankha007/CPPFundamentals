/*
 ============================================================================
 Name        : demo.c
 Author      : sankhadeep
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


char *trimwhitespace(char *str)
{
  char *end;

  // Trim leading space
  while(isspace((unsigned char)*str)) str++;

  if(*str == 0)  // All spaces?
    return str;

  // Trim trailing space
  end = str + strlen(str) - 1;
  while(end > str && isspace((unsigned char)*end)) end--;

  // Write new null terminator character
  end[1] = '\0';

  return str;
}

char* returnValue(int type,char *val){
	FILE *fp=fopen("CMDfile.txt","r");
    char *temp;
		char buff[1000];
		while(fgets(buff,sizeof(buff),fp)){
	//		char str[]="12,3,pkgb, 7,45,34,6,1, 4";
			if(buff[0]=='/')continue;
				char *token= strtok(buff,",");
				int counter=1;
				while(token){
					 if(type==1){
						 if(counter==3)
						 {
							 temp = token;
						 }
						 if(counter==6 && strcmp(val,trimwhitespace(token))==0){
							 return temp;
						 }
					 }
					 if(type==2){
						 if(counter==3 && strcmp(val,trimwhitespace(token))!=0)
						 {
							break;
						 }
						 if(counter==6 )
						 {
							 temp = token;
							 return temp;
						 }

					 }

				 counter++;
				 token=strtok(NULL,",");
				}
	//			printf("%s\n",buff);
		}
		fclose(fp);
		return "N?A";
}


int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	while(1){
	int n;
	printf("Enter what to fetch command (1) or value(2) input\n");
	scanf("%d",&n);
	switch(n){
	case 1: //command //3rd
	{ 		char str1[100];
			printf("Enter value input\n");
			scanf("%s",str1);
			printf("%s\n",returnValue(n, str1));
		break;
	}
	case 2:
	{
			char str2[100];
			printf("Enter command input\n");
			scanf("%s",str2);
			printf("%s\n",returnValue(n, str2));
		break;
	}
	case 3:
		exit(0);
		break;
	default:
		printf("Enter Valid input\n");
	  }
	}
	/*FILE *fp=fopen("CMDfile.txt","r");

	char buff[1000];
	while(fgets(buff,sizeof(buff),fp)){
//		char str[]="12,3,pkgb, 7,45,34,6,1, 4";
		if(buff[0]=='/')continue;
			char *token= strtok(buff,",");
			int counter=1;
			while(token){
			if(counter==3 || counter==6){
				printf("%s\n",token);
			  }
			 counter++;
			 token=strtok(NULL,",");
			}
//			printf("%s\n",buff);
	}
	fclose(fp);
	}*/

	return EXIT_SUCCESS;
}
