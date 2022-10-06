#include <bits/stdc++.h>
using namespace std;

// Recurssive approach = Using Memoization [Top-Down approach]

int recur(int ind,vector <int> &heights,vector <int> &dp) {
  if (ind==0) return 0;

  if (dp[ind]!=-1) return dp[ind];

  int left=recur(ind-1,heights,dp) + abs(heights[ind]-heights[ind-1]);
  int right=INT_MAX;
  if (ind>1) right=recur(ind-2,heights,dp) + abs(heights[ind]-heights[ind-2]);

  return dp[ind]=min(left,right);
}


int frogjump (int n,vector <int> &heights) {
  vector <int> dp(n+1,-1);
  return recur(n-1,heights,dp);
}

int main () {
  // https://bit.ly/3JPcoOx
  // Above link direct to main function
}
    // Time complexit = O(N)
    // Space Complexity = O(N) + O(N)

// Tabulation approach = Using Bottom-Up approach

int frogjump (int n,vector<int> &heights) {
  vector <int> dp(n,0);
  dp[0]=0;
  for (int i=1;i<n;i++){
    int fs = dp[i-1]+abs(heights[i]-heights[i-1]);
    int ss = INT_MAX;
    if(i>1) ss = dp[i-2]+abs(heights[i]-heights[i-2]);
    dp[i]=min(fs,ss);
  }
  return dp[n-1];
}

    // Time Complexity = O(N)
    // Space Complexity = O(N)

// Tabulation with SPACE OPTIMIZATION

int frogjump(int n,vector <int> &heights) {
  int prev = 0;
  int prev2 = 0;
  for (int i=1;i<n;i++) {
    int fs = prev + abs(heights[i]-heights[i-1]);
    int ss =INT_MAX;
    if(i>1) ss = prev2 + abs(heights[i]-heights[i-2]);

    int curri = min(fs,ss);
    prev2=prev;
    prev=curri;
  }
  return prev;
}
