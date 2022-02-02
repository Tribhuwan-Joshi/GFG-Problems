// function calling itself

//guess the output

#include <iostream>
using namespace std;
void func(int n){
    if(n==0)
        return;
    func(n - 1);
    cout << n << endl;
    func(n - 1);
}

void fun(int n){   //print binary equiv
    if(n==0)
        return;
    fun(n / 2);
    cout << n % 2<<endl;
}

int fun1(int n){   // return log2
    if(n==1)
        return 0;
    else
        return 1 + fun1(n / 2);
    
}

int main(){

    int n = 3;
    // func(n);
    int ans = fun1(16);
    cout << ans;
    return 0;
}