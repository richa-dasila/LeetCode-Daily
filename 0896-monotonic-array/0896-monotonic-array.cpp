class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        // two variables: diff and direction
        //if dir>0, pos ,<0 neg, ==0 undefined
        int dir = 0,diff=0, n = nums.size();
        for(int i = 1; i < n; i++){
            diff=nums[i]-nums[i-1];
            if(diff<0) {
                if(dir ==1)return false;
                dir = -1; 
            } else if(diff>0) {
                if(dir == -1)return false;
                dir=1;
            }
        }
        return true;
    }
};