#include<stdio.h>

int main(){
	char upper, lower;
	printf("Enter a lower case letter: ");
	lower = gets();
	upper = toupper(lower);
	putchar(upper);
	putchar('A');
	putchar(69);
	return 0;
}
