class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        

        long int num=x , rev = 0, rem = 0;
        
	
        while(num!= 0)
        {
            
            rem = num%10;
            cout<<rem<<" ";
            
            rev = rev*10 + rem;
            cout<<rev<<" ";
            num=num/10;
            cout<<num;
        }
        
        cout<<x<<" "<<rev;
	
        if(x == rev)
            return true;  
        else
            return false;
    }
};
