#include<stdio.h>
void sort(int *p,int size)
{
    int temp;
    for(int i = 0; i<size-1;i++)
    {
        for(int j = 0; j<size-i-1; j++)
        {
            if(p[j] > p[j+1])
            {
                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
}
int main()
{
    int a[] = {34,67,1,89,56,2,3};
    int size = sizeof(a) / sizeof(int);
    sort(a,size);
    for(int i = 0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
