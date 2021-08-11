#include <iostream>
using namespace std;

class Squar{
    public:

    int side;
    Squar(){
        cin>>side;
    }
    int area(){
        return side*side;
    }
    int peri(){
        return 4*side;
    }
};

int main(){
    Squar r1;
    cout<<r1.area()<<endl;
    cout<<r1.peri();
}