#include <iostream>
using namespace std;
void printarray(int a[100],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int Partition(int a[100],int lb,int ub){
    int pivot=a[lb];
    int start=lb;
    int end=ub;
        while(start<end){
            while(a[start]<=pivot){
            start++;
            }
        while(a[end]>pivot){
            end--;
        }
        if(start<end){
            swap(&a[start],&a[end]);
        }
        }
        swap(&a[end],&a[lb]);
    
    return end;
    
}
void Quicksort(int a[100],int lb,int ub){
    if(lb<ub){
        int loc;
        loc=Partition(a,lb,ub);
        Quicksort(a,lb,loc-1);
        Quicksort(a,loc+1,ub);
    }
}
int main(){
   int n;
   cin>>n;
   int a[100];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   cout<<"BEfore sorting"<<endl;
   for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
   }
   cout<<endl;
   Quicksort(a,0,n-1);
   cout<<"After Sorting"<<endl;
   printarray(a,n);

   
    
}