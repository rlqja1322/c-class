#include <stdio.h>

int main() {
	/*int a; //int는 4byte char는 1byte
	a = sizeof(int) + sizeof(char);//sizeof는 크기를 나타낸다.
	printf("%d", a);*/
	//int a = 7 + 6;
	//int b = (int)7.3 + (int)6.7;
	//printf("%d %d", a, b);
	
	float t;
	t = 10 / 3; // 연산 먼저 하고 대입이 마지막 순서임
	printf("f%", t);
	t = (float)10 / 3;
	printf("%f", t);








	return 0;
}