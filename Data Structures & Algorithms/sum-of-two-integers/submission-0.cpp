class Solution {
public:
    int getSum(int x, int y)
    {
        return (x ^ y) + ((x & y) << 1);
        
    }
};
