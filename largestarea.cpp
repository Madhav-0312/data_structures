#include<iostream>
#include<stdlib.h>
using namespace std;
int main(int argc,const char *argv[]) {
    int n=atoi(argv[1]);
    int arr[n],k=0;
    for(int i=2;i<argc;i++)
        arr[k++]=atoi(argv[i]);
    int max=0,min;
    for(int i=0;i<n;i++) {
        min=arr[i];
        for(int j=i;j<n;j++) {
            if(arr[j]<min)
                min=arr[j];
            int l=j-i+1;
            int t=min*l;
            if(max<t)
                max=t;;
            
        }
    }
    cout<<max;
    return 0;
}