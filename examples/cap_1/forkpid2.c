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
        printf("1)sono il primo processo figlio con pid: %i\n",miopid);
        exit(0);
    }
    else {
        printf("2)sono il processo padre\n");
        printf("3)ho creato un processo con pid: %i\n", pid);
        miopid=getpid( );
        printf("4)il mio pid e' invece: %i\n", miopid);
        pid=fork( );
        if (pid==0)
        {
            miopid=getpid( );
            printf("5)sono il secondo processo figlio con pid: %i\n",miopid);
            exit(0);
        }
        else {
            printf("6)sono il processo padre\n");
            printf("7)ho creato un secondo processo con pid: %i\n", pid);
            exit(0); /* non necessaria */
        }
    }   
}