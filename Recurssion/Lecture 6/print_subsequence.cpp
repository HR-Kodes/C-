#include <bits/stdc++.h> // Use this header so vector can be used
//#include <iostream>
using namespace std;

void print_subsequence(int ind,vector<int> &ds ,int arr[] , int n)
{
  if (ind>=n)
  {
    for (auto it : ds)
    {
      cout<<it<<' ';
    }
    if (ds.size()==0)
    {
      cout<<"{}";
    }
    cout<<endl;
    return;
  }
  ds.push_back(arr[ind]);
  print_subsequence(ind+1,ds,arr,n);
  ds.pop_back();
  print_subsequence(ind+1,ds,arr,n);
}

int main ()
{
  int arr[]={3,1,2};
  int n=3;
  vector <int> list;
  print_subsequence(0,list,arr,n);

  return 0;
}


// Time Complexity = N * 2^N
// Space Complexity = O(N)
