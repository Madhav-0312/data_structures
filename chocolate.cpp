#include <iostream>
using namespace std;
void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    int L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
   
    i = 0; 
    j = 0;  
    k = l;  
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
   
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
void merge_sort(int arr[],int l,int r){
    if(r>l) {
        int m=l+(r-l)/2;
        merge_sort(arr,l,m);
        merge_sort(arr,m+1,r);
        
        merge(arr,l,m,r);
    }
}
int main() {
	//code
	int t;
	cin>>t;
	for(int p=0;p<t;p++) {
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	        int m;
	        cin>>m;
	   merge_sort(arr,0,n-1);
	   int ans=100000;
	   for(int i=0;i+m<=n;i++) {
	       int d=arr[m+i-1]-arr[i];
	       if(d<ans)
	        ans=d;
	   }
	   if(m==1)
	    ans=0;
	    if(m==n)
	    ans=arr[m-1]-arr[0];
	   cout<<ans<<endl;
	}
	return 0;
}