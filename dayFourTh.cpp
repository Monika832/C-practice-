#include <iostream>
using namespace std;
int area(int side){
    return side*side;
}
int area(int l,int b){
    return l*b;
}
int main(){
int side;
int l,b;
cin>>l;
cin>>b;
cin>>side;
cout<<area(side)<<endl;
cout<<area(l,b)<<endl;
}