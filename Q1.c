#include<stdio.h>
void swap(int * ,int *);
int main()
{
    int a,b;
    //int *p,*q;
    // p=&a;
    // q=&b;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d and %d ",a,b);
    return 0;
}
void swap(int * p,int * q)
{
    int x;
    x=*p;
    *p=*q;
    *q=x;

}
