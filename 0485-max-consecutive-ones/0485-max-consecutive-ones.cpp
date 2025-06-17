class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int N = nums.size();
        int summ=0;
        int i =0;
        while(i<N){
            if(nums[i]==1){
                int j=i;
                while(j<N && nums[j]==1){
                    j++;
                }
                int s=j-i;
                summ = max(summ,s);
                i=j;
            }
            else
            i++;
        }
        return summ;
        
    }
};