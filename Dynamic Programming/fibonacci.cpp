#include <bits/stdc++.h>
using namespace std;

// Use [ctrl + /] for commenting either recurssive or tabulation approach

// Recurssive Approach = Top down approach

int fibonacci (int n,vector<int>&dp){
  if (n<=1) return n;

  if (dp[n] != -1) return dp[n];

  return dp[n]=fibonacci(n-1,dp)+fibonacci(n-2,dp);
}

int main () {
  int n;
  cout<<"Enter a number ";
  cin>>n;
  vector <int> dp(n+1,-1);
  cout<<"Fibonacci of given input is "<<fibonacci(n,dp);
  return 0;
}

    // Time complexity = O(N)
    // Space complexity = O(N) + O(N) (recurssion stackspace + DP array space)

// Tabulation approach = Bottom up approach

int main () {
  int n;
  cout<<"Enter a number ";
  cin>>n;
  int prev2=0;
  int prev=1;
  for (int i=2;i<=n;i++) {
    int curi=prev+prev2;
    prev2=prev;
    prev=curi;
  }
  cout<<prev;
}

    // Time complexity = O(N)
    // Space Complexity = O(1)
