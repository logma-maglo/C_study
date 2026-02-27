#include<stdio.h>

/*
int d(int n1, int n2);
int v(int n);
int main(void)
{
    int n1, n2;
    printf("두 정수 입력하세요:");
    scanf_s("%d %d", &n1, &n2);
    printf("%d와 %d 중 절대값이 큰 정수는 %d\n",n1,n2, d(n1, n2));
    return 0;
}

int d(int n1, int n2)
{
    if(v(n1)>v(n2))
        return n1;
    else 
        return n2;
}

int v(int n)
{
    if(n<0)
        return n*(-1);
    else
        return n;
}
*/


int main(void)
{
    FILE *fp = fopen("data.txt", "wt");

    if (fp == NULL) {
        puts("파일오픈 실패!");
        return -1;
    }

    fputc('A', fp);
    fputc('B', fp);
    fputc('C', fp);

    fclose(fp);  
    return 0;
}