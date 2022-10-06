#include <iostream>
using namespace std;

void sum_n_parametarized(int i , int sum)
{
  if (i<1)
  {
    cout<<sum;
    return;
  }
  sum_n_parametarized(i-1,sum+i);
}

int main()
{
  int n;
  cout<<"Enter a number to find sum from 1 to entered number ";
  cin>>n;
  sum_n_parametarized(n,0);
  return 0;
}
