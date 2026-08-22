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

        int res = 0;

        for (int i = 0; i < s.length(); i++) {
            if (valores[s[i]] < valores[s[i + 1]])
                res -= valores[s[i]];
            else
                res += valores[s[i]];
        }

        return res;

    }
};