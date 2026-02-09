class Solution {
public:
    string addBinary(string a, string b) {
        int i,j,carry=0,bitA,bitB,sum;
        string res = "";
        i=a.size()-1;
        j=b.size()-1;
        carry=0;
        while(i>=0||j>=0||carry){
            if(i>=0){
                bitA=a[i]-'0';
                i--;
            }
            else{
                bitA=0;
            }
            if(j>=0){
                bitB=b[j]-'0';
                j--;
            }
            else{
                bitB=0;
            }
            sum=bitA+bitB+carry;
            res.push_back((sum%2)+'0');
            carry=sum/2;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};