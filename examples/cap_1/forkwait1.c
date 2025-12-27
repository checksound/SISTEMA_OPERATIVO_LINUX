#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <sys/types.h>

void main( )
{ 
    pid_t pid, miopid;
    int stato_exit, stato_wait;
    pid=fork( );
    if (pid==0)
    { 
        miopid=getpid( );
        printf("sono il processo figlio con pid %i \n", miopid);
        printf("termino \n\n");
        stato_exit=5;
        exit(stato_exit);
    }
    else
    { 
        printf("ho creato un processo figlio \n\n");
        pid=wait (&stato_wait);
        printf("terminato il processo figlio \n");
        printf("il pid del figlio e' %i, lo stato e' %i\n",pid,stato_wait/256);
    }
}