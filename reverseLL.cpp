#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next;
};
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

Node * reverse1(Node *frnt){
    Node *curr,*nexts;
    Node *prev=NULL;
    curr=frnt;
    while(curr!=NULL){
        nexts=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nexts;   
    }
    return prev;
}
int main(){
   Node *frnt=NULL, *bck=NULL;
   Node *firstNode=new Node;
   firstNode->val=9;
   firstNode->next=NULL;
   bck=frnt=firstNode;
   bck=insertbck(bck,15);
   bck=insertbck(bck,24);
   bck=insertbck(bck,52);
   bck=insertbck(bck,5);
   bck=insertbck(bck,102);
   bck=insertbck(bck,59);
   cout<<endl;
   printList(frnt);
   frnt=reverse1(frnt);
   cout<<endl;
   printList(frnt);
}