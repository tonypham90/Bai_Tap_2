#include <stdio.h>
#include <math.h>
#include <limits.h>

void main()
{
	printf("%u\n",UINT_MAX);
	printf("%u\n", UINT_MAX + 1);
	printf("%u\n",UINT_MAX+2);

	printf("%d\n",INT_MAX);
	printf("%d\n",INT_MAX+1);
	printf("%d\n",INT_MAX+2);

	float x = 0.1 + 0.1 + 0.1;
	printf("%.50f",x);

	float y = 1.3 * 0.25;
	printf("\n%.50f",y);
    float z = 1.0 / 3.0 ;
	printf("\nkết quả z = 1/3 = %.50f",z);
	return;
}
