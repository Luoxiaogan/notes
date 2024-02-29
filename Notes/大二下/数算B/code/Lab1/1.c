#include <stdio.h>

/* int main()
{
    int a,b,c;
    int how[5];
    char output[20];
    for(int i=0;i<5;i++)
    {
        how[i]=0;
    }
    for(int i=0;i<20;i++)
    {
        output[i]='\0';
    }
    scanf("%d %d %d",&a,&b,&c);
    int start=0;
    int flag=0;
    if (a+b==c){output[start]='+';output[start+1]=' ';start=start+2;flag=1;}
    if (a-b==c){output[start]='-';output[start+1]=' ';start=start+2;flag=1;}
    if (a*b==c){output[start]='*';output[start+1]=' ';start=start+2;flag=1;}
    if (a/b==c){output[start]='/';output[start+1]=' ';start=start+2;flag=1;}
    if (a%b==c){output[start]='%';start=start+2;flag=1;}

    if(flag==1){
        printf("%s",output);
    }
    else{
        printf("NO");
    }
    

} */

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int flag=0;
    if (a+b==c){printf("+");flag=1;}
    if (a-b==c){if(flag==1){printf(" -");}else{printf("-");flag=1;}}
    if (a*b==c){if(flag==1){printf(" *");}else{printf("*");flag=1;}}
    if (a/b==c){if(flag==1){printf(" /");}else{printf("/");flag=1;}}
    if (a%b==c){if(flag==1){printf(" %%");}else{printf("%%");flag=1;}}

    if (flag==0){
        printf("No");
    }
}