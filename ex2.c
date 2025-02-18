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
	if (n < 2) {
		return 0;
	}
	for(int i = 2; i * i <= n; i ++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int checkInput(int low, int up) {
	int c;
	
	return 0;
}

int main() {
	int low, up, i, c, count = 0;
	low = inputLowLimit();
	up = inputUpLimit();
	if(low > up) {
		c = low;
		low = up;
		up = c;
	}
	
	printf("Prime numbers between %d - %d are:", low, up);
	
	if(low < 0) {
		i = 1;
	}
	else {
		i = low;
	}
	for(i; i <= up; i ++) {
		if(checkPrime(i) == 1) {
			printf(" %d", i);
			count ++;
		}
	}
	if(count == 0) {
		printf(" No number");
	}
	getchar();
	return 0;
}