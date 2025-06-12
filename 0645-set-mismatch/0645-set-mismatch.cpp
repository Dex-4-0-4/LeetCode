class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        int len = nums.size();
        vector <int> vec;

        for(int i=0;i<len;i++){

            while(nums[i]!=i+1){

                if(nums[i]==nums[nums[i]-1]){
                    break;
                }
                swap(nums[i],nums[nums[i]-1]);
            }
        }

        for(int i=0;i<len;i++){
            if(nums[i]!=i+1){
                vec.push_back(nums[i]);
                vec.push_back(i+1);
                break;
            }
        }
        return vec;



        
    }
};