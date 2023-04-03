#include<stdio.h>
void swap(char **s,char **r)
{

    char *t=*s;
    *s=*r;
    *r=t;

}
// void swap(char **,char **);
int main()
{
    char *s1[50];
    char *s2[50];
    printf("Enter the striinngs");
    gets(s1);
    gets(s2);
    swap(&s1,&s2);
    printf("%s",s1);
    printf("\n");
    printf("%s",s2);
    return 0;
}
