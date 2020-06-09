class Solution {
public:
    int j=0;
    bool isSubsequence(string s, string t) {
        for(int i=0;i<t.size();i++)
        {
            if(s[j]==t[i])
                j++;
        }
        
        int n=s.length();
        if(j==n)
            return true;
        else return false;
        
    }
};
