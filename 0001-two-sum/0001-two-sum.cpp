class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> vec1;
        
        int i = 0, j = 1;
        
        while(j < nums.size()){

            
            if(nums[i] + nums[j] == target){
                vec1.push_back(i);
                vec1.push_back(j);
                break; 
                
            }else{
                j++;
            }
            if( j == nums.size()){
                i++;
                j = i + 1;
            }
        }
        return vec1;
    }
};