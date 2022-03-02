#include <iostream>
using namespace std;

void TOH( char A , char B , char C , int n){
    if (n==1){
        cout << "Moving 1 from "<<A <<" to "<<C<<endl;
        return;
    }

    TOH(A, C, B,n-1);
    cout << "Moving " << n  << " from " << B << " to " << C<<endl;
    TOH(B, A, C, n - 1);
}

int main(){

     TOH('A', 'B', 'C' , 3);

    return 0;
}