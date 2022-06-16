#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next;
};
Node* insertfrnt(Node *frnt,int v){
    Node *newnode =new Node;
    newnode->val=v;
    newnode->next=frnt;
    return newnode;
}
Node* insertbck(Node * bck,int v){
    Node *newnode =new Node;
    newnode->val=v;
    newnode->next=NULL;
    bck->next=newnode;
    return newnode;
}
void printList(Node* frnt){
    while(frnt!=NULL){
        cout<<frnt->val<<" ";
        frnt=frnt->next;
    }
}
int main(){
   Node *frnt=NULL, *bck=NULL;
   Node *firstNode=new Node;
   firstNode->val=9;
   firstNode->next=NULL;
   bck=frnt=firstNode;
   frnt=insertfrnt(frnt,8);
   bck=insertbck(bck,15);
   printList(frnt);
}