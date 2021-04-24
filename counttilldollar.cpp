#include <iostream>
using namespace std;

int main(){
    int dig=0,space=0,alpha=0,other=0;
    char ch;
    ch=cin.get();
    while(ch != '$'){
        if(ch>='0' && ch<='9'){
            dig++;
        }
        else if(ch==' ' || ch=='\n' || ch== '\t'){
            space++;
        }
        else if(ch>= 'A' && ch<= 'Z' || ch>='a' && ch<= 'z'){
            alpha++;
        }
        else{
            other++;
        }
        ch=cin.get();
    }
    cout<<dig<<" "<<space<<" "<<alpha<<" "<<other;

}