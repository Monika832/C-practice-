#include <iostream>
#include <math.h>
using namespace std;

class Dis{
  public:
  int x;
  int y;
  
  };
  float dist(Dis p1,Dis p2)
   {
    return (p2.y - p1.y)/(p2.x - p1.x);
   }
int main(){
   Dis p1;
   cin>>p1.x;
   cin>>p1.y;
   Dis p2;
   cin>>p2.x;
   cin>>p2.y;
   cout<<dist(p1,p2);

}