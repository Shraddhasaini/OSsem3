#include<stdio.h>
 
int main(int argc, char* argv[])
{
	int n=atoi(argv[1]);
	int i,fact=1;
	for(i=1;i<=n;i++)
		fact*=i;
	printf("%d",fact);
	return 0;
}
