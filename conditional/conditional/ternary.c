//삼항 연산자 : if~else를 간결히 표현
// 조건? A: B =>조건이 참이면 A 아니면 B


#include <stdio.h>
int main(void) {
	int num;
	printf("정수 입력 : ");
	scanf_s("%d",&num);
	(num % 2 == 0) ? printf("짝수") : printf("홀수"); // (num%2==0) <= 조건이 참일때는 ? ~~~~를 쓰고 거짓 일 때는 : ~~~~~~를 쓴다


	return 0;
}