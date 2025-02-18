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

int main() {
	int r;
	r = inputRadius();
	printf("Diameter = %.2lf\n", findDiameter(r));
	printf("Circumference = %.2lf\n", findCircumference(r));
	printf("Area = %.2lf\n", findArea(r));
	getchar();
	return 0;
}