class Solution {
  public:
    int largestPrimeFactor(int n) {
        // code here
        int ans = 1; 
        for(int i=2;i*i<=n;i++){
          while(n%i == 0 ){
              ans = i;
              n = n/i; //imp step
          }
        }
        if(n>1){
            ans = n;
        }
        
        return ans;
    }
};