#include <stdio.h>
#include <signal.h>
//#include <iostream>

#include <stdlib.h>
//include <signal>

int count = 0;
void sigcatch(int signum);
void terminate(int signum );

int main(int argc, char* argv[])
 {
     int number, divisor;


    void (*funcptr)(int);
    void (*funcptrBeep)(int);
     funcptr = signal(SIGQUIT, terminate);
    // if (funcptr == SIG_IGN) signal(SIGQUIT, SIG_IGN);
     funcptrBeep = signal(SIGINT, sigcatch);
   //  if (funcptrBeep == SIG_IGN) signal(SIGINT, SIG_IGN);



     while (1) {

     }
     return 0;


  }


 void sigcatch( int signum)
 {

     count++;
//     putchar('\07');
     char d = (char)(7);
     printf("%c\n", d);
      void (*funcptrBeep)(int);
       funcptrBeep = signal(SIGINT, sigcatch);

 }
 void terminate(int signum )
 {
     printf( " Key prints %d  \n", count);

     exit(1);
 }
