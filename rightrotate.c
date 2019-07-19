#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char*argv[])
{int a[argc-1];
for(int i=1;i<argc-1;i++)
{a[i-1]=atoi(argv[i]);
}
int n;
n=atoi(argv[argc-1]);
while(n!=0)
{
int x=a[argc-3];
for(int i=argc-2;i>0;i--)
a[i]=a[i-1];
a[0]=x;
n--;
}

for(int i=0;i<argc-2;i++)
{printf("%d ",a[i]);
}

return 0;
}
