#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{

     int n1 = mid - l + 1;
     int n2 = r - mid;

     int L[n1], R[n2];

     for (int i = 0; i < n1; i++)
     {
          L[i] = arr[l + i];
     }

     for (int j = 0; j < n2; j++)
     {
          R[j] = arr[mid + 1 + j];
     }

     int i, j, k;

     i = 0;
     j = 0;
     k = l;

     while (i < n1 && j < n2)
     {
          if (L[i] < R[j])
          {
               arr[k] = L[i];
               i++;
          }

          else
          {
               arr[k] = R[j];
               j++;
          }
          k++;
     }

     while (i < n1)
     {
          arr[k] = L[i];
          i++;
          k++;
     }

     while (j < n2)
     {
          arr[k] = R[j];
          j++;
          k++;
     }
}

void mergesort(int arr[], int l, int r)
{
     if (l < r)
     {
          int mid = l + (r - l) / 2;

          mergesort(arr, l, mid);
          mergesort(arr, mid + 1, r);

          merge(arr, l, mid, r);
     }
}

void printArray(int arr[], int size)
{
     for (int i = 0; i < size; i++)
     {
          cout << arr[i] << " ";
     }
}

int main()
{
     int arr[] = {6, 5, 12, 10, 9, 1};

     int size = sizeof(arr) / sizeof(arr[0]);

     cout << "The unsorted array: " << endl;

     printArray(arr, size);

     cout << endl;

     mergesort(arr, 0, size - 1);

     cout << "Here is the sorted array: " << endl;
     printArray(arr, size);

     return 0;
}