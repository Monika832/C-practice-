#include <iostream>
using namespace std;

 string s[]={"zero","one","two","three","four","five","six","seven","eight","nine"};

void istore(long long n){
 if(n==0){
     return;
 }
int digit =n%10;
 istore(n/10);
 cout<<s[digit]<<" ";
}
int main(){
    long long  n;
    cin>>n;
    istore(n);
}