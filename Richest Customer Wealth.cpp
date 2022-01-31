class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int r = accounts.size();
        int c = accounts[0].size();
        
        int res = 0;
        int sum = 0;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                sum += accounts[i][j];
            }
            res = max(res,sum);
            sum = 0;
        }
        return res;
    }
};