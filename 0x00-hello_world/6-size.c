#include <stdio.h>



/*

*main - Entry point

*

*Description: 'the program's description'

*Return: Always (0)

*/



int main(void)



{



	int a;	/* intiger*/



	long int b;	/* long */



	long long int c;	/*long long*/



	char d;	/* char*/



	float f;	/*float*/







	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));



	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));



	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));



	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));



	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));



	return (0);



}
