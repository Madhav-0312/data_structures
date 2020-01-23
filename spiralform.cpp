#include<iostream>
#include<stdlib.h>
using namespace std;
class Node{
    public:
    string data;
    Node* left;
    Node* right;
    Node(string t) {
        data=t;
        left=right=NULL;
    }
};
Node* construct(string arr[],Node * root,int i,int n) {
    if(i<n) {
        Node* temp=new Node(arr[i]);
        root=temp;
        if(2*i+1<n && arr[2*i+1]!="_")
            root->left=construct(arr,root->left,2*i+1,n);
        if(2*i+2 < n && arr[2*i+2]!="_")
            root->right=construct(arr,root->right,2*i+2,n);
    }
    return root;
}
void preorder(Node* root) {
    if(root==NULL)
        return;
    else {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }    
}
void printlevel(Node* root,int level) {
    if(root==NULL)
        return;
    if(level==1)
        cout<<" "<<root->data;
    else if(level>1)
    {
        printlevel(root->left,level-1);
        printlevel(root->right,level-1);
    }
}
void printlevel1(Node * root,int level) {
    if(root==NULL)
        return;
    if(level==1)
        cout<<" "<<root->data;
    else if(level>1) {
        printlevel1(root->right,level-1);
        printlevel1(root->left,level-1);
    }    
}
int height(Node *root) {
    if(root==NULL)
        return 0;
    else {    
    int l=height(root->left);
    int r=height(root->right);
    if(l>r)
        return l+1;
    else 
        return r+1;
    }
    
    
}
int main(int argc,const char* argv[]) {
    int n=argc-1;
    string arr[n];
    int k=0;
    for(int i=1;i<argc;i++)
        arr[k++]=argv[i];
    Node * root=construct(arr,root,0,n);
    int h=height(root);
    cout<<root->data;
    for(int i=2;i<=h;i++){
        if(i%2==0)
            printlevel1(root,i);
            else
        printlevel(root,i);
    }
    return 0;
}
