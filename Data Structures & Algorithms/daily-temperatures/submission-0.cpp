class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        for(int i=0; i<n-1; i++){
            int count = 1;
            for(int j=i+1; j<n; j++){
                if(temperatures[j]>temperatures[i]){
                    temperatures[i] = count;
                    break;
                }
                else if(temperatures[j]<=temperatures[i]&&j==n-1){
                    temperatures[i] = 0;
                    break;
                }
                else count++;
            }
        }
        temperatures[n-1] = 0;
        return temperatures;
    }
};
