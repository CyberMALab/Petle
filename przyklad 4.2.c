#include <stdio.h>
#include <stdlib.h>

int main() {
	char a;
	printf("Podaj litere 'a' aby zakonczyc:");
	scanf(" %c", &a);
	while(a!='a')
	{
		printf("Podaj litere 'a' aby zakonczyc:");
		scanf(" %c", &a);
	}
	return 0;
}
