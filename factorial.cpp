#include <iostream>
using namespace std;

int fact(int x){
        int ans=1;
        for(int i=x;i>0;i--){
        ans=ans*i;
    }
    return ans;

}
int main(){
    int ans=1;
    int n;
    cin>>n;
    fact(n);
    cout<<fact(n);
    
    return 0;
}
