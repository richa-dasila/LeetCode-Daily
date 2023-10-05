class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         vector<int> ans;
         int n = nums.size();
         int exp = n/3;

        map<int,int> mp;
        for(auto it: nums)mp[it]++;
        for(auto [a,b]:mp) {
            if(b>exp)ans.push_back(a);
        }
        return ans;
    }
};