#include <stdio.h>
int main() {
	char ch;
		printf ("문자를 입력하세요 : ");
		//scanf_s("%c",&ch);
	ch = getchar();//1글자 입력
	if (ch >= 'A' && ch <= 'Z') 
		// 65~90<- 문자는 숫자로도 기억을 함
		printf("대문자입니다");
	else if (ch >= 'a' && ch <= 'z')
		// 97~122
		printf("소문자 입니다");
	else if (ch >= '0' && ch <= '9')
		// 48~57
		printf("숫자 입니다");
	else
		printf("그외 문자 입니다");


	return 0;
}