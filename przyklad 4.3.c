#include <stdio.h>
#include <stdlib.h>

int main() {
	char a;
	do
	{
		printf("Podaj litere 'a' aby zakonczyc:");
		scanf(" %c", &a);
	}
	while(a!='a');
	return 0;
}
