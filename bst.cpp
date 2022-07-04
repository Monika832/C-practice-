#include <iostream>
#include <bits/stdc++.h>
using namespace std;


struct Node {
   int val;
   Node *left=NULL;
   Node *right=NULL;
};

bool bst(int leftRange,int rightRange,Node *root){
    if(root==NULL) return false;
    if(root->val<leftRange || root->val>rightRange) return false;
    if(bst(leftRange,root->val,root->left) && bst(root->val,rightRange,root->right)) return true;
    return false;
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
   cout<< bst(INT_MIN,INT_MAX,root);
  

}