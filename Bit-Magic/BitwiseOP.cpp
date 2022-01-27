#include <iostream>
using namespace std;
#include <bitset>
    
int main(){

    int a = 2;
    int b = 3;
    int c = a & b;    // bitwise and operator ( & ) only true if both bits are 1
    cout<<"bitwise & of "<<a<<" and "<<b<<" is "<<c<<endl;

    c = a | b;    // bitwise or operator ( | ) only true if either of the bits is 1
    cout << "bitwise | of " << a << " and " << b << " is " << c << endl;

    c = a ^ b;    // bitwise xor operator ( ^ ) only true if both bits are different
    cout << "bitwise ^ of " << a << " and " << b << " is " << c << endl;

     c = ~a; // bitwise not operator ( ~ )  // reverse bits
    cout << "bitwise ~ of " << a <<" is " << c << endl;
    // bitset<8> bs(22);
    // cout<<bs<<endl;
    // bitset<8> bs1(33);
    // cout<<bs1<<endl;
    return 0;
}