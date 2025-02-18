//Write a C program to print the first n prime numbers using function.

#include <stdio.h>

int inputNum() {
	int n;
	printf("Enter number:");
	scanf("%d", &n);
	return n;
}

int checkPrime(int n) {
    if (n < 2) {
    	return 0;
	}
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
        	return 0;
		}
    }
    return 1;
}

void printNPrimes(int n) {
    int count = 0, i = 2;
    printf("Result:");
    while (count < n) {
        if (checkPrime(i) == 1) {
            printf(" %d", i);
            count ++;
        }
        i ++;
    }
}


int main() {
	int n;
	n = inputNum();
	printNPrimes(n);
	return 0;
}