class Solution {
    void dfs(vector<int>& nums, int target,int idx,int currSum,int &count){
        if(idx == nums.size()){
            if(currSum == target){
                count++;
            }
            return;
        }
        dfs(nums,target,idx+1,currSum+nums[idx],count);
        dfs(nums,target,idx+1,currSum-nums[idx],count);
    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int count = 0;
        dfs(nums,target,0,0,count);
        return count;
    }
};