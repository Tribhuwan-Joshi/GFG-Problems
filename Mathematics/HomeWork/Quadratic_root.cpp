#include <iostream>
#include <utility>
#include <cmath>
using namespace std;

pair<int,int> giveRoots(int a , int b, int c){
int D = b*b - 4*a*c;
if(D>0){
    int x1 = (-b + sqrt(D))/(2*a);
    int x2 = (-b - sqrt(D))/(2*a);
    return make_pair(x1,x2);
}
else if(D==0){
    int x1 = -b/(2*a);
    return make_pair(x1,x1);
}
else{
    return make_pair(-1,-1);
}
}

int main(){

pair <int , int> ans =  giveRoots(1,-7,12);
cout<<ans.first<<" "<<ans.second<<endl;

return 0;
}