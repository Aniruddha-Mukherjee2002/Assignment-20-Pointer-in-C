#include<stdio.h>
void countVC(char *p)
{
    int i = 0,v = 0,c = 0;
    while(p[i]!='\0')
    {
        if((p[i]=='a'||p[i]=='e'||p[i]=='i'||p[i]=='o'||p[i]=='u') ||(p[i]=='A'||p[i]=='E'||p[i]=='I'||p[i]=='O'||p[i]=='U'))
            v++;
        else
            c++;
      i++;
    }
    printf("Number of Vowel(s) in this string is : %d\nNumber of Consonant(s) in this string is :%d\nTotal length of the String is %d\n",v,c,v+c);
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
   countVC(a);
   return 0 ;
}
