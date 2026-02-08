class Solution {
public:
    int lengthOfLastWord(string s) {
        int  i=s.size()-1;
         int count=0;
         while(i >= 0 &&s[i]==' '){
            i--;
         }
         //if(s.size()<=1)return s.size();

         while(i>=0 && s[i]!=' ' ){
            count++;
            i--;
         }
         return count;
        
    }
};