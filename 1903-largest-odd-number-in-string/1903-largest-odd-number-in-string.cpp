class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        for(int j = n-1; j>=0; j--) {
            if((num[j]-'0')%2 != 0) return num.substr(0,j+1);
        }
        return "";
    }
};