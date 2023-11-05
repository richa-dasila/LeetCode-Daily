class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int maxi = *max_element(arr.begin(),arr.end());
        int curr=arr[0],win=0,n=arr.size();
        // int opp=0;

        //x=compe. always between curr and opponenbr
        for(int i = 1; i < n; i++) {
           int opp=arr[i];
            if(curr > opp) {
                win++;
            } else {
                curr=opp;
                win=1;
            }
            if(win==k)return curr;
        }
        // return win==k?curr:*max_element(arr,begin(),arr.end())   
        return curr;
    }
};