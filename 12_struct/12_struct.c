#include <stdio.h>

typedef struct {
int x;
int y;
} pos;


int main()
{
	pos p;
	p.x = 1;
	p.y = 2;
	int s = sizeof(p);
	printf("%d\n", s);
	return 0;
}

