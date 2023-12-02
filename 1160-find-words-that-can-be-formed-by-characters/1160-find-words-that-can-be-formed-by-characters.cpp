class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int n = words.size();
        int ans = 0;

        vector<int> count(26,0);
        for(int i = 0; i < chars.size();i++) {
            count[chars[i]-'a']++;
        }

        for(int i = 0; i < words.size(); i++) {
            string s = words[i];
            bool flag = false;
            vector<int> temp(26,0);
            for(int j = 0; j < s.size(); j++) {
                temp[s[j] -'a']++;
            }
            for(int j = 0; j < s.size(); j++) {
                if(temp[s[j]-'a'] > count[s[j]-'a']) {
                    flag = true;
                    break;
                }
            }
            if(!flag)ans+=words[i].size();
        }
        return ans;
    }
};