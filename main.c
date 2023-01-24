#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	/*
	Area and Perimeter of the Square
	Value: One edge
	Area: One edge*One edge
	Perimeter: Edge * 4
	*/
	int edge,area,perimeter;
	edge=10;
	area=edge*edge;
	perimeter=edge*4;
	printf("Area is: %d\n",area);
	printf("Perimeter is: %d",perimeter);
	
	
	return 0;
}
