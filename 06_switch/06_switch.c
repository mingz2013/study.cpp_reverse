#include <stdio.h>


int main(int argc, char ** argv)
{
	switch (argc)
	{
		case 0:
			printf("0\n");
			break;
		case 1:
			printf("1\n");
			break;
		default:
			printf("unknow\n");

	}
	return 0;
}
