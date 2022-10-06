class Solution {
public:
  void findCombination_2 (int ind, int target, vector<int> &arr,  vector<vector<int>> &ans, vector<int> &ds) {

      if(target==0) {
        ans.push_back(ds);
        return ;
      }

    for (int i=ind;i<arr.size();i++) {
      if(i>ind && arr[i]==arr[i-1]) continue;
      // Pickup element
      if(arr[ind]>target) break;
      ds.push_back(arr[ind]);
      findCombination(ind+1,target-arr[ind],arr,ans,ds);
      ds.pop_back();

    }
  }
public:
  vector<vector<int>> combinationSum_2(vector<int> &candidates, int target){
    sort(candidates.begin(),candidates.end());
    vector<vector<int>> ans;
    vector<int> ds;
    findCombination_2(0,target,candidates,and,ds);
    return ans;
  }
};
