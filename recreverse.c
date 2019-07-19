#include<stdio.h>

#include<stdlib.h>
void reverse(int *arr,int index,int length)
{if(index>=length)
return;
int temp=arr[index];
arr[index]=arr[length];
arr[length]=temp;
reverse(arr,index+1,length-1);
return;
}

int main(int argc, const char*argv[])
{int a[argc-1];
for(int i=1;i<argc;i++)
{a[i-1]=atoi(argv[i]);
}
reverse(a,0,argc-2);
for(int i=0;i<argc-1;i++)
printf("%d",*(a+i));
return 0;
}


