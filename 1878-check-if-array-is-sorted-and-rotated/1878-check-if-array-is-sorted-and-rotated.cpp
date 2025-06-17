class Solution {
public:
    bool check(vector<int>& nums) {

        int N = nums.size();
        int index=0;
        int c=0;
        for(int i=1;i<N;i++){
            if(nums[i]>=nums[((i-1+N)%N)] && nums[i]>nums[(i+1)%N]){
                index = i;
                break;
            }
        }
        reverse(nums.begin(),nums.begin()+index+1);
        reverse(nums.begin()+index+1,nums.end());
        for(int i=1;i<N;i++){
            if(nums[i]<=nums[i-1]){
                c++;
            }
            else
            break;
        }
        if(c==N-1)
        return true;
        else 
        return false;
        
    }
};