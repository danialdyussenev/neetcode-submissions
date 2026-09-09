class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest{};
        
        std::unordered_set<int> a(nums.begin(),nums.end());
        
        for(auto numb : nums){
            if(!a.count(numb-1)){
                int length{1};
                               
                while(a.count(numb + length)){
                    ++length;
                    
                }
                longest = std::max(longest,length);
            }
            
        }
        
        return longest;
    }
};