class Solution {
public:
using Tickets = unordered_map<string, vector<pair<string, bool>>>;
    
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        count = tickets.size() + 1;
        stops.resize(count);
        
        for (auto t: tickets) {
            all[t[0]].push_back({t[1], false});
        }
        for (auto &t: all) {
            auto &to = t.second;
            sort(to.begin(), to.end(), 
                [](auto &t1, auto &t2) { return t1.first < t2.first; } );
        }
        go("JFK");
        
        return stops;
    }
    
    void go(const string &from) {
        auto &to = all[from];
        for (auto &stop: to) {
            if (stop.second) { continue; }
            stop.second = true;
            go(stop.first);
        }
        stops[--count] = from;
    }
    
    
private:
    Tickets all;
    vector<string> stops;
    int count;
};
