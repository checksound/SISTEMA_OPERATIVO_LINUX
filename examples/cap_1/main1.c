#include <stdio.h>

void main (int argc, char *argv[ ] )
{ 
    int i;
    printf("\nsono il programma main1\n");
    printf("ho ricevuto %i parametri\n", argc);
    for (i=0; i<argc; i++)
        printf("il parametro %i è: %s\n", i, argv[i]);
}