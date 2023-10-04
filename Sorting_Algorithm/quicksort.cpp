#include <iostream>
using namespace std;

void swap(int arr[], int a, int b)
{
     int temp = arr[a];
     arr[a] = arr[b];
     arr[b] = temp;
}

int partition(int arr[], int l, int h)
{
     int privot = arr[l];
     int i = l;
     int j = h;

     while (i < j)
     {
          while (arr[i] <= privot && i < h)
               i++;

          while (arr[j] >= privot && j > l)
               j--;
          if (i < j)
               swap(arr, i, j);
     }

     swap(arr, l, j);
     return j;
}

void quicksort(int arr[], int l, int h)
{
     if (l < h)
     {
          int position = partition(arr, l, h);
          quicksort(arr, l, position - 1);
          quicksort(arr, position + 1, h);
     }
}

int main()
{
     int arr[] = {8, 6, 45, 36, 1, 25, 3, 17, 2, 3};

     int n = sizeof(arr) / sizeof(arr[0]);

     cout << "Unsorted array is: " << endl;

     for (int i = 0; i < n; i++)
     {
          cout << arr[i] << " ";
     }

     cout << endl;

     quicksort(arr, 0, n - 1);

     cout << "Sorted array is: " << endl;

     for (int i = 0; i < n; i++)
     {
          cout << arr[i] << " ";
     }

     return 0;
}