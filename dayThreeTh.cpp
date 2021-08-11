#include <iostream>
using namespace std;

class Empl{
    public:
    string name;
    int age;
    int gh(){
        cin>>age;
        cin>>salary;
    }
    int g(){
        cout<<age<<endl;
        cout<<salary;
    }
    
    private:
    int salary;
};

int main(){
    Empl e1;
    e1.gh(); //set
    e1.g();  //get
}
