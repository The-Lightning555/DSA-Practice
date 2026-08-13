class Solution {
public:
    
    int singleNumber(vector<int>& nums) {
        // in O(n^2)
        // for(int i = 0;i<nums.size();i++){
        //     bool check = true;
        //     if(nums[i] == 33333){
        //         continue;
        //     }
        //     for(int j = i+1;j<nums.size();j++){
                
        //         if(nums[j] == 33333){
        //             continue;
        //         }else if(nums[j] == nums[i]){
        //             check = false;
        //             nums[j] = 33333;
        //             continue;
        //         }

        //     }
        //     if(check){
        //         return nums[i];
        //     }
        //     nums[i] = 33333;
        // }
        // return 0;
        map<int ,int>a ;
        for(int i = 0;i<nums.size();i++){
            a[nums[i]]++;
        }
        for(auto &[x,y] : a){
            if(a[x]== 1){
                return x;
            }
        }
        return 0 ;
    }
};