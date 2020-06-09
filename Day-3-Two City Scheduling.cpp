class Solution {
public:
    static bool cmp(vector <int> x, vector <int> y){
      return abs(x[0] - x[1]) > abs(y[0] - y[1]);
        }
    int twoCitySchedCost(vector<vector<int>>& ar) {
        int n=ar.size();
        int a=n/2;
        int b=n/2;
        int ans=0;
        sort(ar.begin(),ar.end(),cmp);
        
        for(int i = 0; i < n; i++){
         if(b == 0 || (ar[i][0] <= ar[i][1] && a > 0)){
            a--;
            //cout << a << " " << ar[i][0] << endl;
            ans += ar[i][0];
         } else {
           // cout << ar[i][1] << endl;
            b--;
            ans += ar[i][1];
         }
      }
      return ans;
        
    }
};
