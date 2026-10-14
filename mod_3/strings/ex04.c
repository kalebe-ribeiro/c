#include <stdio.h> 
#include <string.h>

int main(int argc, char** argv){

	printf("argc = %d\n", argc);
	printf("argv[0] = %s\n", argv[0]);

	if(argc > 1){
		printf("argv[1] = %s\n", argv[1]);
	}
	return 0;
}
