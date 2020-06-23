class Solution {
public:
    string getPermutation(int n, int k) {
        int cnt=0;
        string s;
        for(int i=1;i<=n;i++)
        {
         s+=std::to_string(i);
        }
        //cout<<s;
        do
        {
            cnt++;
            if(cnt==k)
                break;
        }while(next_permutation(s.begin(),s.end()));
        
        return s;
        
    }
};
