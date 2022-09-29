#include<stdio.h> 
  
int main() 
{ 

    for(int i=0 ;i<4 ;i++) { 
        if(fork() == 0) { 
           printf("This child");
           printf(" has the ", getpid());
           printf("pid %d\n",getpid()); 
            exit(0); 
        } 
    } 
    for(int i=0 ;i<4 ;i++)
    wait(NULL); 
      
} 