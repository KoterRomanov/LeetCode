class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        string total = string();
        for( vector<string>::iterator it = words.begin(); it != words.end(); ++it )
        {
            string temp = *it;
            for(int index = 0; index < temp.length(); ++index)
            {
                char charactor = temp.at(index);
                if ( chars.find(charactor) == string::npos )    break;
                if ( index == (temp.length()-1) )   total.append(temp);
            }
        }
        
        return total.length();
    }
};