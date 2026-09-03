class Solution {
public:
    bool uniformArray(vector<int>& nums1) {

        int mn = nums1[0];

        for(int i = 1; i < nums1.size(); i++) {
            mn = min(mn, nums1[i]);
        }

        for(int i = 0; i < nums1.size(); i++) {

            // Different parity from minimum
            if((nums1[i] % 2) != (mn % 2)) {

                // We need to change its parity.
                // Subtracting an odd number changes parity.
                if(mn % 2 == 0) {
                    return false;
                }
            }
        }

        return true;
    }
}; 