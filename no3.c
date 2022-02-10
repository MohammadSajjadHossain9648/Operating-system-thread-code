#include<stdio.h>
#include<pthread.h>

int thread1(){
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	
}
int thread2(){
		int o;
	scanf("%d",&o);
}
int thread3(){
	
}

int main()
{
	pthread_t thread1,thread2,thread3,thread4;
	pthread_created(&thread1,NULL,show,NULL);
	pthread_created(&thread2,NULL,show,NULL);
	pthread_created(&thread3,NULL,show,NULL);

		int a1;
		pthread_join(thread1,NULL);
			
		pthread_created(&thread2,NULL);

		pthread_created(&thread3,a1);
			printf("%d",a1);

}
