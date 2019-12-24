class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int result = 0;
        int count = 1;
        for ( vector<int>::iterator it = nums.begin(); it != nums.end(); ++it )
        {
            while (*it / 10)
            {
                count++;
            }
            
            if ( 0 == (count % 2) )
                result++;
        }
        
        return result;
    }
};