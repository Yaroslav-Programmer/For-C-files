#include <stdio.h>
int main(void) {
	printf("Hello world");
	// Arrays
	int array[5];
	int array_multi[3][2];
	// Variable declaration and initialization(final)
	int a = 5;
	int b = 6;
	const double pi = 3.14159;
	// If...else 
	if(b == a){
		printf("\nTrue");
	}else{
		printf("\nFalse");
	}
	// For loop
	for(int i = 0; i <= 10; i++){
		printf("\nHello world");
	}
	// While loop
	int i = 0;
	while(i < 10){
		printf("\nHello world");
		i++;
	}
	// Switch case
	int z = 6;
	switch(z){
		case 4:
		printf("4");
		break;
		case 6:
		printf("\n6");
		break;
		default:
		printf("default");
	}
	foo();
	return 0;
}
// Function
int foo(){
	printf("\nSome text");
}