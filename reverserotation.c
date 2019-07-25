#include<stdio.h>
#include<stdlib.h>

void right_rotate(int *arr,int size)
{ int temp=arr[size-1];
for(int i=size-1; i>0 ; i--)
	{arr[i]=arr[i-1];}
arr[0]=temp;
}


int main(int argc,const char *argv[])
{
int a[argc-1];
int min=atoi(argv[1]);
for(int i=1 ; i<argc ; i++)
	{a[i-1] = atoi( argv[i] ); 
	if(min>a[i-1])
		min=a[i-1];
	}
while(a[0]!=min)
	right_rotate(a,argc-1);

for(int i=0;i<argc-1;i++)
printf("%d ",a[i]);

return 0;
}
