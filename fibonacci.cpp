#include <iostream>
using namespace std;

int main() {
   int row, column, first_no = 0, second_no = 1, sum = 1;
   int n;
   cin>>n;

   for (row = 1; row <= n; row++) {
      for (column = 1; column <= row; column++) {
         if (row == 1 && column == 1) {
            printf("0");
            continue;
         }
         printf("%d\t", sum);

         //Computes the series
         sum = first_no + second_no;
         first_no = second_no;
         second_no = sum;
      }
      printf("\n");
   }
   return 0;
}