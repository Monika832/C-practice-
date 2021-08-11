#include <iostream>
using namespace std;

class Polygon{
    public:
        int sides;
        void introduce(){
            cout<<"Hello students, I am a polygon with sides: "<<sides<<endl;
        }
        void goodBye(){
            cout<<"Good bye students, Ploygon with "<<sides<<" will see you again"<<endl;
        }

};

class Recta : public Polygon{
    public:
    Recta(){
       sides=4;
    }
    int l;
    int b;
    int area(){
        return l*b;
    }
    int peri(){
        return 2*(l+b);
    }

};
class Sq : public Polygon{
    public:
    Sq(){
       sides=4;
    }
    int s;
    int area1(){
        return s*s;
    }
    int peri1(){
        return 4*s;
    }

};

int main(){
Recta r1;
Sq s1;
cin>>r1.l;
cin>>r1.b;
cin>>s1.s;
cout<<r1.area()<<endl;
cout<<r1.peri()<<endl;
cout<<s1.area1()<<endl;
r1.introduce();
s1.introduce();
}