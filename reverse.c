
#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char*argv[])
{
int a[argc-1];
for(int i=1;i<argc;i++)
 a[i-1]=atoi(argv[i]);
int temp=0;
int b[argc-1];
for(int i=argc-2; i>=0 ; i--)
{b[temp]=a[i];
temp++;
}
for(int i=0; i<argc-1 ; i++)
{printf("%d",b[i]);
}
return 0;
}


