class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int c=0;
        int ans;

        for(int i=0;i<=len;i++){
            c=0;
            for(int j=0;j<len;j++){
                if(nums[j]==i){
                    c++;
                    break;
                }
            }
            if(c==0)
            ans = i;
        }
        return ans;
        
    }
};