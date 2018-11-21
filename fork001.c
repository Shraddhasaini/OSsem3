#include <stdio.h>
#include <sys/types.h>

#define MAX_COUNT 5

void ChildProcess(void);
void ParentProcess(void);

void main(void)
{
pid_t pid;
pid =fork();
if (pid==0)
	ChildProcess();
else ParentProcess();

}

void ChildProcess(void)
{
int i;
for (i=1;i<= MAX_COUNT;i++)
	printf("child line value %d\n",i);
printf("child done\n");

}

void ParentProcess(void)
{
int i;
for (i=1;i<= MAX_COUNT; i++)
	printf("this is line parent value %d\n",i);
printf("parent done\n");
}
