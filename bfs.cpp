#include <iostream>
#include <bits/stdc++.h>
using namespace std;


struct Node {
   int val;
   Node *left=NULL;
   Node *right=NULL;
};

void bfs(Node *root){
    queue <Node *> q;
    if(root) q.push(root);
    while(q.size()){
        auto a=q.front();
        q.pop();
        cout<<a->val<<" ";
        if(a->left)q.push(a->left);
        if(a->right) q.push(a->right);
    }
}
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
void dfsinorder(Node *root){
       stack <Node*>s;
       if(root) s.push(root);
       while(s.size()){
            auto a=s.top();
            if(a->left){
                s.push(a->left);
                a->left=NULL;
            }
            else{
                cout<<a->val<<" ";
                s.pop();
                if(a->right) s.push(a->right);
            }
       }
}
void dfspostorder(Node *root){
       stack <Node*>s;
       if(root) s.push(root);
       while(s.size()){
            auto a=s.top();
            if(a->left){
                s.push(a->left);
                a->left==NULL;
            }
            else if{
                if(a->right) s.push(a->right);
                cout<<a->val<<" ";
                s.pop();
            }
              else 
            {
            cout << a->val << " ";
            s.pop();
            }
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
   bfs(root);
   cout<<endl;
   dfsStackpreorder(root);
   cout<<endl;
   dfsinorder(root);
  

}