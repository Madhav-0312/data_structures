#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char*argv[])
{int a[argc-1];
for(int i=1;i<argc;i++)
a[i-1]=atoi(argv[i]);
int size=argc-1;
for(int t=0;t<size;t++)
   {int l=0,r=l+t;
while(r<=(size-1))
{for(int i=l;i<=r;i++)
{printf("%d",a[i]);}
printf(" ");
l++;
r=l+t;
}
printf("\n");
}
return 0;
}
