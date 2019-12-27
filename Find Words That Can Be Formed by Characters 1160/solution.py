class Solution:
    def countCharacters(self, words: List[str], chars: str) -> int:
        total_length = 0
        for word in words:
            if len(word) > len(chars):
                continue
               
            temporary_chars = chars
            matched = True;
            for char in word:
                find_index = temporary_chars.find(char)
                if ( find_index == -1 ):
                    matched = False
                    break;
                
                temporary_chars = temporary_chars.replace(temporary_chars[find_index], '', 1)
                 
                
               
            if ( matched ):
                print (word)
                total_length = total_length + len(word)
           
        return total_length
                