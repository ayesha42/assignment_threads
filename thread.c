#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

int result;
int inde[10];
int array[1000];

void* summ(void* arg);
int main()
{
	pthread_t thread[10];
	int i = 0;
	
       for(int i =0; i<1000;i++)
	{
	 array[i] = i+1;
	}
	
	for(int i =0; i< 10; i++)
	{
	 pthread_create(&thread[i],NULL,summ,(void*)&inde[i]);
	}

	for(i = 0 ; i< 10; i++)
	{
	  pthread_join(thread[i], NULL);
	}
	
	
	
}

void* summ(void* arg)

{
	int total = 0;
	int* t = (int*)t;
	int i =0;
	for(i = (*t)*100 ; i< (*t)*100 + 100; i++)
	{
	 total = total + array[i];
	}
	
	result = total + result;
	
}
