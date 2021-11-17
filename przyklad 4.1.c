#include <stdio.h>
#include <stdlib.h>

int main() {
	int start, stop, i;
	printf("Podaj pierwsza liczbe: ");
	scanf(" %d", &start);
	printf("Podaj ostatnia liczbe: ");
	scanf(" %d", &stop);
	printf("Wszystkie calkowite w przedziale <%d,%d>: ",start,stop);
	for(i=start; i<=stop; i++)
	{
		printf("%3d ",i);
	}
	
	return 0;
}
