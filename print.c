#include<stdio.h>
int main(void)
{int arr[]={1,2,3,4,'\0'};
int *ptr;
ptr=arr;
while(*ptr!='\0')
{
printf("%d",*ptr);
ptr++;
}
return 0;
}

