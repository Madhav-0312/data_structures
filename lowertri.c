#include<stdio.h>
int main(void) {
int m,n;
scanf("%d %d",&m,&n);
int a[m][n];
for(int i=0 ; i<m ; i++)
	for(int j=0 ; j<n ; j++)
		scanf("%d",&a[i][j]);
for(int i=0;i<m;i++) {
	for(int j=0;j<n;j++) {
		if(j<i)
			printf("%d ",a[i][j]);
		else
			printf("  ");}
	printf("\n");
	}
return 0;
}
