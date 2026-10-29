class Solution {
public:
    void reverseString(vector<char>& s) {
       int l=0,r=s.size()-1;
       
       while(l<r){
        swap(s[l],s[r]);
        //temp=s[l];
        //s[l]=s[r];
        //s[r]=temp;
         l++;
        r--;
       }
       
       
       
      
    }
};