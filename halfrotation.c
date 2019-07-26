#include<stdlib.h>
#include<stdio.h>
int main(int argc, const char *argv[])
{
int a[argc-1];
for(int i=1 ; i<argc ; i++)
	a[i-1]=atoi(argv[i]);
int size=argc-1;
int mid;
if(size%2==0)
{
mid1=size/2-1;
mid2=size/2;}
else{
mid1=size/2;
mid2=size/2;}
int temp=a[mid1];
/*for(int i=mid1 ; i>0 ;i--)
{a[i]=a[i-1];}
a[0]=temp;
temp=a[mid2];
for(int i=mid2;i<size;i++)
{a[i]=a[i+1];}
a[size-1]=temp;*/
for(int i=0;i<argc-1;i++)
printf("%d ",a[i]);
return 0;
}

