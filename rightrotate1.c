#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char*argv[])
{int a[argc-2];
for(int i=1;i<argc-1;i++)
a[i-1]=atoi(argv[i]);
int n=atoi(argv[argc-1]);
n=n%(argc-2);
int temp[n];
int t=0;
for(int i=argc-2-n;i<argc-2;i++)
temp[t++]=a[i];
for(int i=n;i>=0;i--)
a[i+n]=a[i];
for(int i=0;i<n;i++)
a[i]=temp[i];
for(int i=0;i<argc-2;i++)
printf("%d",a[i]);

return 0;
}


