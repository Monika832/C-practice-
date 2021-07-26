#include <iostream>
#include <string>
using namespace std;
int palidrome(string str){
    int length=str.length();
    int i=0;
    int j=length-1;
    int isPal;
    while(i<j){
        if(str[i]!=str[j]){
            return false;   
        }
        return true;
        i++;
        j--;
    }

}
int main(){
    string str;
    getline(cin,str);
    int check = palidrome(str);
    if (check==true){
        cout<<" Palidrome";
    }
    else
    {
        cout<<"not";
    }
    
}
