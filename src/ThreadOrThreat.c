#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

pthread_mutex_t lock;

void functionPrint(){
pthread_mutex_lock(&lock);
 for(int i=0;i<100;i++){

	 printf("From T1 %d\n",i);
 }
 pthread_mutex_unlock(&lock);
}

int main(){
	  if (pthread_mutex_init(&lock, NULL) != 0)
	    {
	        printf("\n mutex init has failed\n");
	        return 1;
	    }
	pthread_t t1;
	pthread_create(&t1,0,(void*)&functionPrint,NULL);

	for(int i=0;i<100;i++){
		printf("From Main %d \n",i);
	}
	pthread_join(t1,NULL);
	pthread_mutex_destroy(&lock);
}

