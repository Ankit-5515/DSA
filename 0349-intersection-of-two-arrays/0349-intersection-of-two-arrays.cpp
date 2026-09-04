class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        vector<int> vec1;

        for(int i=0; i < nums1.size(); i++){

            for(int j=0 ; j < nums2.size(); j++){

                if(nums1[i] == nums2[j]){
                    if(find(vec1.begin(), vec1.end(), nums1[i]) == vec1.end()){
                        vec1.push_back(nums1[i]);
                    }
                    
                }

            }

        }
        return vec1;   
        
    }
};