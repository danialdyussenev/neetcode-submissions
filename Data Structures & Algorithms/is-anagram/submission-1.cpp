class Solution {
public:
    bool isAnagram(string s, string t) {
        int count {};
        if(s.length() != t.length()){
            return false;
        }
        for(std::size_t i{};i<s.length();++i){
            
            for(std::size_t j{};j<t.length();++j){
                if(s[i] == t[j]){
                    ++count;
                    
                    t.erase(j,1);
                    break;
                    
                }
            }
        }
        if(count == static_cast<int>(s.length())){
            return true;
        }
        else{
            return false;
        }
        
    }
};
