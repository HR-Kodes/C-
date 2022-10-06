#include <iostream>
using namespace std;

void one_to_n_backtracking(int i,int n)
{
  if (i<1)
    return;
  one_to_n_backtracking(i-1,n);
  cout<<i<<endl;
}


int main()
{
  int n;
  cout<<"Enter number to print 1 to entered number ";
  cin>>n;
  one_to_n_backtracking(n,n);
  return 0;
}
// Backtracking by putting print line after recursive function call
