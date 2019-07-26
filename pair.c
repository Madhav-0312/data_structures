#include<stdio.h>
#include<stdlib.h>
int main(int argc, const char *argv[])
{ int a[argc-2];
for(int i=1 ; i<argc-1 ; i++)
a[i-1]=atoi(argv[i]);
int sum=atoi(argv[argc-1]);
for(int i=0 ; i<argc-3 ; i++)
	{if((a[i]+a[i+1])==sum)
	printf("%d and %d\n",a[i],a[i+1]);
}
return 0;
}

