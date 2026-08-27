class Solution {
public:
    string longestPalindrome(string s) {
        
        int cursor = 0;
        int i;
        int j;
        int imax = 0;
        int jmax = 1;
        
        while(cursor < s.length()-1){
            i = cursor;
            j = cursor;
            int impar = expandir(i, j, s);
            if(impar > jmax - imax){
                imax = i + 1;
                jmax = j;
            }
            i = cursor;
            j = cursor + 1;
            int par = expandir(i, j, s);
            if(par > jmax - imax){
                imax = i + 1;
                jmax = j;
            }
            cursor++;
        }
        return s.substr(imax, jmax-imax);
    }

    int expandir(int& i, int& j, std::string& s){

        while(i>=0 && j<s.length() && s[i] == s[j]){
            i--;
            j++;    
        }

        return j-i-1;
        
    } 
};