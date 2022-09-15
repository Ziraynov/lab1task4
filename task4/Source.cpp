#include <stdio.h>
int main()
{
	int n;
	printf_s("number of month: ");
	scanf_s("%d", &n);
	if (n == 1 or n == 2 or n == 12)
		printf("winter");
	if (n == 3 or n == 4 or n == 5)
		printf("spring");
	if (n == 6 or n == 7 or n == 8)
		printf_s("summer");
	if (n == 9 or n == 10 or n == 11)
		printf_s("autumn");
	if (n <= 0 or n > 12)
		printf("error");

	return 0;
	
}
