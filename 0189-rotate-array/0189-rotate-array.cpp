class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int N = nums.size();
        vector <int> hash(N);

        for(int i=0;i<N;i++){
            int m = (N+i+k)%N;
            hash[m] = nums[i];
        }
        swap(hash,nums);
        
    }
};