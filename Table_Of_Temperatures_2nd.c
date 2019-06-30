#include <stdio.h>
int main(void)
{
	printf("Table of temperatures(Celsius/Fahrenheit)\n");
	float fahrenheit, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;
	while(celsius <= upper){
		fahrenheit = celsius * 1.8 + 32; /* 1.8 = 9/5 */
		printf("%3.0f %6.1f\n",celsius,fahrenheit);
		celsius += step;
	}
	return 0;
}