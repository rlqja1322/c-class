#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i = 0;
	do {
		printf("하나를 선택하세요");
		printf("1. 새로 만들기 2. 파일 열기 3. 파일 닫기 : ");
		scanf("%d",&i);


	}	while (i < 1 || i > 3); //i가 1~3이 아니면 반복
	printf("선택메뉴는: %d",i);

	return 0;
}