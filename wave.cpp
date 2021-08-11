#include <iostream>
using namespace std;

int main(){
    int row;
    int col;
    cin>>row;
    cin>>col;
    int arr[20][20];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    for(int j=0;j<col;j++){
       if((j%2)==0){
           for(int i=0;i<row;i++){
               cout<<arr[i][j]<<" ";
           }
       }
       else{
           
           for(int i=row-1;i>=0;i--){
               cout<<arr[i][j]<<" ";
           }
       }
    }
return 0;
    
}