#include <stdio.h>
int main(void)
{
	printf("Table of temperatures(Fahrenheit/Celsius)\n");
	float fahrenheit, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahrenheit = lower;
	while(fahrenheit <= upper){
		/*celsius = 5 * (fahrenheit - 32) / 9; for int fahr*/
		celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
		printf("%3.0f %6.1f\n",fahrenheit,celsius);
		fahrenheit += step;
	}
	return 0;
}