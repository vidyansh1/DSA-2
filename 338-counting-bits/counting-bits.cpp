class Solution {
public:
    vector<int> countBits(int n) {
      vector<int>ans; int count=0;
      if(n<1){
         ans.push_back(0);
        return ans;}
        else{   
            ans.push_back(0);
        }
      for(int i=1;i<=n;i++){
           int k=i;
        while(k){
            k=k&(k-1);
            count++;
        }
           ans.push_back(count);
           count=0;
      }  
      return ans;
    }
};