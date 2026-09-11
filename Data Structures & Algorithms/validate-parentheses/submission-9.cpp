class Solution {
public:
    bool isValid(string s) {
        std::unordered_map<char,char> test{{')','('},
        {']','['},
        {'}','{'}};
        std::stack<char> zhop;

        if(s.size()%2 == 1){
            return false;
        }

        for(char str : s){
            if(test.count(str)){
                if(zhop.empty() || zhop.top() != test[str] ){
                    return false;
                }else{
                    zhop.pop();
                }

            }else{
                
                zhop.push(str);
            }
        }
        
        if(zhop.empty()){
            return true;
        }
        
        return false;
        
        
    }
};
