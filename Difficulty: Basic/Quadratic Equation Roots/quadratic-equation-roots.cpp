class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        
            // If a is zero, it's not 
            // a quadratic equation
            if (a == 0) {
               
                return {-1};
            }

            // Calculate discriminant D = b^2 - 4ac
            int D = b * b - 4 * a * c;

            // If discriminant is negative,
            // roots are imaginary
            if (D < 0) {
                
                return {-1};
            }

            // Compute square root of discriminant
            double sqrtD = sqrt(D);

            // Compute both roots using 
            // quadratic formula
            int r1 = floor((-b + sqrtD) / (2.0 * a));
            int r2 = floor((-b - sqrtD) / (2.0 * a));

            // Ensure roots are printed 
            // in decreasing order
            if (r1 < r2)
                swap(r1, r2);

            // Print both roots
        return {r1, r2};
        }

    
};