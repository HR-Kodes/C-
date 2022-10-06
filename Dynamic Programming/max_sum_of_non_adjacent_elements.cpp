#include <bits/stdc++.h>
using namespace std;

// Recurssive way - Memoization - Top:Down appraoch

int f(int ind,vector<int> &nums,vector<int> &dp) {
  if (ind == 0) return nums[ind];
  if (ind < 0) return 0;

  if(dp[ind] != -1) return dp[ind];

  int pick = nums[ind] + f(ind-2,nums,dp);
  int notpick = 0 + f(ind-1,nums,dp);

  return dp[ind]=max(pick,notpick);
}

int max_sum_non_adj(vector<int> &nums) {
  int n = nums.size();
  vector<int>dp(n,-1);
  return f(n-1,nums,dp);
}

    // Time complexity = O(N)
    // Space complexity = O(N) + O(N)


// Tabulation way - Bottom:Up approach

int max_sum_non_adj(vector<int> &nums) {
  int n = nums.size();
  int prev = nums[0];
  int prev2 = 0;
  for (int i = 1 ; i<n ; i++) {
    int take = nums[i];
    if (i>1) take +=prev2;

    int nontake = 0 + prev;

    int curri = max(take , nontake);

    prev2=prev;
    prev=curri;
  }
  return prev;
}

// Tabulation with space optimization
    // Time complexity = O(N)
    // Space Complexity = O(1)
