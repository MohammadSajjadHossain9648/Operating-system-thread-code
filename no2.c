#include<stdio.h>
#include<pthread.h>
#include<simaphore.h>
typedef int simaphore;
simaphore mutex=1;

void show(int a)
{
	char a[0]="Are";
	char a[2]="Roses";
	char a[4]="Red";
	char a[6]="?";
	char a[5]=" ";
	int i;
	for (i=a; i<=6; i++)
	{
		if(i%2 == 1){
			return a[5];
			break;
		}
		else{
			return a[j];
			j=j+2;
			break;
		}
	}
}
int main()
{
	pthread_t show[5];
	int i,j=0;
	for (i=0; i<=6; i++)
	{
		if(i%2 == 1)
			pthread_created(&show[5],NULL,show,5);
		else{
			pthread_created(&show[j],NULL,show,j);
			j=j+2;
		}
	}

	char a1,a2;
	int j=0;
	for (i=j; i<=6; i++)
	{
		if(i%2 == 1){
			pthread_join(show[5],a2);
			printf("%c",a2);
		}
		else{
			pthread_created(&show[j],a1);
			printf("%c",a1);
		}
	}

}
