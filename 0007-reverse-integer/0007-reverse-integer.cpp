class Solution {
public:
    int reverse(int x) {

        int rev = 0;
        int digit;
        int org = x;

        while( org != 0){

            digit = org%10;
            org = org / 10;

            // Check positive overflow
            if(rev > INT_MAX / 10 || 
               (rev == INT_MAX / 10 && digit > 7)) {
                return 0;
            }

            // Check negative overflow
            if(rev < INT_MIN / 10 || 
               (rev == INT_MIN / 10 && digit < -8)) {
                return 0;
            }

            rev = rev * 10 + digit;
        }

        return rev;
        
    }
};