#include <stdio.h>
#include <stdlib.h>

int change(char a);

int main(void) {
	char c;
	printf("Please enter the character: ");
	scanf_s("%c", &c);
	printf("The new character is:%c",change(c));
}

int change(char a) {
	if (a >= 97)
		return(a - 32);
	else
		return(a + 32);
}