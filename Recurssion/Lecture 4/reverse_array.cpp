// Reversing array using single pointer

#include <iostream>
using namespace std;

void reverse_array(int i, int a[],int n)
{
  if (i>=n/2) return;
  swap(a[i],a[n-i-1]);
  reverse_array(i+1,a,n);
}

int main()
{
  int n;
  cout<<"Enter length os array \t";
  cin>>n;
  int arr[n];
  for (int i=0;i<n;i++)
  {
    cout<<"\n Enter element "<<i<<'\t';
    cin>>arr[i];
  }
  reverse_array(0,arr,n);

  cout<<"Array elements are \n";
  for (int i=0;i<n;i++)
  {
    cout<<arr[i]<<endl;
  }
}
