#include <iostream>
using namespace std;

int name_fun(int i,int n)
{
  if (i<=n)
  {
    cout<<"HRK \n";
    name_fun(i+1,n);
  }
  else
  return 0;
}

int main()
{
  int n,i=1;
  cout<<"Enter numbert of times name should be displayed ";
  cin>>n;
  name_fun(i,n);
}
