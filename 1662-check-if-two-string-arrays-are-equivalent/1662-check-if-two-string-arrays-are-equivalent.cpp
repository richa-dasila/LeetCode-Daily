class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string one="",two="";
        for(auto ch: word1)one+=ch;
        for(auto ch: word2)two+=ch;

        return one==two;
    }
    
};