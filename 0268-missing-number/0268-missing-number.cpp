class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int ans;
        for(int i=0;i<len;i++){
            while(nums[i]!=i){
                if(nums[i]>len-1)
                    break;
                swap(nums[i],nums[nums[i]]);
            }
        }
        for(int i=0;i<len;i++){
            if(nums[i]!=i){
                ans =  i;
                break;
            }
        }
        return ans;
    }
};