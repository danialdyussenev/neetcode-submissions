class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        
        std::vector<int> output;
        int n = numbers.size();
        int right = n -1;
        

        while(right > left){
            
            if(numbers[right] + numbers[left] < target){
                ++left;
                continue;
            }
            if(numbers[right] + numbers[left] > target){
                --right;
                continue;
            }
            if(numbers[right] + numbers[left] == target){
                return { left+1, right + 1};
            }

        }
        
        return {0,0};
    }
};
