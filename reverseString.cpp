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

void reverse( char *arr){
    int j=length(arr)-1;
    int i=0;
    while(i<j){
     swap(arr[i],arr[j]);
     i++;
     j--;
    }
}

int main(){
    char arr[100];
    cin.getline(arr,100);
    reverse(arr);
    cout<<arr<<endl;

}