class Solution {
public:
    int countOdds(int low, int high) {
        long long count=0;
        for(long long i=low;i<=high;i++){
            if(i%2!=0){
                count++;
            }
        }
        return count;
    }
};