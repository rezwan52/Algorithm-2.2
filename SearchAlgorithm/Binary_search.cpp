#include <iostream>
using namespace std;

int main()
{
     int arr[25] = {4, 5, 10, 25, 47, 58, 9, 6, 3, 54, 24, 87, 69, 23, 35, 44, 78, 32, 14, 52, 39, 64, 75, 11, 12};
     int temp;

     cout << "My Array" << endl;
     for (int i = 0; i < 25; i++)
     {
          cout << " " << arr[i];
     }
     cout << endl;
     for (int i = 0; i < 25; i++)
     {
          for (int j = 0; j < 25 - i - 1; j++)
          {
               if (arr[j] > arr[j + 1])
               {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
               }
          }
     }

     cout << "After sort" << endl;
     for (int i = 0; i < 25; i++)
     {
          cout << " " << arr[i];
     }
     cout << endl;

     int x;

     cout << "Enter a Number you want to search: ";
     cin >> x;

     int f = 0, l = 25 - 1, m = (f + l) / 2;

     for (int i = 0; i < 25; i++)
     {
          m = (f + l) / 2;
          if (arr[m] == x)
          {

               cout << x << " is found at index: " << m << endl;
               break;
          }

          else if (arr[m] < x)
          {
               f = m + 1;
          }
          else
          {
               l = m - 1;
          }
          if (f > l)
          {
               cout << x << " is not found" << endl;
               break;
          }
     }
}
