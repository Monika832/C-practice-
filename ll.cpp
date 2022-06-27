#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next;
};

void dele(int val,Node* &frnt){
    Node* it=frnt;
    if(val==frnt->val){
        Node *temp=frnt;
        frnt=frnt->next;
        delete temp;
        return;
    }
    while(it->next->val!=val){
        it=it->next;
    }
    Node *temp=it->next;
    it->next=it->next->next;
    delete temp;
}
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

Node *rev(Node*frnt){
   if(frnt == NULL || frnt->next==NULL)  return frnt;
   Node *head=rev(frnt->next);
   frnt->next->next=frnt;
   frnt->next=NULL;
   return head;

}



int main(){
   Node *frnt=NULL, *bck=NULL;
   Node *firstNode=new Node;
   firstNode->val=9;
   firstNode->next=NULL;
   bck=frnt=firstNode;
   frnt=insertfrnt(frnt,8);
   bck=insertbck(bck,15);
   bck=insertbck(bck,24);
   frnt=insertfrnt(frnt,102);
   printList(frnt);
   dele(102,frnt);
   frnt=insertfrnt(frnt,56);
   frnt=insertfrnt(frnt,3);
   bck=insertbck(bck,52);
   bck=insertbck(bck,5);
   cout<<endl;
   printList(frnt);

   Node *slow=frnt,*fast=frnt;
   int temp=0;
   while(fast!=NULL && fast->next!=NULL){
   slow=slow-> next;
   temp++;
    fast=fast->next->next;
   }
   cout<<endl<<slow->val<<endl;
   cout<<temp<<endl;
   frnt=rev(frnt);
   printList(frnt);
}