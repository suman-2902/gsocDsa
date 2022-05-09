class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        

        long int num , rev = 0, rem = 0;
        
	
        while(num != 0)
        {
            rem = num%10;
            rev = rev*10 + rem;
            num/= 10;
        }
        
	
        if(num == rev)
            return true;  
        else
            return false;
    }
};
