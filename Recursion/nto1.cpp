#include <iostream>
using namespace std;
void  printNto1(int n){
    if(n==0)
        return;
    else{
        cout << n ;
        printNto1(n - 1);
    }
}  


void print1ton(int n){
    if(n==0)
        return;
    else
        print1ton(n - 1);
    cout << n << " ";
}
int main(){

    printNto1(5);
    cout << endl;
    print1ton(5);
    return 0;
}