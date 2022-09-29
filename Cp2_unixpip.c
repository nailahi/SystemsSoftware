#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>

#define BUFFER_SIZE 25
#define READ_END	0
#define WRITE_END	1

int main(void)
{
  
    int randNum =0;
	char write_msg[BUFFER_SIZE];
	char read_msg[BUFFER_SIZE];
	pid_t pid;
	int fd[2];

	/* create the pipe */
	if (pipe(fd) == -1) {
		fprintf(stderr,"Pipe failed");
		return 1;
	}

	pid = fork();/* now fork a child process */
	if (pid < 0) {
		
		return 1;
	}
	else if (pid > 0) {  /* parent process */
		/* parent is used as a writer, so close the unused read end of the pipe */
		close(fd[READ_END]);//if you remove this line, the program might still work. However it is best practice to close unused fd. See https://stackoverflow.com/questions/19265191/why-should-you-close-a-pipe-in-linux

		/* write to the write end of the pipe */
		write(fd[WRITE_END], randNum, strlen(randNum)+1);
		printf("parent received from unnamed pipe: %s\n",randNum);

		/* close the write end of the pipe */
		close(fd[WRITE_END]);
	}
	else { /* child process */
		/* child is used as a reader, so close the unused write end of the pipe */
		close(fd[WRITE_END]);

		/* read from the read end of the pipe */
		read(fd[READ_END], read_msg, BUFFER_SIZE);
		for(int i = 0; i < 20; i++){
		    int l,u;
		    randNum = (rand() % (u - l + 1)) + l;
		    printf("%d", randNum);
		}
		printf("child sent into the unnamed pipe %s\n",randNum);

		/* close the read end of the pipe */
		close(fd[READ_END]);
	}

	return 0;
}
