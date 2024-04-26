#include <bits/stdc++.h>
using namespace std;

/* tinh gia tri bieu thuc
x(0) = 1, y(0) = 1;
x(n) = x(n - 1) + y(n - 1);
y(n) = x(n - 1) * y(n - 1);
*/

int x(int);
int y(int);
int x(int n){
    if(n == 0)
        return 1;
    else
        return x(n - 1) + y(n - 1);
}
int y(int n){
    if(n == 0) 
        return 1;
    else
        return x(n - 1) * y(n - 1);
}

int main(){
    cout << x(3) << " " << y(3) << endl;

    return 0;
}