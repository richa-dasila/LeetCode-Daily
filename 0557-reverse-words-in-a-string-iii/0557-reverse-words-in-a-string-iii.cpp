class Solution {
public:
    string reverseWords(string s) {
    string temp="";
    string ans;
    int n = s.size();
    if(n==1)return s;
    
    for(int i = 0; i < n; i++) {
        if(s[i] ==' ') {
            reverse(temp.begin(), temp.end());
            ans+=temp;
            ans+=" ";
            temp="";
        } else {
            temp+=s[i];
        }
    }
    reverse(temp.begin(), temp.end());
    ans+=temp;
    return ans;  
    }
};