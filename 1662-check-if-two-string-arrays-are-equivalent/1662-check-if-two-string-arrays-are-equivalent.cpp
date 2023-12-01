class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
       //two pointer
        //w1=["ab","c"] w2=["a","bc"]
        int m = word1.size(), n = word2.size();
        int w1 = 0, w2 = 0;//pointer to word
        int s1 =0, s2 = 0;//pointing to individual string
      
        while(w1<m && w2<n) {
            if(word1[w1][s1++] != word2[w2][s2++]) return false;
            if(s1 == word1[w1].size()) {
                w1++;
                s1=0;
            }
            if(s2 == word2[w2].size()) {
                w2++;
                s2=0;
            }
        }
        return w1 == word1.size() && w2==word2.size();
    }
    
};