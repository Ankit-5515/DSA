class Solution {
public:
    vector<int> twoSum(vector<int>& num, int tar) {

        vector<int> ans;
        int i=0 , j=num.size()-1;

        for( i=0; i<num.size(); i++){

            while( i < j){

                if(num[i] + num[j] == tar){
                    ans.push_back(i+1);
                    ans.push_back(j+1);
                    return ans;
                }else if( num[i] + num[j] < tar){
                    i++;
                }
                else{
                    j--;
                }
            }
        }
        return ans;        
    }
};