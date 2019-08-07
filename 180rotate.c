#include<stdio.h>
#include<stdlib.h>
void rotate(int m,int n,int a[m][n],int r)
{if(n<m)
	r=n+2-n%2;
else
	r=m+2-m%2;
 while(r>0){
int temp=0,temp1=1,l;
	if(n<m)
	l=n/2;
	else
	l=m/2;
	
	while(l>0)	{
		int t=a[temp][temp];
		int i,j;
		j=temp;
		for(i=temp;i<m-temp1;i++)
			a[i][j]=a[i+1][j];
		
		i=m-temp1;
		for(j=temp;j<n-temp1;j++)
			a[i][j]=a[i][j+1];
			
		j=n-temp1;
		for(i=m-temp1;i>temp;i--)
			a[i][j]=a[i-1][j];
	
		i=temp;
		for(j=n-temp1;j>temp;j--)
			a[i][j]=a[i][j-1];
		
		a[temp][temp1]=t;
		temp1++;
		temp++;
		l--;
	}
r--;}}
int main(void) {
	int n,m;
	scanf("%d %d",&m,&n);
	int a[m][n];
	int r;
	
	for(int i=0;i<m;i++)	{	
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	r=4;
	rotate(m,n,a,r);
	for(int i=0;i<m;i++)	{
		for(int j=0;j<n;j++)	
			printf("%d ",a[i][j]);
		printf("\n");
	}
return 0;
}

