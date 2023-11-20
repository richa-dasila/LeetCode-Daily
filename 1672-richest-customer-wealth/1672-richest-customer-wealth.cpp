class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi = 0;
        for(auto it:accounts) {
            int sum = 0;
          for(auto i:it) {
              sum+=i;
          }
          maxi = max(maxi,sum);
        }
        return maxi;
    }
};