//Write a program to print the largest digit of an integer entered by the user (using function).

#include <stdio.h>

int inputNum() {
    int n;
    printf("Enter integer: ");
    scanf("%d", &n);
    return n;
}

int findMaxDigit(int num) {
	int digit, max = 0;
	while(num != 0) {
		digit = num % 10;
		if(digit > max) {
			max = digit;
		}
		num = num / 10;
	}
	return max;
}

int main() {
	int num;
	num = inputNum();
	if(num < 0) {
		num = -num;
	}
	printf("%d", findMaxDigit(num));
	getchar();
	return 0;
}