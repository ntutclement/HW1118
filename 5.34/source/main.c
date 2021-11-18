#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int x, y;
	printf("Enter two integers: ");
	scanf_s("%d%d", &x, &y);
	printf("%d", kai(x, y));
	return 0;
}

int kai(int a, int b) {
	if (b == 0)
		return 1;
	if (b == 1)
		return a;
	else
		return a * kai(a, b - 1);
}