class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max_pile = piles[0];
        for (int i = 0; i < piles.size(); i++) {
            max_pile = max(max_pile, piles[i]);
        }
        int left = 1, right = max_pile;
        
        int min_k = max_pile;
        long long hours_spent=0;
        while (left <= right) {
            int mid = left + (right - left)/2;
            hours_spent = 0; 
            for (int i = 0; i < piles.size(); i++) {
                hours_spent += ceil((double)piles[i]/mid);
            }
            if (hours_spent > h ) {
                left = mid + 1;
            }
            if (hours_spent <= h) {
                right = mid - 1;
                min_k = min(mid, min_k);      
            }
        }
        
        return min_k;

    }
};
