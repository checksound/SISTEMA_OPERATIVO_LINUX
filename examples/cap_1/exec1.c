#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

void main( )
{
    char P0[ ]="main1";
    char P1[ ]="parametro 1";
    char P2[ ]="parametro 2";
    printf("sono il programma exec1\n");
    execl("./main1", P0, P1, P2, NULL);
    printf("errore di exec"); /*normalmente non si arriva qui!*/
}