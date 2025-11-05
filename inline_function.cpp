#include<iostream>
using namespace std;
inline int sq(int x){
    return x*x;
}
int main(){
    cout << sq(5) << endl;
    cout << sq(10);
}