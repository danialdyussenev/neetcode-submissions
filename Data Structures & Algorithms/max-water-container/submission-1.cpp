class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0; 
        int right = heights.size() - 1;
        int area = right* std::min(heights[left],heights[right]);
        int temp = 0;
        while( right > left){
            if(std::min(heights[left],heights[right]) == heights[left]){
                ++left;
            }else{
                --right;
            }
            temp = std::max(area, (right - left) * std::min(heights[left], heights[right]));
            area = temp; 
            temp = 0;
            
        }
        return area;
        
    }
};
