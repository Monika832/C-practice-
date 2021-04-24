#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        char ch;
        ch='A';
        for(int i=0;i<n-row+1;i++){
            cout<<ch;
            ch++;
        }
        for(int i=0;i<n-row+1;i++){
            ch--;
            cout<<ch;
        }
        cout<<endl;
    }
}