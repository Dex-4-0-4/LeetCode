class Solution {
public:
    int reverse(int x) {
        long s=0;
        while(x!=0){
            int rem = x%10;
            x/=10;
            s = s*10+rem;
        }
        if(s>INT_MAX || s<INT_MIN)
        return 0;
        else
        return s;
        
    }
};