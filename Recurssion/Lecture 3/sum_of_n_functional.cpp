#include <iostream>
using namespace std;

int sum_n_functional(int n)
{
  if (n==0) return 0;
  return n+sum_n_functional(n-1);
}

int main()
{
  int n,sum;
  cout<<"Enter a number to find sum using functional method ";
  cin>>n;
  sum=sum_n_functional(n);
  cout<<sum;
  return 0;
}


// Time Complexity = O(N)
// Space Complexity = O(N)
