class Solution {
public:
    bool isPalindrome(int x) {

        long long rev = 0 ;
        int digit;
        int n = x;

        while( n > 0){
            digit = n % 10;
            rev = rev * 10 + digit;
            n =n /10;
        }

        if(rev == x){
            return true;
        }else{
            return false;
        }
        
    } 
};