//Write a program to receive 3 integers entered by the user. The program checks whether those 3 integers satisfy the condition of being a triangle or not by using the function?.
#include <stdio.h>

int inputNum() {
	int a;
	printf("Enter integer: ");
	scanf("%d", &a);
	return a;
}

int checkPositive(int a, int b, int c) {
	if(a > 0 && b > 0 && c > 0) {
		return 1;
	}
	return 0;
}

int checkTri(int a, int b, int c) {
	if(a + b > c && a + c > b && b + c > a) {
		return 1;
	}
	return 0;
}

int main() {
	int a, b, c;
	a = inputNum();
	b = inputNum();
	c = inputNum();
	if(checkPositive(a, b, c) == 1 && checkTri(a, b, c) == 1) {
		printf("This is a triangle");
	}
	else {
		printf("Not a triangle");
	}
	return 0;
}