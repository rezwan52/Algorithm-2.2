#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int l,int r,int x)
{
     if(r>=l)
     {
          int mid = l+(r-l)/2;

          if(arr[mid]==x)
          {
               return mid;

          }
          if(arr[mid]>x)
          {
               return binarysearch(arr,l,mid-1,x);
          }
          else
          {
               return binarysearch(arr,mid+1,r,x);
          }
          

     }
     return -1;
}

int main()
{


     int arr[]={3,6,8,10,19,23,45,78,90,102};
     int x= 109;
     int n= sizeof(arr)/sizeof(arr[0]);

     int result = binarysearch(arr,0,n-1,x);

     if (result == -1)
     {
          cout<<"Element is not found in this array"<<endl;
     }
     else
     {
          cout<<"Element is present at index :"<<result;
     }

     return 0;
}