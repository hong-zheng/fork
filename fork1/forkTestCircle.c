#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
        size_t pid ;
	printf("start , pid = %u\n" , getpid());
	int i=0;
	for( i = 0 ; i<5;i++){
	   pid = fork();
	   if( 0 == pid ){
		break;
	   }
	}
//	sleep(i);
	if( -1 == pid){
		perror(" failure \n");
	}else if( 0 == pid ){
          printf("I'm %dth  child  , pid=%u\tppid =%u \n",i+1,getpid(),getppid());
	}else{
          printf("I'm parent , pid=%u\tppid =%u \n",getpid(),getppid());
	}	
        sleep(5);
	return 0;
}
