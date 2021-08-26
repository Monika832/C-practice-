#include <iostream>
using namespace std;

void printarray(int a[100],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
 
void Merge(int a[50],int lb,int mid,int ub){
   int i=lb;
   int j=mid+1;
   int k=lb;
   int b[50];
   while(i<=mid && j<=ub){
       if(a[i]<=a[j]){
           b[k]=a[i];
           i++;
       }
       else{
           b[k]=a[j];
           j++;
       }
       k++;
   }
   if(i>mid){
       while(j<=ub){
           b[k]=a[j];
           j++;
           k++;
       }
   }
   else{
       while(i<=mid){
           b[k]=a[i];
           i++;
           k++;
       }
   }
   for(k=lb;k<=ub;k++){
       a[k]=b[k];
   }
}

void MergeSort(int a[50],int lb,int ub){
    int mid;
    if(lb<ub){
        mid=(lb+ub)/2;
    }
    else{
        return;
    }
    MergeSort(a,lb,mid);
    MergeSort(a,mid+1,ub);
    Merge(a,lb,mid,ub);

}

int main(){
    int n;
    cin>>n;
    int a[50];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int lb=0;
    int ub=n-1;
    MergeSort(a,lb,ub);
    cout<<" Sorted Array";
    printarray(a,n);
}