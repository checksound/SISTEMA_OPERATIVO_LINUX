#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

void main( )
{ 
    pid_t pid,miopid;
    pid=fork( );
    if (pid==0)
    {
        miopid=getpid( );
        printf("sono il processo figlio con pid: %i\n\n",miopid);
        exit(0);
    }
    else {
        printf("sono il processo padre\n");
        printf("ho creato un processo con pid: %i\n", pid);
        miopid=getpid( );
        printf("il mio pid e' invece: %i\n\n", miopid);
        exit(0); /* non necessaria */
    }
}