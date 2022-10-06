#include <iostream>
using namespace std;

void one_to_n(int i,int n)
{
  if (i>=1)
  {
    cout<<i<<endl;
    one_to_n(i-1,n);
  }
  else return;
}

int main()
{
  int n;
  cout<<"Enter number to print from N to 1 ";
  cin>>n;
  one_to_n(n,n);
  return 0;
}
