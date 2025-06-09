class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0)
        return false;
        else{
        long s=0;
        int bk = x;
        while(bk!=0){
            int rem = bk%10;
            bk/=10;
            s = s*10+rem;
        }
        if(s==x)
        return true;
        else
        return false;
        }
        
    }
};