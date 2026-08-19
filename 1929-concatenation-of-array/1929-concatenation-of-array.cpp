class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        vector<int> vec1((nums.size())*2);

        for(int i =0; i < nums.size() ; i++){
            vec1[i]=nums[i];
            vec1[i + nums.size()] = nums[i];  
        }
        return vec1;
        
    }
};