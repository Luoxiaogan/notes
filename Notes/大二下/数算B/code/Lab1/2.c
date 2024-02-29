#include <stdio.h>
#include<string.h>

int main()
{
    int x;
    scanf("%d",&x);
    string name;
    for(int i=0;i<x;i++)
    {
        scanf("%s",name[i]);
    }
    int y;
    scanf("%d",&y);
    char front[y][11];
    for(int i=0;i<y;i++)
    {
        scanf("%s",front[i]);
    }
    int n;
    scanf("%d",&n);
    int limit=x*y;
    int input[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s",input[i]);
    }

    printf("%d",x);
    printf("%s",name[1]);

    /* for(int i=0;i<n;i++)
    {
        if (i==0)
        {
            printf("dz\n");
        }
        else if(i<=x){
            printf("%s",name[i]);
        }
        else if(i<=limit)
        {
            printf("%s %s",front[i/x],name[i%x]);
        }
        else{
            printf("You Win");
        }
    }
    return 0; */
}