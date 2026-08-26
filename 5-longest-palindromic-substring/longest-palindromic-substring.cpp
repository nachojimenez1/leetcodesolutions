class Solution {
public:
    string longestPalindrome(string s) {
        
        std::string res = "";
        res += s[0];
        int cursor = 0;
        
        while(cursor < s.length()-1){
            std::string impar = expandir(cursor, cursor, s);
            if(impar.length() > res.length()){
                res = impar;
            }
            std::string par = expandir(cursor, cursor+1, s);
            if(par.length() > res.length()){
                res = par;
            }
            cursor++;
        }
        return res;
    }

    std::string expandir(int i, int j, std::string s){
        std::string izq = "";
        std::string der = "";

        while(i>=0 && j<s.length() && s[i] == s[j]){
            if(i == j){
                izq += s[i];
            }else{
                izq = s[i] + izq;
                der += s[i];
            }
            i--;
            j++;    
        }

        return izq + der;
        
    }    
};