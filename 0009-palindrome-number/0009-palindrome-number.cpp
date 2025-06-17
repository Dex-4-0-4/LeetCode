class Solution {
public:
    bool isPalindrome(int x) {
        long s=0;
        if(x<0)
        return false;
        else{
            int bk=x;
            while(bk!=0){
                int rem = bk%10;
                bk /=10;
                s = s*10 + rem;
            }
            if(s==x)
            return true;
            else
            return false;
            
        }

        
    }
};