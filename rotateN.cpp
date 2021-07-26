#include <iostream>
using namespace std;

int length( char *arr){
   int count=0;
   int i=0;
   while(arr[i] !='\0'){
       count++;
       i++;
   }
   return count;
}
int main(){
   char arr[100];
   cin>>arr;
   int n;
   cin>>n;
   int larr=length(arr);
   for(int j=larr-1;j>=0;j--){
        arr[j+n]=arr[j];
   }
   int k=larr;
   int l=0;
   for(int i=0;i<n;i++){
       arr[l]=arr[k];
       k++;
       l++;
   }
   arr[larr]='\0';

   cout<<arr<<endl;

}
