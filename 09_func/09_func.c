#include<stdio.h>

int add_1(int x)
{
	return x + 1;
}

int print_x(int x)
{
	printf("%d\n", x);
	return 0;
}


int main(int argc, char**argv)
{

	int a = add_1(argc);
	print_x(a);
	a = add_1(a);
	print_x(a);

	return 0;
}
