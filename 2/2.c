#include<stdio.h>
int main(void)
{
    /*
    printf("경고음 \\ \a\n"); 
    printf("백스페이스 \b\n");
    printf("폼 피드 \f \n");
    printf("캐리지 리턴 행 가장 앞으로\? \r \n");
    printf("수평 탭 \t \n");
    printf("수직 탭 \v \n");
    //캐리지 리턴은 해당 작성 중인 글의 줄에 처음으로 커서를
    //이동 시킴으로 수평 탭부터 작성이 다시 시작되기에  
    //결과가 이상해짐
    */


  /*
    printf("%f\n", 0.12345);
    printf("%e\n", 0.12345);
    printf("%g\n", 0.12345689);
    printf("%G\n", 0.12345789);
    printf("%G\n", 1.23e-9);
    printf("%G\n", 1.23e-7);
    /*
    0.123450
    1.234500e-01
    0.123457
    0.123458
    1.23E-09
    1.23E-07
    */

    /*
    int t=0, num;
    for(t=0 ;t<=30;)
    {
        do{
            printf("계산 할 숫자 입력:\n 0 입력시 종료\n");
            scanf_s("%d", &num);
            t += num;
        }while (num!=0);
        printf("더한 값:%d\n", t);
    }
    return 0;
    //전에 같은 원인 30이 되어도 한번 더 돌아기기 때문에 안 멈춤
    //for문으로 가지 않고 while문에서 돌아가기 떄문에
    //대신 t가 30이 넘으면 다음번에는 진행이 되지 않음
    */
}