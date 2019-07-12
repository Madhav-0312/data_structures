
#include<stdio.h>
int binary_search(int a[],int s,int n)
{int l=0;
int r=n-1;
while(l<=r)
{int mid=l+(r-l)/2;
if(n==a[mid])
return mid;
if(n>a[mid])
l=mid+1;
else
r=mid-1;
}
return -1;
}
void main()
{int s;
scanf("%d",&s);
int a[s];
for(int i=0;i<s;i++)
{scanf("%d",&a[i]);
}
int num;
scanf("%d",&num);
int res=binary_search(a,s,num);
if(res==-1)
printf("Number not present");
else
printf("Number present at %d position",res);
}
