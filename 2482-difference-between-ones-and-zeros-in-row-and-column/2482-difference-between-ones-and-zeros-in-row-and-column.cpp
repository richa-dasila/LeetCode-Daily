class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size(),n = grid[0].size();
        vector<vector<int>> res(m,vector<int>(n,0));
        
        vector<int> oner(m,0),oc(n,0);//zr(m,0),zc(n,0);
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 1) {
                    oner[i]++;
                    oc[j]++;
                // } else {
                //     zr[i]++;
                //     zc[j]++;
                 }
            }
        }
        // for(auto it: oner)cout<<it<<" ";
        // cout<<endl;
        // for(auto it: oc)cout<<it<<" ";
        // cout<<endl;

        // for(auto it: zr)cout<<it<<" ";
        // cout<<endl;
        // for(auto it: zc)cout<<it<<" ";
        // cout<<endl;
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                res[i][j]=oner[i]+oc[j]-(m-oner[i])-(n-oc[j]);
            }
        }
        return res;
    }
};