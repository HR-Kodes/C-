#include <bits/stdc++.h> // Use this header so vector can be used
//#include <iostream>
using namespace std;

void subsequence_sum(int ind,vector<int> &ds , int s , int sum , int arr[] , int n)
{
  if (ind==n)
  {
    if (s==sum)
    {
      for (auto it : ds)  cout<<it<<' ';
      cout<<endl;
    }
      return;
    }

  ds.push_back(arr[ind]);
  s+=arr[ind];
  subsequence_sum(ind+1,ds,s,sum,arr,n);
  s-=arr[ind];
  ds.pop_back();
  subsequence_sum(ind+1,ds,s,sum,arr,n);
}

int main ()
{
  int arr[]={1,2,1};
  int n=3;
  int sum=2;
  vector<int> list;
  subsequence_sum(0,list,0,sum,arr,n);

  return 0;
}
