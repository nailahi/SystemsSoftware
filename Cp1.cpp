#include<bits/stdc++.h> 
#include <stdio.h>
#include <unistd.h>
using namespace std;

int main()
{
    printf("--beginning of program\n");

    int counter = 0;
    pid_t pid = fork();
    string lower;
   cin>> lower;
   string upper;

    if (pid == 0)
    {
        // child process
        int i = 0;
        for (; i < 5; ++i)
        {
            cout<< "I am the child printing the orignial version" << lower;
            ++counter;
        }
    }
    else if (pid > 0)
    {
        // parent process
        int j = 0;
        for (; j < 5; ++j)
        {
            upper = transform(cin.begin(), cin.end(), cin.begin(), ::toupper);
            cout<< "I am the parent printing out the complementary uppercase verison" << upper <<endl;
            ++counter;
        }
    }
    else
    {
        // fork failed
        printf("fork() failed!\n");
        return 1;
    }

    printf("--end of program--\n");

    return 0;
}


Second try ↓ ↓ ↓ 
¯¯¯
#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>
#include <locale>
using namespace std;

int main (int argc, char* argv[]){
    string s;
    // scanf("%4s", &s);
    int fd[2];
    int id = fork();
    
    	if(id==0){
	close(fd[0]);
	printf("Input a string: ");
	scanf("%4s", &s);
	write(fd[1], &s, sizeof(string));
	close(fd[1]);
	}else{
	close(fd[1]);
	string u;
	scanf("%5s", &u);
	 std::locale loc;
 	 std::string str="Test String.\n";
 	 for (std::string::size_type i=0; i<u.length(); ++i){
   	 std::cout << std::toupper(u[i],loc);
  }
  
}
   
	if (pipe(fd) == -1){
	printf("There was an error with opening the pipe \n");
	return 1;
	}
	
	
	if(id == -1) {
	printf("There was an error with the fork");
	return 6;
	}
	

}