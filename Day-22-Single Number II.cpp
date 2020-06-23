class Solution {
public:
    int singleNumber(vector<int>& v) {
     int result = 0;
    int x, sum,i,j;
    for (i = 0; i <32; i++)
    {
      sum = 0;
      x = (1 << i);
      for (j=0; j< v.size(); j++ )
      {
          if (v[j] & x)
            sum++;
      }
      if (sum % 3){
        result |= x;
     
      }
    }

    return result;
                
            
        
        
    }
};
