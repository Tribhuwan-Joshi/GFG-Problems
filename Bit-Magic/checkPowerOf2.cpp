// check if a number is powe of 2
// we are gonna use Brain algorithm here - n&(n-1)

#include <iostream>
using namespace std;
    
int main(){

    int n;
    cout<<"Enter a number to check if it is power of 2: ";
    cin>>n;
    if((n&(n-1))==0){
        cout<<n<<" is power of 2"<<endl;
    }
    else{
        cout<<n<<" is not power of 2"<<endl;
    }

    return 0;
}