#include <stdio.h> 
#include<stdlib.h>
#include <unistd.h> 
#define MSGSIZE 16 
char* msg1 = "hello,this variable is of parent"; 
char* msg2 = "hello,this variable is of child"; 
  
int main() 
{ 
    char parent[100],child[100]; 
    int p[2], pid, nbytes; 
  
    if (pipe(p) < 0) 
        exit(1); 
  
    /* continued */
    if ((pid = fork()) > 0)
 { 
        write(p[1], msg1, 100); 
       // write(p[1], msg2, 20); 
       // write(p[1], msg3, 20);
	read(p[0], parent, 100);
	printf("\n i'm in the parent process");
	printf("\n %s",parent); 
  
        // Adding this line will 
        // not hang the program 
         close(p[1]); 
	close(p[0]);
     //   wait(NULL);
sleep(1); 
    } 
  
    else { 
       // Adding this line will 
        // not hang the program 
  //       close(p[1]);
//	close(p[0]); 
	printf("\n i'm in the child");
	write(p[1], msg2, 100);
        while ((nbytes = read(p[0], child, 100)) > 0) 
            printf("%s\n", child); 
        if (nbytes != 0) 
            exit(2); 
        printf("Finished reading\n"); 
    } 
    return 0; 
}


