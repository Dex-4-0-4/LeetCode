class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i=0;
        int j=0;
        int k=0;
        int m=0;
        int N = nums.size();
        while(i<=j){
            while(j<N && nums[j]==nums[i]){
                j++;
            }
            k++;
            nums[m]=nums[i];
            m++;
            i=j;
            if(i==N)
            break;
        }
        return k;
    }
};