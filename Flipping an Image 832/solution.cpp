class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        
        
        for ( vector<vector<int>>::iterator it = A.begin(); it != A.end(); ++it )
        {
            int length = (*it).size();
            for ( int j = 0; j < length/2; j++ )
            {
                //horizontal inversion
                swap( (*it)[j], (*it)[length-j-1] );
                
                //vertical inversion
                (*it)[j] ^= 0x0001;
                (*it)[length-j-1] ^= 0x0001;
            }
            
            //middle
            if ( 0 != length %2 )
            {
                (*it)[length/2] ^= 0x0001;
            }
        }
        
        return A;
    }
};