class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int len = nums.size();
        set <int> s;
        vector <int> vec;
        for(int i=0;i<len;i++){
            while(nums[i]!=i+1){
                if(nums[i]==nums[nums[i]-1])
                break;
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        for(int i=0;i<len;i++){
            if(nums[i]!=i+1){
                s.emplace(nums[i]);
            }
        }
        for(int i:s){
            vec.push_back(i);
        }
        return vec;
        
    }
};