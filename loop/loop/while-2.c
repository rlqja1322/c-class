#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int pass = 1234;
	int pw = 0;
	
	while (pw != pass)// 반복은 만족할 때, 조건이 만족하지 않을때 반복문 탈출
	{
		printf("비밀 번호 입력 :");
		scanf("%d", pw);

		printf("로그인 성공");
	} return 0;
}