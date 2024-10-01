#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char encrypt(char ch);
char decrypt(char ch);
int key,len;
char a[100],r[100],ch;
void main()
{
    int op;
    printf("Original Message: ");
    gets(a);
    printf("Shift key: ");
    scanf("%d",&key);
    len=strlen(a);
    for(int i=0;i<len;i++)
    {
         ch=a[i];
         r[i]=encrypt(ch);
    }
    puts(r);
    printf("Encrypted Message: ");
    gets(a);
    gets(a);
    printf("Shift key: ");
    scanf("%d",&key);
    len=strlen(a);
    for(int i=0;i<len;i++)
    {
         ch=a[i];
         r[i]=decrypt(ch);
    }
    puts(r);
}
char encrypt(char ch)
{
    if(ch==32)
    {
        return ch ;
    }
    else if (ch==90||ch==122)
    {
        return ch-25 + key;
    }
    
    else
    {
        return ch + key;
    }
}
char decrypt(char ch)
{
    if(ch == 32)
    {
        return ch;
    }
    else if(ch==90||ch==122)
    {
        return ch-25 -key;
    }
    else 
    return ch-key;
}