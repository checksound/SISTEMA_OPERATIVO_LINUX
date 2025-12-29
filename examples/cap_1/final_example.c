#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>

void main()
{
    int i, j, k, stato;
    pid_t pid1, pid2;
    i=10; j=20; k=30;
    pid1 = fork(); /*creazione del primo figlio */
    if(pid1 == 0) {
        j=j+1;
        pid2 = fork(); /*creazione del secondo figlio */
        if(pid2 == 0) {
            k=k+1;
            exit(0);}
        else {
            wait(&stato);
            exit(0); }
    }
    else {
        i=i+1;
        wait(&stato);
        exit(0); }
}