#include <iostream>
using namespace std;

int main(){
    int a;
    float b;
    char c;
    int *ptr1=&a;
    float *ptr2=&b;
    char *ptr3=&c;
    cout<<sizeof(ptr1)<<endl;
    cout<<sizeof(ptr2)<<endl;
    cout<<sizeof(ptr3)<<endl;

}