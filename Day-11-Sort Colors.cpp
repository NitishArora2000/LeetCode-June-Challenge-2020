class Solution {
public:
    void sortColors(vector<int>& v) {
        int p0 = 0;
        int p1 = v.size() - 1;
        int p2 = v.size() - 1;
        while (p0 < p2) {
            if (v[p0] == 0)
                p0++;
            else if (v[p0] == 1) {
                if (p0 < p1) {
                    swap(v[p0], v[p1]);
                    p1--;
                }
                else
                    p0++;
            }
            else {
                swap(v[p0], v[p2]);
                p2--;
            if (p1 > p2)
                   p1 = p2;
            }
        }
    }
        
    
};
