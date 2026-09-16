class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        
        int n = numbers.size();
        int right = n -1;
        

        while(right > left){
            
            if(numbers[right] + numbers[left] < target){
                ++left;
                continue;
            }
            else if(numbers[right] + numbers[left] > target){
                --right;
                continue;
            }
            else{
                return { left+1, right + 1};
            }

        }
        
        return {0,0};
    }
};
