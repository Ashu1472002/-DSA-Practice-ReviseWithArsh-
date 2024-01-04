class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
        unordered_map<string, vector<int>> access;
        for (auto& e : access_times) {
            auto name = e[0];
            auto s = e[1];

            //Convert timestamp string into integer and then convert it into the minutes
            int t = stoi(s.substr(0, 2)) * 60 + stoi(s.substr(2, 2));
            access[name].emplace_back(t);
        }
        vector<string> ans;
        for (auto& [name, ts] : access) {
          
            //sort the vector according to  timestamp
            sort(ts.begin(), ts.end());
            for (int i = 2; i < ts.size(); ++i) {
                if (ts[i] - ts[i - 2] < 60) {
                    ans.emplace_back(name);
                    break;
                }
            }
        }
        return ans;
    }
};
