#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char ch[100];
    cin.ignore();
    cin.getline(ch,100);
    cout<<n<<endl;
    cout<<ch;
    }