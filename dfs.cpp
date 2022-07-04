#include <iostream>
#include <bits/stdc++.h>
using namespace std;


struct Node {
   int val;
   Node *left=NULL;
   Node *right=NULL;
};

void dfsStackpreorder(Node *root){
    stack <Node*> s;
    if(root) s.push(root);
    while(s.size()){
        auto a=s.top();
        s.pop();
        cout<<a->val<<" ";
        if(a->right) s.push(a->right);
        if(a->left) s.push(a->left);
    }
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
   dfsStackpreorder(root);
  

}