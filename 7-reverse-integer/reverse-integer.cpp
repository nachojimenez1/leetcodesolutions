class Solution {
public:
    int reverse(int x) {
        int res = 0;
        int der;
        while(x != 0){
            der = x % 10;
            x /= 10;
            if (res > INT_MAX / 10 ||
                (res == INT_MAX / 10 && der > INT_MAX % 10)) {
                return 0;
            }

            if (res < INT_MIN / 10 ||
                (res == INT_MIN / 10 && der < INT_MIN % 10)) {
                return 0;
            }            
            res = res * 10 + der;
        }
        return res;       
    }
};