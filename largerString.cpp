#include <iostream>
using namespace std;

int length( char *arr){
   int count=0;
   int i=0;
   while(arr[i] !='\0'){
       count++;
       i++;
   }
   return count;
}
void copy(char *a,char *b){
    int i=0;
    int len=length(b);
    while(i<=len){
        a[i]=b[i];
        i++;
    }
}

int main(){
    int n;
    cin>>n;
    cin.ignore();
    char ch[100];
    int maxLength=0;
    char maxstring[100];
    for(int i=0;i<n;i++){
        cin>>ch;
        int l=length(ch);
        if(maxLength<l){
            maxLength=l;
            copy(maxstring,ch);
        }
    }
    cout<<maxLength<<endl;
    cout<<maxstring;

}