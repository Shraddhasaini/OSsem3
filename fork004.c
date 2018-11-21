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
int i,j;
for(i=1;i<=MAX_COUNT;++i)
{
for (j=1;j<=i;++j)
{printf("*");}
sleep(1);
printf("\n");
}
return 0;
}

void ParentProcess(void)
{
int i,j;
for (i=1;i<= MAX_COUNT; ++i)
{
for (j=1;j<=i;++j)
{printf("%d",j);}
sleep(1);
printf("\n");
}
}

