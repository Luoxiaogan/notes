#include <stdio.h>

void bubble_sort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    //不用return arr，因为这里arr已经被修改了
}

int main()
{
    int numbers[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&numbers[i]);
    }

    bubble_sort(numbers,10);

    printf("%d %d",numbers[0],numbers[1]);
}