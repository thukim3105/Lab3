//Write a function in C programming to find prime numbers using function. How to find all prime numbers between two intervals using functions. 
#include <stdio.h>

int inputLowLimit() {
	int low;
	printf("Input lower limit: ");
	scanf("%d", &low);
	return low;
}

int inputUpLimit() {
	int up;
	printf("Input upper limit: ");
	scanf("%d", &up);
	return up;
}

int checkPrime(int n) {
	for(int i = 2; i * i <= n; i ++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int low, up;
	low = inputLowLimit();
	up = inputUpLimit();
	printf("Prime numbers between %d - %d are:", low, up);
	for(int i = low; i <= up; i ++) {
		if(checkPrime(i) == 1) {
			printf(" %d", i);
		}
	}
	getchar();
	return 0;
}