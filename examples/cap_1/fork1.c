#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

void main( )
{ 
    pid_t pid;
    pid=fork( );
    if (pid==0)
    {
        printf("sono il processo figlio\n");
        exit(0);
    }
    else {
        printf("sono il processo padre\n");
        exit(0); /* non necessaria */
    }
}