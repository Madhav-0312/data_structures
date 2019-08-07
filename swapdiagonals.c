#include<stdio.h>
void swap(int n,int a[n][n]){
	int i=0,j=0,k=n-1;
	while(i<n) {
		int temp=a[i][i];
		a[i][i]=a[j][k];
		a[j][k]=temp;
		i++;
		j++;
		k--;
		}
}
int main(void) {
int n;
scanf("%d",&n);
int a[n][n];
for(int i=0 ; i<n ; i++)
	for(int j=0 ; j<n ; j++)
		scanf("%d",&a[i][j]);
swap(n,a);
for(int i=0 ; i<n ; i++) {
	for(int j=0 ; j<n ; j++) {
		printf("%d ",a[i][j]);
		}
	printf("\n");
}
return 0;
}			
		
	
