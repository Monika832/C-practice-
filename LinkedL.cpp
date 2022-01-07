#include <iostream>
using namespace std;

class node{
public:
   int data;
   node *next;
   node(int val){ 
      data=val;
      next=NULL;
   }
};
void insert(node* &head,int val){
   node *n= new node(val);
   if(head==NULL){
      head=n;
      return;
   }
   node *temp= head;
   while(temp->next!=NULL){
     temp = temp->next;
   }
   temp->next=n;
}
void insertatend(node* &head,int val){
   node *n= new node(val);
   if(head==NULL){
      head=n;
      return;
   }
   node *temp= head;
   while(temp->next!=NULL){
     temp = temp->next;
   }
   temp->next=n;
}
void insertAthead(node*&head, int data){
   node*n= new node(data);
   n->next= head;
   head= n;
}


void display(node* &head){
   node *temp= head;
   while(temp!=NULL){
      cout<<temp->data<<"->";
     temp = temp->next;
   }
   cout<<endl;
}


int main(){
   node *head=NULL;
   int m;
   cin>>m;
   for(int i=0;i<m;i++){
      int data;
      cin>>data;
      insert(head,data);
      display(head);
   }
  
   cout<<"Enter data you want to insert";
   int x;
   cin>>x;
   //insertatend(head,x);
   insertAthead(head,x);
   cout<<"After insertion";
   display(head);
}