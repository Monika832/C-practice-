// Shell Sort in C++ programming

#include <bits/stdc++.h>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}
// Shell sort
void shellSort(int a[], int n) {
  // Rearrange elements at each n/2, n/4, n/8, ... intervals
      for(int gap=n/2;gap>=1;gap/=2){
        for(int j=gap;j<n;j++){
            for(int i=j-gap;i>=0;i-=gap){
                if(a[i+gap]>a[i]){
                    break;
                }
                else{
                    swap(a[i+gap],a[i]);
                }
            }
        }
    }printArray(a,n);

}

// Print an array


// Driver code
int main() {
  int data[] = {9, 8, 3, 7, 5, 6, 4, 1};
  int size = sizeof(data) / sizeof(data[0]);
  cout << "Sorted array: \n";
  shellSort(data, size);
  return 0;
}