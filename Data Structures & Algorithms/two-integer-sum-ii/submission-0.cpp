class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int sum=0;
        int left = 0, right = numbers.size()-1;
        while(left<right){
           sum += numbers[left];
           sum += numbers[right];
           if(sum==target) break;
           if(sum>target){
                right--;
                sum = 0;
           }
           else{
                left++;
                sum = 0;
           }
        } 
        return {left+1,right+1};
    }
};
