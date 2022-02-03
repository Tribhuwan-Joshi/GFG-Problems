#include <iostream>
using namespace std;

int checkPalindrome(string str,int s , int e){
    
    if(s>=e)
        return true;
   
    return (str[s]==str[e]) && checkPalindrome(str, s+=1, e-=1);
}

int main(){

    string str = "abbcbba";
    int start = 0;
    int end = str.size() -1 ;
    
    cout<<checkPalindrome(str, start,end);
    

    return 0;
}