#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//int i = 3; // 1~100
	//int sum = 0; //합계 누적
	//while (i <= 100)
	//{	

	//	//printf("%d\n", i);
	//	i = i + 3;
	//	sum = sum + i;
	//}
	//printf("1부터 100의 배수 합은 : %d", sum);
	int num, i = 0;
	printf("양의 정수 입력 : ");
	scanf("%d", &num);
	while (i < num)
	{
		printf("handman!\n");
		i++;
	}
	return 0;
}
