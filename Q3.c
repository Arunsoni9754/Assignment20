#include<stdio.h>
void sort(int *,int);
void sort(int *ptr,int size)
{ int x;
    for(int i=size;i>=0;i--)
    {   
        for(int j=0;j<size;j++)
        {
        if(*(ptr+j)>*(ptr+j+1))
        {
            x=*(ptr+j);
            *(ptr+j) =*(ptr+j+1);
            *(ptr+j+1)=x;
        }
        }
    }
    
}
int main()
{
    int x[100];
    int i;
    printf("ENter hgrt aarrraay");
    for(i=0;i<5;i++)
    {
    scanf("%d",&x[i]);
}
    sort(&x,i-1);
    for(i=0;i<5;i++)
    {printf("%d ",x[i]);
}}