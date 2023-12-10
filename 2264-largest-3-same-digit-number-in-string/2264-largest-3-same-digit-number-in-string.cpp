class Solution {
public:
    string largestGoodInteger(string s) {
        int x = INT_MIN;
        int n = s.size(), i = 0, j = 0;
        while(j<n) {
            if(s[i] == s[j]) {
                if(j-i+1>=3)x=max(x,s[j]-'0');
            } else {
                i=j;
            }
            j++;
        }
        if(x==INT_MIN) return"";
        return string(3,x+'0');
        // return to_string(x)+to_string(x)+to_string(x);
    }
};