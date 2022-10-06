#include <iostream>
using namespace std;

void one_to_n(int i,int n)
{
  if (i<=n)
  {
    cout<<i<<endl;
    one_to_n(i+1,n);
  }
  else return;
}

int main()
{
  int n,i=1;
  cout<<"Enter number to print 1 to entered number ";
  cin>>n;
  one_to_n(i,n);
  return 0;
}
