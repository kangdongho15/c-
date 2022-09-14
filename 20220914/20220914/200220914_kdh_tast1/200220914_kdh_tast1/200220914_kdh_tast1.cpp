# define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int num1, num2, num3;
	num1 = num2 = num3 = 0;
	double resuit = 0.0 ;

	printf("num1 = %d \n", num1);
	printf("num2 = %d num3 = %d \n", num2, num3);

	printf("num1 숫자를 입력하세요. ");
	scanf("%d", &num1);
	printf("num1 = %d \n", num1);

	printf("num2 숫자를 입력하세요. ");
    scanf("%d", &num2);
	
	printf("num2 = %d \n", num2);
    printf("num3 숫자를 입력하세요. ");

	num3 = num1 + num2;
	printf(" %d + %d = %d \n",num1,num2,num3);

	num3 = num1 - num2;
	printf(" %d - %d = %d \n", num1, num2, num3);

	num3 = num1 * num2;
	printf(" %d * %d = %d \n", num1, num2, num3);
	
	resuit =(double)num1 / (double)num2;
	printf(" %d / %d = %lf \n", num1, num2, resuit);
/*
	scanf("%d", &num3);
	printf("num1 = %d \n", num3);  //decimal
*/
	return 0;
}