#include <stdio.h>

int g_i = 1;

static int g_i_2 = 2;

int main(int argc, char** argv)
{
	

	int l_i = 1;

	printf("%d\n", g_i);
	printf("%d\n", g_i_2);
	printf("%d\n", l_i);
	printf("%d\n", argc);
	return 0;
}
