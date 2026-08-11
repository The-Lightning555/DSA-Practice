class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0;i<nums.size();i++){
            if(i ==0){
                ans.push_back(nums[i]);
            }
            else if(nums[i]!=nums[i-1]){
                ans.push_back(nums[i]);
            }
        }
        nums.erase(nums.begin(),nums.end());
        for(int i = 0;i<ans.size();i++){
            nums.push_back(ans[i]);
        }
        return nums.size();
    }
};