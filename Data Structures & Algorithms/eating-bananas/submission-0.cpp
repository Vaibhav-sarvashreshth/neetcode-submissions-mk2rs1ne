class Solution {
public:
bool canFinish(const vector<int>& piles, int h, int k) {
        long long totalHours = 0;
        for (int pile : piles) {
            // Using integer arithmetic to round up
            totalHours += (ceil(static_cast<double>(pile) / k));
        }
        return totalHours <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h)
    {int n = piles.size();
        // If h equals the number of piles, Koko must finish one full pile per hour.
        if (h == n) {
            return *max_element(piles.begin(), piles.end());
        }
        
        // Calculate total bananas in all piles.
        long long sum = 0;
        for (int pile : piles)
            sum += pile;
        
        // Lower bound: ceil(total bananas/h)
        // Using integer arithmetic for ceiling: (sum + h - 1) / h
        int low = (sum + h - 1) / h;
        
        // Upper bound: ceil(total bananas/(h - n))
        // This comes from the idea that at minimum Koko spends 1 hour per pile.
        int high = (sum + (h - n) - 1) / (h - n);
        
        int ans = high;  // Initialize with the upper bound
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canFinish(piles, h, mid)) {
                ans = mid;    // mid is a valid speed
                high = mid - 1; // Try to find a smaller valid speed
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
