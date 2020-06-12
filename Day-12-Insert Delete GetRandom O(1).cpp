
class RandomizedSet {
    unordered_map<int, int> Map; 
    vector <int> arr; 
    int size=0;
public:
    
    RandomizedSet() {
        
        
         }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int x) {
        if(Map.find(x) != Map.end()) 
            return false; 
              
        Map[x]=size++;                
        arr.push_back(x);              
        return true;
        
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int x) {
        if(Map.find(x) == Map.end()) 
            return false; 
        
              
        int idx=Map[x];               
        int last=arr.back();          
        arr[idx]=last;                
        arr.pop_back();               
        --size;
        Map[last]=idx;                
        Map.erase(x);                 
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
      //  srand (time(NULL)); 
        return arr[rand()%size];; 
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
