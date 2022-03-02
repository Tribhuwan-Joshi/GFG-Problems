#include <iostream>
using namespace std;

string convertToString(int sum){
    string str = "";
    while(sum){
        str = str + (char)((sum % 10) + '0');
        sum = sum / 10;
    }
    return str;
}

string GetIndvidualDigitSum(string str , int len){
    int sum = 0;
    for (int i = 0; i < len; i++){
        sum = sum + str[i] - '0';

    }

    return convertToString(sum);
}

int digitalRoot(string str){
    if(str.length() == 1){
        return str[0] - '0';
    }
    str = GetIndvidualDigitSum(str, str.length());
    return digitalRoot(str);

}

int main(){

    cout << digitalRoot("675987890789756545689070986776987");

    return 0;
}