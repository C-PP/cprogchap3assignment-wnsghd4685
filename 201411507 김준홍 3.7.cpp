#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	float cm_per_inch= 2.54;
	float height;

	printf("enter your height in inches : ");
	scanf("%f", &height);
	printf("Your height is %f cm.\n", height * cm_per_inch);

	return 0;
}