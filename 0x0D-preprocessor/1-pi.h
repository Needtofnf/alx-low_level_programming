#include <stdio.h>
#define PI 3.14159265359

int main(void)
{

float radius, area;
printf("Enter the radius: ");

scanf("%f", &radius);

area = PI* radius* radius;

printf("Area=%.2f", area)
	;
return (0);
}
