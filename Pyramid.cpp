#include <iostream>
using namespace std;

int main()
{
   int rows, i, j, space;

   cout << "Enter number of rows: ";
   cin >> rows;

   for(i = 1; i <= rows; i++)
   {
      //for loop for displaying space
      for(space = rows; space >= i; space--)
      {
         cout << " ";
      }
      //for loop to display star equal to row number
      for(j = 1; j <= i; j++)
      {
         cout << "* ";
      }

      cout << "\n";
   }

   return 0;
}
