#include <stdio.h>
/*
 * 计算数字位数以及每位总和
 */
void Count_Number(int number)
{
    int sum=0;
    int count=0;
    while (number)
    {
        sum=sum+(number%10);
        number/=10;
        count++;
    }
    printf("%d %d",count,sum);
}

int main() {
    Count_Number(25);
    return 0;
}

