class Solution {
public:
    bool isPalindrome(string s)
    {

        int n = s.size();
        int left =0 , right = s.size()-1;
        while(left<right)
        {
            while(left < right and !isalnum(s[left]))
            {
                left++;
            }
            while(left < right and !isalnum(s[right]))
            {
                right--;
            }
            if(tolower(s[left])==tolower(s[right]))
            {
                left++;
                right--;
            }
            else
            {
                return false;
            }
        }
        return true;
        
        
    }
};
