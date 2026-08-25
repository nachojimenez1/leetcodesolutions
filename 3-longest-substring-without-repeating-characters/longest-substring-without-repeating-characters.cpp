class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        std::string res = "";
            int max = 0;
            int pos;
            for(int i = 0; i<s.length(); i++){
                pos = res.find(s[i]);
                if(pos != std::string::npos){
                    if(res.length() > max){
                        max = res.length();
                    }
                    res.erase(0,pos+1);
                }
                res += s[i];
                
            }
            if(res.length() > max){
                max = res.length();
            }
            return max;
        
    }
};