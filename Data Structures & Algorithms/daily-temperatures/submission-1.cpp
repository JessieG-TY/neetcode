class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(), 0);
        stack<pair<int, int>> days;

        for (int i = 0; i < temperatures.size(); i++){
            int t = temperatures[i];
            while (!days.empty() && t > days.top().first){
                auto day = days.top();
                days.pop();
                res[day.second] = i - day.second;
            }
            days.push({t, i});
        }
        return res;
    }
};
