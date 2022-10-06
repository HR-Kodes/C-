#include <bits/stdc++.h> // Use this header so vector can be used
//#include <iostream>
using namespace std;

bool any1_subsequence_sum(int ind,vector<int> &ds , int s , int sum , int arr[] , int n)
{
  if (ind==n)
  { // Condition is satisfied
    if (s==sum)
    {
      for (auto it : ds)  cout<<it<<' ';
      cout<<endl;
      return true;
    }
    // Condition not satisfied
      else return false;
    }

  ds.push_back(arr[ind]);
  s+=arr[ind];
  if(any1_subsequence_sum(ind+1,ds,s,sum,arr,n) == true) return true;
  s-=arr[ind];
  ds.pop_back();
  if(any1_subsequence_sum(ind+1,ds,s,sum,arr,n) == true) return true;

  return false;
}

int main ()
{
  int arr[]={1,2,1};
  int n=3;
  int sum=2;
  vector<int> list;
  any1_subsequence_sum(0,list,0,sum,arr,n);

  return 0;
}
