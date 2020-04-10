#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
        size_t pid ;
	printf("start , pid = %u\n" , getpid());
	pid = fork();
	if( -1 == pid){
		perror(" failure \n");
	}else if( 0 == pid ){
          printf("I'm child  , pid=%u\tppid =%u \n",getpid(),getppid());
	}else{
          printf("I'm parent , pid=%u\tppid =%u \n",getpid(),getppid());
          sleep(1);
	}	

	printf("end , pid = %u\n" , getpid());
	return 0;
}
