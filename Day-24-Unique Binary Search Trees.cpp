//For more about the formula used refer to Catalan Numbers.


class Solution {
public:
    map<int,int> map;
    int numTrees(int n) {
        if(n==0||n==1)
            return 1;
        //map.find(n);
        if(map.find(n)!=map.end())
            return map[n];
        int count=0;
        for(int i=1;i<=n;i++)
        {
            count+=numTrees(i-1)*numTrees(n-i);
        }
        
        map.insert(pair<int,int>(n,count));
        return map[n];
        
    }
};
