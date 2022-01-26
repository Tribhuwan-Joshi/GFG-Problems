#include <iostream>
using namespace std;


//gcd using loops
// int gcd(int a , int b){
//    while(a!=b){
//      if (a>b){
//         a -= b;
//     }
//     else{
//         b -= a;
//     }
// }
// return a;
// }

// gcd using recursion

int gcd(int a , int b){

if(b==0){
    return a;
}
else
    return gcd(b, a % b);
}

int lcm(int a , int b){
    return ((a * b) / gcd(a, b));
}

int main(){
    // cout << gcd(18, 6);
    cout << lcm(185, 12);

    return 0;
}