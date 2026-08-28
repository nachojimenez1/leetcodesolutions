class Solution {
public:
    int maxJump(vector<int>& stones) {
        int max = 0;
        int jump;
        int par1 = 0;
        int par2 = 1;
        int impar1 = 0;
        int impar2 = 2;

        while(par2 < stones.size() || impar2 < stones.size()){
            if(par2 < stones.size()){
                jump = stones[par2] - stones[par1];
                if(jump > max){
                    max = jump;
                }
                par1 = par2;
                par2 += 2;
            }
            if(impar2 < stones.size()){
                jump = stones[impar2] - stones[impar1];
                if(jump > max){
                    max = jump;
                }
                impar1 = impar2;
                impar2 += 2;
            }          
        }
        return max;

    }
};