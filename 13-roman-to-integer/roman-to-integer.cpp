class Solution {
public:
    int romanToInt(string s) {
        std::map<char,int> mapa = {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        int primero = mapa[s.at(s.length()-1)];
        int res = primero;
        int segundo;
        for(int i = s.length()-2; i >= 0; i--){
            segundo = mapa[s.at(i)];
            
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