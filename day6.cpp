//day-6
//https://leetcode.com/problems/valid-word-abbreviation/

class Solution {
public:
    bool isValid(string word) {
      
        if(word.length()<3)
            return false;
        int v=0,c=0;
        for(char ch: word)
        {
            if(!isalnum(ch) || isspace(ch))
               return false;
            if(isalpha(ch))
            {
                if(ch=='a' || ch=='e' || ch=='i'|| ch=='o'||ch=='u'||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
                    v++;
                else
                    c++;
            } 
        }
        if(c>0 && v>0)
            return true;
        else 
            return false; 
    }
};