#include<stdio.h>
void Strrev(char *p)
{
    int i = 0;
    while(p[i]!='\0')
        i++;
    for(int j = i;j>=0;j--)
        printf("%c",p[j]);
}
int main()
{
    char a[50];
    printf("Enter a string : ");
    char ch;
    int i = 0;
   for(int i = 0;i<50;i++)
   {
       scanf("%c",&ch);
       if(ch == '\n')
        break;

        a[i] = ch;
   }
    printf("Before reverse : \n%s\n",a);
    printf("After reverse : \n");
    Strrev(a);
    return 0;
}
