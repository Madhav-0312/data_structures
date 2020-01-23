#include<iostream>
using namespace std;
int main(int argc,const char *argv[]) {
    string str1=argv[1];
    string str2=argv[2];
    int l1=str1.length();
    int l2=str2.length();
    int arr[l1+1][l2+1];
    int max=0;
    for(int i=0;i<l1+1;i++) {
        for(int j=0;j<=l2;j++) {
            if(i==0 || j==0)
                arr[i][j]=0;
            else if(str1[i-1]==str2[j-1]) {
                arr[i][j]=arr[i-1][j-1]+1;
                if(max<arr[i][j])
                    max=arr[i][j];
            }
            else
                arr[i][j]=0;
        }
    }
    cout<<max;
    return 0;
}