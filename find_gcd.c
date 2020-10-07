#include <stdio.h>

int gcd(int num1, int num2)
{
	int temp;
	while (num2)
	{
		temp = num1%num2;
		num1 = num2;
		num2 = temp;
	}
	
	return num1;
}
int main(){
	int num1, num2;
	scanf("%d%d", &num1, &num2);
	printf("num1=%d, \t num2=%d \n", num1, num2);
	printf("The gcd of two numbers is %d \n", gcd(num1, num2));
	
	return 0;
}
