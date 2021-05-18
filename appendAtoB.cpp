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

void append(char *x,char *y){
     int i=length(x);
     int j=0;
     int jleng=length(y);
     while(j<=jleng){
         x[i]=y[j];
         i++;
         j++;
     }
}
int main(){
    char x[100],y[100];
    cin>>x>>y;
    append(x,y);
    cout<<x<<endl;
    cout<<y<<endl;


}