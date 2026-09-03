class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::vector<int> result;
        std::unordered_map<int,int> m;

        for(std::size_t i{};i < nums.size(); ++i){
            m[nums[i]]++;
        }

        std::vector<pair<int, int>> sorted_freq(m.begin(), m.end());
        std::sort(sorted_freq.begin(), sorted_freq.end(), [](const pair<int,int>& a, const pair<int,int>& b) {
            return a.second > b.second;
        });

        for(int i = 0; i < k; ++i){
            result.push_back(sorted_freq[i].first);
        }

        return result;
    }        
};