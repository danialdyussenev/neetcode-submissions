class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> mappa {};

        for(std::size_t i{};i < nums.size();++i){
            mappa[target - nums[i]] = i;
            
        }
        for(std::size_t i{};i < nums.size();++i){
            if(mappa.count(nums[i]) && mappa[nums[i]]!=i){
                return {static_cast<int>(i),mappa[nums[i]]};
            }
        }
        return {};
    }
};