class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s  = 0;
        int e = 0;
        while(e<nums.size()){
            if(nums[s]!= 0){
                s++;
                e++;
            }else if(nums[s] == 0){
                if(nums[e] == 0){
                    e++;
                }else{
                    swap(nums[s] , nums[e]);
                    s++;
                    e++;
                }

            }
        }
        
    }
};