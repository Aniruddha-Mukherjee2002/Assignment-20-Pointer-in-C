#include<stdio.h>
int strLen(char *p)
{
    int i = 0;
    while(p[i]!='\0')
    {
     i++;
    }
    return i;
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
   printf("Want to check the length of the entered string ? \nThen,press enter button.");
   scanf("%c",&ch);
   if(ch=='\n')
    printf("Length of the string '%s' is : %d \n",a,strLen(a));
   else
    printf("Invalid Request !\n");
   return 0;
}
