class Solution {
public:
    int minimumOneBitOperations(int n) {
        //as at each step, the numbers differ by only 1 bit-->Gray code
        // this problem is actually equivalent to finding the index of n in the standard Gray code sequence that starts from 0, since reducing n to 0 is equivalent to converting 0 to n.
        //a>>b = a/2^b
        //n=3
        //algo for generating gray code 'n'
        int ans = n; 
        ans^= ans>>16;
        ans^= ans>>8;
        ans^= ans>>4;
        ans^= ans>>2;
        ans^= ans>>1;
        return ans;
    }
};