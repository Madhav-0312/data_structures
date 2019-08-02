#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++)	{	
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	int temp=0,temp1=1,l;
	if(n>3) 
	l=n-2;
	else
	l=1;
	while(l>0)	{
		int t=a[temp][temp];
		int i,j;
		j=temp;
		for(i=temp;i<n-temp1;i++)
			a[i][j]=a[i+1][j];
		
		i=n-temp1;
		for(j=temp;j<n-temp1;j++)
			a[i][j]=a[i][j+1];
			
		j=n-temp1;
		for(i=n-temp1;i>temp;i--)
			a[i][j]=a[i-1][j];
		
		if(i==j)
			a[i][j]=a[i-1][j];
		i=temp;
		for(j=n-temp1;j>temp;j--)
			a[i][j]=a[i][j-1];
		
		a[temp][temp1]=t;
		temp1++;
		temp++;
		l--;
	}
	for(int i=0;i<n;i++)	{
		for(int j=0;j<n;j++)	
			printf("%d ",a[i][j]);
		printf("\n");
	}
return 0;
}

