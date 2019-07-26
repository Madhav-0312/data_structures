#include<stdlib.h>
#include<stdio.h>
int main(int argc, const char *argv[])
{int a[argc-1],min,min_index;
min=atoi(argv[1]);
min_index=0;
for(int i=1; i<argc ; i++)
a[i-1]=atoi(argv[i]);
for(int i=0; i<argc-1; i++)
{if(a[i]<min)
  {min=a[i];
  min_index=i;
  }
}
printf("%d  right rotations",min_index);
return 0;
}


