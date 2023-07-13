#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char s[100];
    printf("ho ten:");
    fflush(stdin);
    gets(s);
    char a[100];
    char c;
    int j=0;
    for(int i=strlen(s)-1;i>=0 && s[i]!=' ';i--) a[j++]=s[i];
    a[j]='\0';
    for(int i=0;i<strlen(a)/2;i++)
    {
        c=a[i];
        a[i]=a[strlen(a)-1-i];
        a[strlen(a)-1-i]=c;
    }
    printf("ten: %s",a);
    getch();
    return 0;
}
