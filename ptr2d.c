#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{ int m=atoi(argv[1]);
int n=atoi(argv[2]);
int count=0;
int *arr = (int *) malloc (m*n*sizeof(int));
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{*(arr+i*n+j)=count++;
}
}
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
printf("%d ",*(arr+i*n+j));

}
printf("\n");}
return 0;
}
