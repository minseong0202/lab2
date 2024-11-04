#include<stdio.h>
#include <stdlib.h>
#include "math.h"

int main(){
	int num1=50;
	int num2=10;

	printf("num : %d, %d\n",num1,num2);
	printf("덧셈: %d\n",add(num1,num2));
	printf("뺄셈: %d\n",subtract(num1,num2));
	printf("곱셈: %d\n",multiply(num1,num2));
	printf("나눗셈 : %f\n",divide(num1,num2));
}
	
