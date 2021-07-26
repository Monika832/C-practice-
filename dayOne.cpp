#include <iostream>
#include <string>
using namespace std;

int main(){
    int vowel=0;
    int cons=0;
    int blank=0;
    int spl=0;
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        char ch= str[i];
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch== 'O' || ch=='U'){
                 vowel++;
             }
        else if((ch>='A' && ch<='Z' ) || (ch>='a' && ch<='z'))
             {
                 cons++;
             }
        else if(ch==' '){
            blank++;
        }
        else
        {
            spl++;
        }
        
    }
        cout<<vowel<<endl;
        cout<<cons<<endl;
        cout<<blank<<endl;
        cout<<spl;
}