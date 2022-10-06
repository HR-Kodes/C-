#include <bits/stdc++.h> // Use this header so vector can be used
//#include <iostream>
using namespace std;

int any1_subsequence_sum(int ind, int s , int sum , int arr[] , int n)
{
  // Condition not satisfied
  if (s>sum) return 0; // Strictlt done only when array contains possitive numbers
  if (ind==n)
  { // Condition is satisfied
    if (s==sum) return 1;
    // Condition not satisfied
      else return 0;
  }

  s+=arr[ind];
  int l = any1_subsequence_sum(ind+1,s,sum,arr,n);
  s-=arr[ind];
  int r = any1_subsequence_sum(ind+1,s,sum,arr,n);

  return l+r;
}

int main ()
{
  int arr[]={1,2,1};
  int n=3;
  int sum=2;
  cout<<any1_subsequence_sum(0,0,sum,arr,n);

  return 0;
}


// Time Complexity = 2^N
