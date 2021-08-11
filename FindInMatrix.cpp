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
    int num;
    cin>>num;
   int p=0;
    for (int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(arr[i][j]==num){
                cout<<"found at  " <<i+1<<","<<j+1;
                p=1;
                break;

            }

        }
    }
    if(p==0){
        cout<<"not found";
    }
}