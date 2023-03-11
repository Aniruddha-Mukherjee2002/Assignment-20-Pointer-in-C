#include<stdio.h>
int rev(int *a,int size)
{
    for(int i = size-1; i>=0;i--)
    {
        printf("%d ",a[i]);
    }

}
int main()
{
    int a[] = {56,78,9,3,5,3,56,78};
    int size = sizeof(a) / sizeof(int);
    printf("Before reverse : \n");
    for(int i = 0; i<size;i++)
        printf("%d ",a[i]);
    printf("\nAfter reverse : \n");
    rev(a,size);
}

