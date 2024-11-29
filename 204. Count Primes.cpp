class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isPrime(n+1, true);
        int cou = 0;
        for(int i=2; i<n; i++){
            if(isPrime[i]){
                cou++;
            for(int j=i*2; j<n; j+=i){
                isPrime[j] = false;
            }
            }
        } 
        return cou;
    }
};
