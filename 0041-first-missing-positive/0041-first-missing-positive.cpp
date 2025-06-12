class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        int len = nums.size();
        int ans=len+1;

        for(int i=0;i<len;i++){

            while(nums[i]!=i+1){
                if(nums[i]<=0)
                break;
                else if(nums[i]>len-1)
                break;
                else if(nums[i]==nums[nums[i]-1])
                break;
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        for(int i=0;i<len;i++){
            if(nums[i]!=i+1){
                ans = i+1;
                break;
            }
        }
        return ans;
    }
};