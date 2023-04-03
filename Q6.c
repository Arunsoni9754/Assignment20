#include<stdio.h>
int main()
{
    char s[20];
    char *p=&s;
    gets(s);
    int i;
    int l=0;
    for(i=0;*(p+i)!='\0';i++);
    printf("%d",i);

}