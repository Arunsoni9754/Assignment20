#include<stdio.h>
int main()
{
    int a,b;
    int *p,*q;
    p=&a;
    q=&b;
    scanf("%d %d",&a,&b);
    if(*p>(*q))
    {
        printf("%d ",a);
    }
    else
    {
        {
            printf("%d",b);
        }
    }
    return 0;
}