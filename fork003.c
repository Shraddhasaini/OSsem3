#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
void forkex()
{
int x=1;
if(fork()==0)
	printf("%d\n",++x);
else printf("%d\n",--x);

}
int main()
{
forkex();
return 0;
}
