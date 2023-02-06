#include<bits/stdc++.h>
using namespace std;
int Binarysearch(int Array[], int n, int target)
{
  int start=0;
  int end=n-1;
  while(start<=end)
  {
      int mid=(start+end)/2;
      if(Array[mid]==target)
      {
        return mid;
      }
      else if(Array[mid]>=target)
      {
        end=mid-1;
      }
      else
      {
        start=mid+1;
      }
  }
  return -1;
}
int main()
{
    int n;
    cin>>n;
   int Array[n];
   for(int i=0;i<n;i++)
   {
    cin>>Array[i];
   }
   int target;
   cin>>target;
   sort(Array,Array+n);
   for (int i=0;i<n;i++)
   {
    cout<<Array[i]<<" ";
   }
   cout<<endl;
   cout<<"found at position : "<<Binarysearch(Array,n,target);

}