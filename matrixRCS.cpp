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
    int sum1;
    int sum2;
    int max2=0;
    int max=0;


    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
        //cout<<sum<<" ";
        sum1=sum;
      if(max<sum1){
       max=sum1;
     }
    }
    
    for(int j=0;j<col;j++){
        int sum=0;
        for(int i=0;i<row;i++){
            sum=sum+arr[i][j];
        }
        //cout<<sum<<" ";
        sum2=sum;
        if(max2<sum1){
         max2=sum1;
     }
    }
    

    if(max2>max){
        cout<<max2;
    }
    else{
        cout<<max;
    }
   return 0;
}