class Solution {
public:
    #include<vector>
    vector<int> largestDivisibleSubset(vector<int>& ar) {
    if(ar.size()==0)
        return ar;
    vector<int> divcount(ar.size(),1);
    vector<int> index(ar.size(),-1);
    int max_index=0;


    sort(ar.begin(),ar.end());

    for(int i=1;i<ar.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            if(ar[i]%ar[j]==0&&divcount[i]<divcount[j]+1)
            {
                divcount[i]=divcount[j]+1;
                index[i]=j;
            }
        }
        if(divcount[max_index]<divcount[i])
            max_index=i;
    }

    int k=max_index;
    vector<int> ans;
    while(k>=0)
    {
        ans.insert( ans.begin(),  ar[k] );
        k = index[k];
    }
    //sort(ans.begin(),ans.end());
    return ans;
    }
};
