#include<stdio.h>
int Sumofall(int *a,int size)
{
    int sum = 0;
    for(int i = 0; i<size;i++)
    {
        sum+=a[i];
    }
    return sum;
}
int main()
{
    int a[] = {56,78,9,3,5,3,56,78};
    int size = sizeof(a) / sizeof(int);
    printf("Sum of all elements in the array is : %d\n",Sumofall(a,size));
    return 0;
}
