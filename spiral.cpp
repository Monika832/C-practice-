#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int matrix[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    int spirals = ceil(n/2.0);
    int a=0,b=n,c=0,d=n;
    for(int s=0;s<=spirals;s++){

        // TOP ROW
        for(int i=a;i<b;i++){
            cout<<matrix[s][i]<<" ";
        }
        
        // Right Column
        for(int i=c+1;i<d;i++){
            cout<<matrix[i][n-s-1]<<" ";
        }
        // BOTTOM ROW
        if(s!=(n-s-1)){
            for(int i=b-2;i>=a;i--){
                cout<<matrix[n-s-1][i]<<" ";
            }
        }
        // Left Column
        if(s!=(n-s-1))
        {
            for(int i=d-2;i>c;i--){
                cout<<matrix[i][s]<<" ";
            }
        }
        a++;
        b--;
        c++;
        d--;

    }
    return 0;
}