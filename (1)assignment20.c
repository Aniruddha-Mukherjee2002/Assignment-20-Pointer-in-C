/*Write a function to swap values of two in variables of calling function. (TSRS)*/
#include<stdio.h>
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 103,b = 102;
    printf("a = %d b = %d",a,b);
    swap(&a,&b);
    printf("\na = %d b = %d",a,b);
    return 0;
}
