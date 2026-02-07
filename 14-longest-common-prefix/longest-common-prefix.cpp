class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         string ans="";
       int n=strs.size();
        if(n<=1)return strs[0];

       sort(strs.begin(),strs.end());
       string first,last;
       first=strs[0];
       last=strs[n-1];
       
       for(int i=0;i<min(first.length(), last.length());i++){
        if(first[i]!=last[i])return ans;
        ans+=first[i];
       }
       return ans;

    }
};