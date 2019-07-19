#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{int a[argc-1];
int *ptr=a;
for(int i=1;i<argc;i++)
a[i-1]=atoi(argc[i]);
int [argc-1];
j=0;
for(int i=argc-2;i>0;i--)
{b[i]=*(a+j);
j++;
}
for(int i=0;i<argc-1;i++)
printf("%d",b[i]);
return 0;
}
