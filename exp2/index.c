

#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
void signalhandler(int signum)
{
printf("received signal number is %d\n",signum);
exit(signum);
}
int main()
{
signal(SIGINT,signalhandler);
while(1)
{
printf("welcome to ui lab \n");
sleep(1);
}
return EXIT_SUCCESS;
asdfasdf
}
