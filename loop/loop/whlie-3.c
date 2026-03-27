#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i;
	int a = 1;
	printf("출력하고 싶은 단은?");
	scanf("%d",&i);
	while (a <= 9) { 
		printf("%d * %d = %d\n", i, a, i * a);
		a++;
	
	}
	





	return 0;
}