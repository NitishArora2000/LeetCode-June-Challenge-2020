class Solution {
public:
    int searchInsert(vector<int>& v, int target) {
        bool ans=false;
        int index;
        for(int i=0;i<v.size();i++)
        {
            if(target==v[i]){
                ans=true;
                index=i;
            }
        }
        
        if(ans)
            return index;
        else
        {
            int i=0;
            for(;i<v.size();i++)
            {
                if(v[i]>target)
                {
                    index=i;
                    break;
                }
            }
            return (i==v.size())?v.size():index;
        }
    }
};
