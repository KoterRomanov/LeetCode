class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int total = 0;
        for ( auto str : words )
        {
            if ( str.size() > chars.size() )
                continue;
            
            bool flag = true;
            string temporary = chars;
            for ( auto ch : str )
            {
               if ( string::npos == temporary.find(ch) )
               {
                   flag = false;
                   break;
               }
                
               temporary[temporary.find(ch)] = ' ';
                
            }
            
            if ( flag )
            {
                total += str.size();
            }
        }
        
        
        
        return total;
    }
};