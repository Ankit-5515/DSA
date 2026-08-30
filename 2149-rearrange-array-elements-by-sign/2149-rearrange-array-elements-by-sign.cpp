class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        vector <int> vec1;
        vector <int> vec2;
        vector <int> ans;
        int j =0, k=0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){
                vec1.push_back(nums[i]);
            }else{
                vec2.push_back(nums[i]);
            }
        }

        for(int i = 0; i < nums.size(); i++){
            if(i % 2 == 0){
                ans.push_back(vec1[j]);
                j++;
            }else{
                ans.push_back(vec2[k]);
                k++;
            }
        }

        return ans; 

        
    }
};