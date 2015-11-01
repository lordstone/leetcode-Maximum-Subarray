class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 0 ) return 0;
        int ptr = 0;
        vector<int> sum(nums.size(),0);
        //sum[0] = nums[0] > 0? nums[0]:0;
        sum[0] = nums[0];
        for(int i = 1; i < nums.size(); i ++){
            if(nums[i] >= 0){
                sum[i] = sum[i-1] > 0? sum[i-1] + nums[i]:nums[i];
            }else{
                sum[i] = sum[i-1] > 0? sum[i-1] + nums[i]:nums[i];
            }
            if(sum[i] > sum[ptr]) ptr = i;
        }//end for
        return sum[ptr];
    }
};
