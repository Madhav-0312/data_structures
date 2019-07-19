#include<stdio.h>
int main(void)
{int arr[]={1,2,3,4};
int *ptr=arr;
int n=sizeof(arr)/sizeof(int);
for(int i=0;i<n;i++)
printf("%d",*(ptr+i));
return 0;
}

