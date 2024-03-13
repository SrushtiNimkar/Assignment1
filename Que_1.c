#include<stdio.h>

int main()
{

	//signed integer


	int n1, n2, sum , Mul , div;
	printf("Enter first number: ");
	scanf("%d",&n1);
	printf("Enter second number: ");
	scanf("%d",&n2);

    sum = n1 + n2;
	printf("Addition of %d and %d is:%d \n", n1, n2, sum);

    Mul = n1 * n2;
    printf("Multiplication of %d and %d is : %d \n", n1, n2, Mul);

	div = n1 / n2;
    printf("Division of %d and %d is: %d \n", n1, n2, div);



	//unsigned integer

/*
   	 unsigned int n1, n2, sum , Mul , div;
     printf("Enter first number: ");
     scanf("%u",&n1);
     printf("Enter second number: ");
     scanf("%u",&n2);
  

     sum = n1 + n2;
     printf("Addition  of %c and %c is: %u \n",n1, n2, sum);
  
     Mul = n1 * n2;
     printf("Multiplication of %c and %c is: %u \n", n1, n2, Mul);

     div = n1 / n2;
     printf("Division  of %c and %c is: %u \n",n1, n2, div);

*/

	
	//char


/*
    char c1, c2, sum , Mul , div;
	printf("Enter first character: ");
	scanf(" %c",&c1);

	printf("Enter second character: ");
	scanf(" %c",&c2);

	sum = c1 + c2;
    printf("Addition of %c and %c is : %c \n",c1, c2, sum);
 
    Mul = c1 * c2;
    printf("Multiplication of %c and %c is : %c \n", c1, c2, Mul);
 
    div = c1 / c2;
    printf("Division of %c and %c is : %c \n", c1, c2, div);
*/


	/*
    float f1, f2, sum , Mul , div ;
    printf ("Enter first number: ");
    scanf(" %f",&f1);
 
    printf("Enter second number: ");
	scanf(" %f", &f2);
 
     sum  = f1 + f2;
    printf("Addition of %f and %f is  : %f \n", f1 , f2 ,sum);
  
    Mul = f1 * f2;
    printf("Multiplication of %f and %f is : %f \n", f1 , f2, Mul );
   
    div = f1 / f2;
    printf("Division of %f and %f is : %f \n", f1 , f2 ,div);
	*/
	return 0;
}

