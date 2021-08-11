#include<iostream>
#include <string>
using namespace std;

class Detail{
    public:
    string name;
    int roll;
    int mobile;
    
};

int main(){
int n;
cin>>n;
Detail p[30];
int i;
for(i=0;i<n;i++){
    cin>>p[i].name;
    cin>>p[i].roll;
    cin>>p[i].mobile;
}
cout<<"enter roll no of student which you want to find the details";
int acess;
cin>>acess;
for(int i=0;i<n;i++){
if(p[i].roll== acess){
        cout<<p[i].roll<<" ";
        cout<<p[i].name<<" ";
        cout<<p[i].mobile<<" ";
    }
}

}