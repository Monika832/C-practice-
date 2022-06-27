#include <iostream>
#include <bits/stdc++.h>
using namespace std;


struct Node {
   int val;
   Node *left=NULL;
   Node *right=NULL;
};

void inorder(Node *root){
   if(root==NULL) return;
   inorder(root->left);
   cout<<root->val<<" ";
   inorder(root->right);
}


void preorder(Node *root){
   if(root==NULL) return;
   cout<<root->val<<" ";
   inorder(root->left);
   inorder(root->right);
}


void postorder(Node *root){
   if(root==NULL) return;
   inorder(root->left);
   inorder(root->right);
   cout<<root->val<<" ";
}

 
int height(Node *root){
    if(root==NULL) return 0;
    int leftH=height(root->left);
    int rightH=height(root->right);
    int h=max(leftH,rightH)+1;
    return h;
}



int main(){
   Node *root=new Node;
   root->val=90;
   Node *node1=new Node;
   node1->val=5;
   Node *node2=new Node;
   node2->val=9;
   root->left=node1;
   root->right=node2;
   Node *node3=new Node;
   node3->val=85;
   Node *node4=new Node;
   node4->val=10;
   node2->left=node3;
   node1->right=node4;
   inorder(root);
   cout<<endl;
   preorder(root);
   cout<<endl;
   postorder(root);
   cout<<endl;
   cout<<"Height of tree ="<<height(root);
}