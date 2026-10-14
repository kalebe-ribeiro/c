#include <stdio.h>
#include <string.h>
int main(int argc, char** argv){

	char buf[4];
	if(argc > 1){
		snprintf(buf, sizeof(buf), "%s", argv[1]);
	}
	printf("%s\n", buf);
	return 0;
}
