class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        bool visto[256] = {};
        int max = 0;
        int left = 0;
        int right = 0;

        while(right < s.length()){
            if(visto[s[right]] == false){
                visto[s[right]] = true;
                right++;
            }else{
                if(max < right - left){
                    max = right - left;
                }
                while(visto[s[right]]){
                    visto[s[left]] = false;
                    left++; 
                }
                visto[s[right]] = true;
                right++;
            }
        }
        if(max < right - left){
            max = right - left;
        }
        return max;
        
    }
};