#include <iostream>
using namespace std;

class Per{
   public:
   string name;
   float marks;
   int roll;
   float perc(){
       return (marks/1000)*100;
   }
   
};
int main(){
    Per p1;
    Per p2;
    p1.name="Monika";
    p1.roll=124;
    p1.marks=980;
    cout<<p1.perc();
    cin>>p2.name;
    cin>>p2.roll;
    cin>>p2.marks;
    cout<<p2.perc();

}