class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int l1 = 0, l2 = 0, s1 = 10001, s2 = 10001; 
        int n  = nums.size();
        
        for(int i = 0; i<n; i++) {
            if(l1 <= nums[i]){
                l2=l1;
                l1 = nums[i];
            } else if(l2 < nums[i]) {
                l2=nums[i];
            }
            if(s1>= nums[i]) {
                s2=s1;
                s1= nums[i];
            } else if(s2 > nums[i]) {
                s2 = nums[i];
            }
        }
        cout<<l1<<" "<<l2<<" "<<s1<<" "<<s2;
        return l1*l2 - s1 * s2;
    }
};