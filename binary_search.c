
#include<stdio.h>
void main()
{ int mid,l=0,n,s,r;
int a[100];
scanf("%d",&n);
for(int i=0;i<n;i++)
{scanf("%d",&a[i]);
}
int num;
scanf("%d",&num);
mid=n;
r=n-1;
int pos;
while(l<=r)
{mid=l+(r-1)/2;
if(n<a[mid])
{r=mid-1;
}
else if(n>a[mid])
{l=mid+1;
}
else if(n==a[mid])
{pos=mid;
break;
}
}
printf("%d",pos);
}

