#include<stdio.h>
#include<stdlib.h>
int main(int argc, const char *argv[])
{ int a[argc-1];
for(int i=1 ; i<argc ; i++)
	a[i-1]=atoi(argv[i]);
int n=argc-1;
int arr[n-1][n];
int k=0,l=1,r=0;
for(int i=0 ; i<n-1 ; i++)
	{ for(int j=0 ; j<n-i ; j++)
		{if(i==0)
		 arr[i][j]=a[k++];
		else
		{l=1;
for(int j=0;j<n-i;j++)
{
			 
			 r=l+i;int s=0;
			for(int m=l ; m<=r ; m++)
			{ s=s+a[m];}
			arr[i][j]=s;l++;
			}
}
}
}
int lar=arr[0][0];
for(int i=1 ; i<n-1 ; i++)
{	for(int j=0 ; j<n-i ; j++)
	{   if(arr[i][j]>lar)
		lar=arr[i][j];
		
	
}
}
printf("%d",lar);
return 0;}

