#include<stdlib.h>
#include<stdio.h>
int find_pivot(int arr[],int size)
{ int max=arr[0];
int max_index=0;
for(int i=0;i<size;i++){
if(max<arr[i])
max_index=i;}
return max_index;
}

int binary_search (int arr[],int low,int high,int num) {
	 if(low>high)
		return -1;
	int mid=low + (high-low)/2;
	if(arr[mid]==num)
		return mid;
	if(arr[mid]>num)
		return binary_search(arr,low,mid-1,num);
	else
		return binary_search(arr,mid+1,high,num);
}

int main(int argc,const char *argv[])
{ int a[argc-2];
int n=argc-2,ans;
for(int i=1 ; i<argc-1 ; i++)
	a[i-1]=atoi(argv[i]);
int num=atoi(argv[argc-1]);
int p=find_pivot(a,argc-2);
if(num<=a[n-1])
ans=binary_search(a,p+1,n-1,num);
else if(num==a[p])
ans=p;
else
ans=binary_search(a,0,p-1,num);
printf("%d position",ans);
return 0;
}

