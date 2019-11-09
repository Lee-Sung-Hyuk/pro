#define _CRT_NO_SECURE_WARNINGS

#include <stdio.h>

int main()
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 5; j > i; j--)
		{
			printf("%d", j);
		} puts("");
	} 

}