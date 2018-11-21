#include <stdio.h>
int main()
{
int i, pid;
	pid = fork();
switch(pid) 
{
	case -1 : printf("fork error");
		  break;
	case 0: for(i=1;i<=3;i++)
			printf("%d\n",i);
		break;
	default:printf("*");
}
}
