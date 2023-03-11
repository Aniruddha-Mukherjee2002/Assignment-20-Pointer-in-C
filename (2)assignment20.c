/*Write a function to swap strings of two char arrays of calling functions. (TSRS)*/
#include<stdio.h>
void swap(char *p,char *b)
{
    char temp[50];
    int i = 0;

    while(p[i] != '\0')
    {
        temp[i] = p[i];
        i++;
    }
    temp[i] = '\0';
    i = 0;
    while(b[i] != '\0')
    {
        p[i] = b[i];
        i++;
    }
    i = 0;
    while(temp[i] != '\0')
    {
        b[i] = temp[i];
        i++;
    }
}
int main()
{
    char a[] = "ani";
    char b[] = "rud";
    printf("array 'a' contains : %s\narray 'b' contains : %s",a,b);
    printf("\n");
    swap(a,b);
    printf("\n");
    printf("array 'a' contains : %s\narray 'b' contains : %s",a,b);
    printf("\n");
    return 0;
}
