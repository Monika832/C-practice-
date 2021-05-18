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
    cin.getline(arr,100);
    length(arr);
    cout<<length(arr);

}