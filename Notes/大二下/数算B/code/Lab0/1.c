#include <stdio.h>

int test(int number)
{
    if(number%7==0)
    {
        return 1;
    }
    while (number > 0) {
        if (number % 10 == 7) {
            return 1;
        }
        number /= 10;
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    for (int i=1;i<=n;i++)
    {
        if (test(i)==0)
        {
            sum=sum+i*i;
        }
    }
    printf("%d",sum);

    return 0;
}