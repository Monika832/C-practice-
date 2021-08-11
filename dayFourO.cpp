#include <iostream>
using namespace std;

class Emply{
    public:
    string name;
    int salary;
    int age; 
    void g(){
        cin>>name;
        cin>>salary;
        cin>>age;
    }
    void h(){
        cout<<name;
        cout<<salary;
        cout<<age;
    }
    
};
class Prog:public Emply{
    public :
    string programminLang;
    void a(){
        cin>>programminLang;
    }
    void x(){
        cout<<programminLang;
    }

};
class Manager:public Emply{
    public:
    string Branch;
    void b(){
        cin>>Branch;
    }
    void y(){
        cout<<Branch;
    }

};
class Marketer:public Emply{
    public :
    string Area;
    void c(){
        cin>>Area;
    }
    void z(){
        cout<<Area;
    }
};
int main(){
Emply E1;
Prog p1;
Manager m1;
Marketer M1;

E1.g();
p1.a();
m1.b();
M1.c();

E1.h();
p1.x();
m1.y();
M1.z();

}