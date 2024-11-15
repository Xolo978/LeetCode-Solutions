class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s==t){
            return true;
        }
        int ns = s.length();
        int nt = t.length();
        int p=0;
        int q=0;
        while(p<ns && q<nt){
            if(s[p] == t[q]){
                p++;
            }
            q++;
            
        }
        return p == ns;
    }
};
