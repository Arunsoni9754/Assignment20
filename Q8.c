#include<stdio.h>
int main()
{
    int a[50];
    int i,s=0,n;
    int *p=a;
    p=&a;
    printf("Enter the no of terms ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&(*(p+i)));
    }
    for(i=0;i<n;i++)
    {
        s=s+(*(p+i));
    }
    printf("The sum is %d",s);

}