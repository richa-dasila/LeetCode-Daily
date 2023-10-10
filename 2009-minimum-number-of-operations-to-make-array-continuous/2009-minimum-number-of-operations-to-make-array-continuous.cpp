class Solution {
public:
    int minOperations(vector<int>& nums) {
        // sliding window
        int n = nums.size(),ans = n;
        
        sort(nums.begin(),nums.end());
        set<int> st(nums.begin(), nums.end());
        vector<int> temp(st.begin(),st.end());
        
        int j = 0;
        for(int i = 0; i < temp.size(); i++) {
            while(j<temp.size() && temp[j]<= temp[i]+n-1)j++;
            //already sorted
            int sorted = j - i;
             ans = min(ans,n-sorted);
        }
        return ans;
    }
};