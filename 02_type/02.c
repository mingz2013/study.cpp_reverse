#include <stdio.h>
#include <stdbool.h>

int main()
{
	int i = 1;
	float f = 1.0;
	char c = 'A';
	char* s = "hello";
	bool b = true;

	int * pi = &i;
	float * pf = &f;
	char * pc = &c;
	int* ps = &s;
	bool * pb = &b;
	

	printf("%d\n", i);
	printf("%f\n", f);
	printf("%c\n", c);
	printf("%s\n", s);
	printf("%d\n", b);

	printf("%d\n", *pi);
	printf("%f\n", *pf);
	printf("%c\n", *pc);
//	printf("%s\n", *(char*)*ps);
	printf("%d\n", *pb);

	return 0;
}
