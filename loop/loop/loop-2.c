#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main(void)
{
//	int sum,i;
//		int num = 0;
//		printf("숫자를 입력하세요: ");
//		scanf_s("%d", &num);
//
//		for (i = 1;i <= num ;i++) {
//			sum = sum + i;
//		}
//	printf("합계 : %d",&sum);

	//int i,j;

	//printf("원하는 단은? : ");//printf로 입력 준비
	//scanf("%d", &i);//scanf로 입력 받고
	//printf("< %d 단 > \n",i);// 입력받은 값 몇단인지 쓰고
	//for (j = 1; j <= 9; j++)//for문으로 조건이 거짓이 될 때까지 반복
	//for 뒤에는 ;붙이지 않기
	
		//printf("%d * %d = %d \n", i, j, i * j);//마지막으로 출력

		int i, j;
		for (i = 1; i < 10; i++) {//i는 단2~9
		//i는j가 다 반복이 끝나면(9번) 그때 i가 하나 증가
		printf("%d단\n", i);//곱하는 1~9 반복
		for (j = 1; j < 10; j++) 
		{
		printf("%d * %d = %3d\n", i, j, i * j);
		}	//3d는 3자리
			//원래는 오른쪽 정렬
			//-을 붙이면 왼쪽 정렬
		
		
		}

	
return 0;
}