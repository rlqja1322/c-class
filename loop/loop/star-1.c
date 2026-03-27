#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	

	for (int i = 5;i >= 1;i--)
	{
		for (int j = 1; j <= i; j++) {
			printf("*");
		}

		printf("\n");
	}
	
	return 0;
}