#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<wait.h>
#include<signal.h>

void runAlarm(int signum)
{
	printf("\nGec kaldiniz:(...:(");
	fflush(stdout);
	exit(0);
}
int main()
{
	int age;
	signal(SIGALRM, runAlarm);
	printf("Yasinizi 5 saniye icinde  giriniz?");
	
	alarm(5);
	scanf("%d",&age);

       // unix_error("signal error");

	//pause();
	printf("yasiniz:%d",age);
	return 0;
        
}
