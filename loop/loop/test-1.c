#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{
	int i, cnt = 0;
	for (i = 1;i <= 100;i++) {
		if (i % 3 == 0 && i % 7 == 0) {//i를 3으로 나눌때 나머지가 0
			//100중에 3과7의 공배수를 구함
			printf("%d*", i);
			

		}

	}

	int i;
	for (i = 0;i < 10;i++) {
		if (i % 3 == 0)continue;//continue에 달린 3을 빼고 진행을 계속 한다고 하면 쉬움
		if (i > 5)break;//5에 걸리면 탈출함
		printf("%d", i);




	}







		return 0;


}