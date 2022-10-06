#include <bits/stdc++.h>
using namespace std;

int climbing(int n) {
  if(n==0 || n==1) return 1;
  int left=climbing(n-1);
  int right=climbing(n-2);
  return left + right;
}

int main (){
  int n;
  cout<<"Enter a stair number ";
  cin>>n;
  cout<<climbing(n);
  return 0;
}
