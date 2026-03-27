#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{
    int i, j;//i는 단 j는 곱하는 수
    //바깥 for 1번 돌때 안 for는 전부를 반복해야 된다
    for (i = 1; i <= 12; i += 3)// 1~12단
        //1줄에 3단이 출력하면 다음줄에 4단이 시작하게 만들기 위해서 i+=3을 만들어 준다
    {
        printf("%d단\t \t%d단\t \t%d단\n", i, i + 1, i + 2);
        //줄 맞추기 위해 \t를 사용, 마지막엔\n써서 다음단으로 넘어가기

        for (j = 1; j <= 9; j++)
        // 1~9까지 돌고 다시 1로 돌아와야하기 때문에 9보다 같거나 작을 때로 조건을 준다
        {
                printf("%d x %d = %2d\t", i, j, i * j);
                printf("%d x %d = %2d\t", i + 1, j, i + 1 * j);//2*1=2
                printf("%d x %d = %2d\t", i + 2, j, i + 2 * j);//3*1=3
                printf("\n");
        }//괄호 맞추기
    }

return 0;
}
