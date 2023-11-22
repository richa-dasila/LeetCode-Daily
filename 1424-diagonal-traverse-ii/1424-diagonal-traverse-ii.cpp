class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        int m = nums.size();
        map<int,vector<int>> mp;
        vector<int> ans;

        //O(m*n)
        for(int i = m-1; i >= 0; i--) {
            int n=nums[i].size();
            for(int j = 0; j < n; j++) {
                mp[i+j].push_back(nums[i][j]);
            }
        }
        for(auto it: mp) {
            for(auto num:it.second) {
                ans.push_back(num);
            }
        }
        //O(m(n+nlogn) ==O(mnlogn)), not good
        // for(auto it :mp) {
        //     vector<int> temp;
        //     for(auto i : it.second) {
        //         temp.push_back(i);
        //     }
        //     ans.insert(ans.end(),temp.rbegin(),temp.rend());
        // }
        return ans;
    }
};