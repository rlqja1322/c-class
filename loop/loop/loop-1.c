#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 






int main(void)
{
	int i;
	int sum = 0;
	for (i = 1; i <= 10; i=i+2) {
		sum += i;
	}
	printf("홀수 합은 : % d", sum);

return 0;

}