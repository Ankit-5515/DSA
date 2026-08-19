class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        vector <int> vec(accounts.size());
        

        for(int i =0 ; i< accounts.size(); i++){

            int sum =0;
            for(int j =0 ; j < accounts[i].size(); j++){

                sum = sum + accounts[i][j];  
            }
            vec[i] = sum;
        }

        int max = 0;

        for(int k =0; k<accounts.size(); k++){
            if(vec[k] > max){
                max = vec[k];
            }

        }
        return max;
    }
};