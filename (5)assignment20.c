#include<stdio.h>
int maximum(int *p,int *q)
{
    return(*p>*q ? *p : *q);
}
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("Maximum number between %d and %d is => %d",a,b,maximum(&a,&b));
    return 0;
}
