class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;

        while(i >= 0 && digits[i] == 9){
            digits[i] = 0;
            i--;
        }

        if(i >= 0) {
            digits[i]++;      // add 1 where digit is not 9
        } 
        else {
            digits.insert(digits.begin(), 1); // all were 9
        }

        return digits;
    }
};
