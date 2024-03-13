//  Writr a programm to accept a number and print the number in character ,decimal, octal and hex formats.


#include<stdio.h>

int main()
{

int n ;
   printf("Enter the number: ");
   scanf("%d \n",&n);

	printf("decimal = %d \n",n);
	
	printf("Octal = %o \n",n);

	printf("Hexa = %x \n",n);

	printf("char = %c \n",n);

	return 0;

}