#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num[n],get[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&get[i]);
    }
    double sum=0;
    double sum_num=0;
    for (int i = 0; i < n; i++)
    {
        double point = 0;
        if (get[i] >= 90) point = 4.0;
        else if (get[i] >= 85) point = 3.7;
        else if (get[i] >= 82) point = 3.3;
        else if (get[i] >= 78) point = 3.0;
        else if (get[i] >= 75) point = 2.7;
        else if (get[i] >= 72) point = 2.3;
        else if (get[i] >= 68) point = 2.0;
        else if (get[i] >= 64) point = 1.5;
        else if (get[i] >= 60) point = 1.0;

        sum += point * num[i];
        sum_num += num[i];
    }
    printf("%.2f",sum/sum_num);
    return 0;
}