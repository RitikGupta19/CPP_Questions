
class Solution{
public: 
    int fact(int num){
        if(num == 0)
            return 1;
        return num * fact(num - 1);
    }
    int rank(string S){
        // code here
        int n = S.length();
        int mul = fact(n);
        int count[256] = {0};
        int rank = 0;
        // character count
        for(int i = 0; i < n; i++){
            count[S[i]]++;
            if(count[S[i]] > 1){
                return 0;
            }
        }
        // cumilative character count
        for(int i = 1; i < 256; i++){
            count[i] = count[i] + count[i - 1];
        }
        // calculating rank
        for(int i = 0; i < n; i++){
            mul = mul / (n - i);
            rank = rank + count[S[i] - 1] * mul;
            for(int j = S[i]; j < 256; j++){
                count[j]--;
            }
        }
        return (rank + 1)%1000003;
    }
};
