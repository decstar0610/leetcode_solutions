class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
         int increasing=false,decreasing=false;
        if(arr.size()<3)return false;
        int n=arr.size();
        for(int i=0;i<n-1;i++){
          if(arr[i]==arr[i+1])
          return false;
          if(arr[i]<arr[i+1]){
            if(decreasing==true)return false;
            increasing=true;
          }
          if(arr[i]>arr[i+1]){
            if(increasing==false)return false;
            decreasing=true;
          }
        }
        if(increasing==true&&decreasing==true)
        return true;
        else 
        return false;


    }
};