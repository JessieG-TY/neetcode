class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> car;
        for (int i = 0; i<position.size(); i++){
            car.push_back({position[i], speed[i]});
        }

        sort(car.rbegin(), car.rend());

        vector<double> arrive;
        for (auto& c : car){
            arrive.push_back((double)(target - c.first) / c.second);
            if (arrive.size() >= 2 && arrive.back() <= arrive[arrive.size() - 2]){
                arrive.pop_back();
            }
        }
        return arrive.size();
    }
};
