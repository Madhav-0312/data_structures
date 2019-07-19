#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{int a[argc-1];
for(int i=0;i<argc-1;i++)
{a[i]=atoi(argv[i+1]);
}
int negc=0,posc=0;
int p=0,n=0,neg[argc-1],pos[argc-1];
for(int i=0;i<argc-1;i++)
{
if(a[i]<0)
{negc++;
neg[n++]=a[i];
}

else{
posc++;
pos[p++]=a[i];
}}
if(posc==negc)
{ 
	for(int i=0;i<posc;i++)
	{printf("%d",neg[i]);
	printf("%d",pos[i]);
	}
}
else if(posc>negc)
	{for(int i=0;i<negc;i++)
	{ printf("%d %d ",neg[i],pos[i]);}
	for(int i=negc;i<posc;i++)
	printf("%d ",pos[i]);
	}
else
	{for(int i=0;i<posc ; i++)
	printf("%d %d ",neg[i],pos[i]);
	for(int i=posc;i<negc;i++)
	printf("%d ",neg[i]);
	}


return 0;
}
