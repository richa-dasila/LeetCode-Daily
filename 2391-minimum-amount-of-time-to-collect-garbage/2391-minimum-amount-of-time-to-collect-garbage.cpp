class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int ans=0;

        int m = garbage.size();
        vector<int> pref(travel.size()+1,0);
        pref[1]=travel[0];
        for(int i = 1; i < travel.size(); i++) {
            pref[i+1]= pref[i]+travel[i];
        }
       unordered_map<char,int> lastpos, count;
       for(int i = 0; i < m; i++) {
           string s = garbage[i];
           for(int j = 0; j < s.size(); j++) {
               count[s[j]]++;
               lastpos[s[j]]=i;
           }
       }

        char temp[3]={'G','M','P'};
        for(char c: temp) {
           if(count[c]) ans+= pref[lastpos[c]]+count[c];
        }
        
        return ans;
    }
};