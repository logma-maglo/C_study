#include<stdio.h>
#include<windows.h>
int main(void)
{
    SetConsoleOutputCP(65001);
    
    /*
    int num;
    printf("1.+ 2.- 3.* 4./\n 선택\n");
    scanf_s("%d",&num);
    printf("두개의 정수 입력\n");
    int n1, n2, n3;
    scanf_s("%d %d", &n1, &n2);

    if(num==1)
        n3=n1+n2;
    else if(num==2)
        n3=n1-n2;
    else if(num==3)
        n3=n1*n2;
    else if(num==4)
        n3=n1/n2;
    else
        printf("다시 돌려");
    
    printf("결과 %d\n",n3);
    */
    
    /*
    int num;
    printf("1.+ 2.- 3.* 4./\n 선택\n");
    scanf_s("%d",&num);
    printf("두개의 정수 입력\n");
    int n1, n2, n3;
    scanf_s("%d %d", &n1, &n2);

    switch (num)
    {
    case 1:
        n3=n1+n2;
        break;
    case 2:
        n3=n1-n2;  
        break;
    case 3:
        n3=n1*n2;  
        break;
    case 4:
        n3=n1/n2;  
        break;  
    
    default:
        printf("다시\n");
        break;
    }
    
    printf("결과 %d\n",n3);
    */
    
    /*
    int i;
    printf("숫자\n");
    scanf_s("%d", &i);
    int k, j=0;
    
    // for(k=0 ; k<=i ;k++)
    // {
    //    j=k+j;
    // }
    
    
    // while (k<=i)
    // {
    //     j=k+j;
    //     k++;
    // }


    // do
    // {
    //     j=k+j;
    //     k++;

    // }while (k<=i);

    // printf("%d",j);

    */

    int i,j=2,k,o=0;
    printf("항\n");
    scanf_s("%d", &i);

    // for(k=0; k<i ;k++ )
    // {
    //     j=j+k;
    //     o=o+j;
    // }

    // k=0;
    // while(k<i)
    // {
    //     j=j+k;
    //     o=o+j;
    //     k++;
    // }
    
    
    k=0;
    do
    {
        j=j+k;
        o=o+j;
        k++;
    } while (k<i);
    





    printf("%d",o);

    
    return 0;
}