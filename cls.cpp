#include <iostream>
using namespace std;

class Rectangle{
    public:
    int length;
    int bredth;
    int area(){
      return length*bredth;
    }
    int perimeter(){
        return 2*(length+bredth);
    }

};

int main(){
   Rectangle r1;
   r1.length=20;
   r1.bredth=10;
   cout<<r1.area()<<endl;
   cout<<r1.perimeter()<<endl;
   Rectangle r2;
   r2.length=33;
   r2.bredth=22;
   cout<<r2.area()<<endl;
   cout<<r2.perimeter();
   
}