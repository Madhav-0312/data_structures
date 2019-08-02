#include<string.h>
#include<stdio.h>
int main(void)
{
char s[50];
char s1[50];
scanf("%s",&s);
scanf("%s",&s1);
char temp[50];
strcpy(temp,s);
strcpy(s,s1);
strcpy(s1,temp);
printf("%s %s",s,s1);
return 0;
}
