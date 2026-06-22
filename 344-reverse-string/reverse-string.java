class Solution {
    public void reverseString(char[] s) {
     int leftPointer=0, rightPointer=s.length-1;
     while(leftPointer<=rightPointer){
       char temporaryMemory = s[leftPointer];
        s[leftPointer] = s[rightPointer];
        s[rightPointer] = temporaryMemory;
        leftPointer+=1;
        rightPointer-=1;
     }  
    }
}