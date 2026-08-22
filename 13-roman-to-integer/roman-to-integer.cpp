class Solution {
public:
    int romanToInt(string s) {
        int valores[256] = {};
        valores['I'] = 1;
        valores['V'] = 5;
        valores['X'] = 10;
        valores['L'] = 50;
        valores['C'] = 100;
        valores['D'] = 500;
        valores['M'] = 1000;

        int primero = valores[s[s.length()-1]];
        int res = primero;
        int segundo;
        for(int i = s.length()-2; i >= 0; i--){
            segundo = valores[s[i]];
            
            if(segundo >= primero){
                res += segundo;
            }
            else{
                res -= segundo;    
            }
            
            primero = segundo;
            
        }
        return res;

    }
};