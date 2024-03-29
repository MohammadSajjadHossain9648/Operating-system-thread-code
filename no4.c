#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<simaphore.h>
typedef int simaphore;
simaphore mutex=1;

#define NITER 1000000

int cnt=0;
int down(int *m){
  int --m;
}
int up(int *m){
  int ++m;
}
void *count(void *a)
{
	int i,tmp,mutex=1;;
	down(&mutex);
	for (i=0; i<NITER; i++)
	{
		tmp = cnt;
		tmp = tmp+1;
		cnt = tmp;
	}
	up(&mutex);
	return cnt;
}
int main(int argc, char * argv[])
{
	pthread_t tid1,tid2;		
		if(pthread_created(&tid1,NULL,count,NULL)){
			printf("\n ERROR creating thread 1");
			exit(1);
		}
		if(pthread_created(&tid2,NULL,count,NULL)){
			printf("\n ERROR creating thread 2");
			exit(1);
		}	
               if(pthread_join(tid1,NULL)){
			printf("\n ERROR joining thread");
			exit(1);
		}
	       else{ 
		int a1;
		pthread_join(tid1,a1);
		cnt=a1;
		}
               if(pthread_join(tid2,NULL)){
			printf("\n ERROR joining thread");
			exit(1);
		}
	       else{ 
		int a2;
		pthread_join(tid1,a2);
		cnt=a2;
		}
  		if(cnt < 2*NITER)
			printf("\n BOOM! cnt is [%d], should be %d\n",cnt, 2*NITER);
		else 
			printf("\n OK! cnt is [%d]\n", cnt);				
}
