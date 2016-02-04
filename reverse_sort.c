
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>


int compare(int a, int b) {
	    return b - a;
}

int compare_p(const void *a, const void *b)
{
	const int *aa, *bb;
	aa = a;
	bb = b;
	return *bb - *aa;
}
