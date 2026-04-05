class Solution {
public:
    int getSum(int x, int y)
    {

    
        while(y!=0)
        {
            unsigned int carry = (x & y) << 1;
            x = (y^x);
            y = carry;
        }


        return (int)x;
        
    }
};
