#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    int in=0;
    char rev[100];
    int len=str.length();
    int i=len-1;
    int j=len-1;
    int a;

    while(j>0){
        if(str[j]==' '){
          a=j+1;
          while(a<=i){
              rev[in]=str[a];
              a++;
              in++;
          }
          rev[in++]= ' ';
          i=j-1;
        }
        j--;
    }
    for(int a=0;a<=i;a++){
        rev[in]=str[a];
        in++;
    }
    rev[in]='\0';
    cout<<rev;
    return 0;
}