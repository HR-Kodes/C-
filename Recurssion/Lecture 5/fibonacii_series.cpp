// Fibonacci using multiple recurssion

#include <iostream>
using namespace std;

int fibonacci_series(int n)
{
  if (n<=1) return n;
  return fibonacci_series(n-1)+fibonacci_series(n-2);
}

int main ()
{
  int n;
  cout<<"Enter a number to find Fibonacci series\t";
  cin>>n;
  cout<<fibonacci_series(n);
  return 0;
}

// Time Complexity = 2^N (Exponential)
