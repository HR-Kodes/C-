// Checking if string is palindrome or not

#include <iostream>
using namespace std;

bool check_palindrome_string(int i, char a[], int n)
{
  if (i>=n/2) return true;
  if (a[i]!=a[n-i-1]) return false;
  check_palindrome_string(i+1,a,n);
}

int main()
{
  int n;
  cout<<"Enter length os array \t";
  cin>>n;
  char arr[n];
  for (int i=0;i<n;i++)
  {
    cout<<"\n Enter element \t";
    cin>>arr[i];
  }
  bool ans=check_palindrome_string(0,arr,n);
  if (ans) cout<<"It's a palindrome \n";
  else cout<<"It's not a palindrome \n";

  cout<<"Array elements are \n";
  for (int i=0;i<n;i++)
  {
    cout<<arr[i]<<endl;
  }
}
