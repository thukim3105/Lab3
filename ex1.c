//Write a C program to input radius of circle from user and find diameter, circumference and area of the given circle using function

#include <stdio.h>

double inputRadius() {
	double r;
	printf("Enter radius: ");
	scanf("%lf",&r);
	return r;
}

double findDiameter(double r) {
	double diameter;
	diameter = r * 2;
	return diameter;
}

double findCircumference(double r) {
	double cir;
	cir = 2 * 3.14 * r;
	return cir;
}

double findArea(double r) {
	double area;
	area = 3.14 * r * r;
	return area;
}

void result(double r) {
	if(r <= 0) {
		printf("Not valid");
	}
	else {
		printf("Diameter = %.2lf\n", findDiameter(r));
		printf("Circumference = %.2lf\n", findCircumference(r));
		printf("Area = %.2lf\n", findArea(r));
	}
}

int main() {
	double r;
	r = inputRadius();
	result(r);
	getchar();
	return 0;
}