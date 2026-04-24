class Solution {
public:
    // int steps(int n){
    //     if(n==0) return 0;
    //     if(n==1) return 1;
    //     if(n==2) return 2;
    //     return steps(n-1)+steps(n-2);
    // }
    int climbStairs(int n) {
        if(n==1) return 1;
        int prev1 = 2, prev2 = 1; 
        for(int i=3; i<=n; i++){
            int curr = prev1+prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};
