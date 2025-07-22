class Solution {
public:
    string reverseVowels(string s) {
        string vow;
         for(int i=0;i<s.size();i++)
         {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'|| s[i]=='A' || s[i]=='E' || 
            s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
              vow += s[i];
              s[i]='#';  
            } 
         }
         int start=0;int end=vow.size()-1;
         while(start<end){
          swap(vow[start],vow[end]);
          start++,
          end--;
         }
         int fst=0,scnd=0;
         while(scnd<vow.size()){
            if(s[fst]=='#'){
                s[fst]=vow[scnd];
                scnd++;
            }
            fst++;
         }
         return s;
    }
};