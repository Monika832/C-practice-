#include <iostream>
using namespace std;
void swapi(int &a,int &b){
  int temp=a;
  a=b;
  b=temp;
}
void swapo(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    int x,y;
    cin>>x;
    cin>>y;
    swapi(a,b);
    cout<<"value of a after swaping "<<a<<endl;
    cout<<"value of b after swaping "<<b<<endl;
    swapo(&x,&y);
    cout<<"using pointer x is "<<x<<endl;
    cout<<"using pointers  y is "<<y<<endl;

}