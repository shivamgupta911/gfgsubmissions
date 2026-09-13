class Solution {
  public:
    long long sumOfDivisors(long long n) {
        // Code here
        
        long long answer = 0;
        
        for(long long i=1;i<=n;i++){
            
               answer = answer + i*(n/i);
           
            
        }
        
        
        return answer;
    }
};