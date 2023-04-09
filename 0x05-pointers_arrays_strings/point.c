#include <stdio.h>

int main()
{
	int x; //normal variable of type int
	int *ptr; //declaring a pointer
	x = 500098;
	ptr = &x; //memory address location for int x
	//char end_ptr = ptr + 3; //memory address ending for int x

	printf("x is : %d", x);
	printf("\n");
	printf("Memory address location for int x is: %p\n", ptr);//print memory location for int x
	printf("The value stored in memory address %p is : %d\n", ptr, *ptr);//print the value stored in the memory address location ptr(&x)
	//printf("The end of the address is : %d\n", end_ptr); //print the end of the address location allocated

	return 0;
}
