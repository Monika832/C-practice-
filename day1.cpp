#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    int lengt=str.length();
    for(int i=0;i<lengt;i++){
        for(int j=i+1;j<lengt;j++){
            if(str[i]==str[j]){
                for(int k=j;k<lengt;k++){
                    str[k]=str[k+1];
                }
            }
        }
    }
    cout<<str;
}