#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <sys/types.h>

void main( )
{ 
    pid_t pid;
    int stato_wait;
    char P0[ ]="main1";
    char P1[ ]="parametro 1";
    char P2[ ]="parametro 2";
    pid=fork( );
    if (pid==0)
    { 
        printf("\nsono il processo figlio \n");
        printf("lancio in esecuzione il programma main1\n");
        execl("./main1", P0, P1, P2, NULL);
        printf("errore di exec"); /*normalmente non si arriva qui!*/
        exit(0);
    }
    else
    {
    wait(&stato_wait );
    printf("\nsono il processo padre\n");
    printf("il processo figlio è terminato\n");
    exit(0);
    }
}