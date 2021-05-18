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

int palidrome( char *arr){
    int j=length(arr)-1;
    int i=0;
    while(i<j){
        if(arr[i] != arr[j]){
            return false;
        }
        return true;
    }
}

int main(){
    char arr[100];
    cin.getline(arr,100);
    int check=palidrome(arr);
    if(check==true){
        cout<<"palidrome";
    }
    else{
        cout<<"not a palidrome";
    }
    

}