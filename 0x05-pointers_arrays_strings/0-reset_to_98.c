#include "main.h"
#include <stdio.h>
int main(void)
{
	int n = 1;
	int *p = &n;
	

	*p = 402;
	printf("%d\n", n);

	return(0);
}
