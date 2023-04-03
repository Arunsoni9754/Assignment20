#include<stdio.h>
int main()
{
     char s[20];
    char *p=&s;
    gets(s);
    int i;
    int l=0,m=0;
    for(i=0;*(p+i)!='\0';i++)
    {
        if(*(p+i)=='a'||*(p+i)=='i'||*(p+i)=='e'||*(p+i)=='o'||*(p+i)=='u'||*(p+i)=='A'||*(p+i)=='I'||*(p+i)=='E'||*(p+i)=='O'||*(p+i)=='U')
        {
            l++;
        }
        else if((*(p+i)>='a' && *(p+i)<='z' )||(*(p+i)>='A' && *(p+i)<='Z'))
        {
            m++;
        }
    }
    printf("%d %d",l,m);
}