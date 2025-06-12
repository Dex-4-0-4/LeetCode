class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        int len = nums.size();
        vector <int> ans;

        for(int i=0;i<len;i++){
            while(nums[i]!=i+1){
                if(nums[i]==nums[nums[i]-1])
                    break;
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        for(int i=0;i<len;i++){
            if(nums[i]!=i+1){
                ans.push_back(i+1);
            }
        }
        return ans;

        
    }
};