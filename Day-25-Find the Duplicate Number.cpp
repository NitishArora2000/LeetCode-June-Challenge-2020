class Solution {
public:
    int findDuplicate(vector<int>& v) {
        int ans;
        for(int i=0;i<v.size();i++)
        {
            int index=abs(v[i])-1;
            //cout<<index<<endl;
            if(v[index]<0){
                ans=index+1; break;
            }
            v[index]=-(v[index]);
        }
        return ans;
    }
};
