class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1){
            return s;
        }
        string res = "";
        int sum = 2*(numRows-1);

        for(int i=0; i<numRows; i++){
            for(int j=i; j<s.length(); j+=sum){
                res += s[j];
                int diagonal = j + sum - 2*i;
                if(diagonal != j && diagonal != j+sum && diagonal<s.length()){
                    res += s[diagonal];
                }
            } 
        }
        return res;
    }
};