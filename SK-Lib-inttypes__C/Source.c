#pragma warning(disable:4996)
/* example of <inttypes.h> */

/*	Source by CPlusPlus
	Modified For Learn by Rizky Khapidsyah
*/

#include <stdio.h>      /* printf, scanf, fgets, stdin, NULL */
#include <stdint.h>     /* intmax_t */
#include <inttypes.h>   /* strtoimax, PRIdMAX, SCNdMAX */
#include <conio.h>		/* _getch() */

int main() {
	char buffer[80];
	intmax_t foo, bar;

	printf("Please, enter a number : ");
	
	fgets(buffer, 80, stdin);
	foo = strtoimax(buffer, NULL, 10);

	printf("Thanks for entering %" PRIdMAX ".\n\n", foo);

	printf("Please, enter another number : ");
	scanf("%" SCNdMAX, &bar);

	printf("%" PRIdMAX " by %" PRIdMAX " is %" PRIdMAX, foo, bar, foo * bar);

	_getch();
	return 0;
}