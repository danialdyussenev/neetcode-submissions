class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        std::unordered_map<std::string,std::vector<std::string>> m;
        std::vector<std::string> temp(strs);
        std::vector<std::vector<std::string>> result;
        
        for(std::size_t i{}; i < strs.size(); ++i){
            std::sort(strs[i].begin(),strs[i].end());
            m[strs[i]].push_back(temp[i]);  
        }
        std::vector<std::pair<std::string,std::vector<std::string>>> alf(m.begin(),m.end());

        for(std::size_t i{};i < alf.size();++i){
            result.push_back(std::vector<std::string>(alf[i].second));
            
            

            
        }
        
        
        return result;

    }
};
