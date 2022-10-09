#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



// Mutiplikation, wenn 9 eingeben, wird ein 9x9 Mutiplikation formulieren.

void print_table(int n)
{
	int i = 0;
	//Reihe 
	for (i = 1; i <= n; i++)
	{
		// Spalte
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ", i, j, i * j);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	// Funktion
	print_table(n);

	return 0;
}
