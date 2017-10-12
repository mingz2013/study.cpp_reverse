#include <stdio.h>

int main(int argc, char** argv)
{
		if(argc == 0){
			printf("=0\n");
		}else if(argc < 0){
			printf("<0\n");
		}else if (argc > 0){
			printf(">0\n");
		}else{
			printf("unkbown\n");
		}
		return 0;
}
