#include <bits/stdc++.h>
using namespace std;

// UCLN(a, b) = UCLN(b, a % b)
int UCLN(int a, int b){
    if(b == 0) 
        return a;
    return UCLN(b, a % b);
}

int pow(int x, int n){
    if(n == 0) 
        return 1;
    return pow(x, n - 1) * x;
} 

int pow1(int x, int n){
    if(n == 0)
        return 1;
    if(n % 2 == 0)
        return pow1(x * x, n / 2);
    else
        return x * pow(x * x, (n - 1) /2);
}

int main(){
    cout << pow1(2, 3) << endl;
    return 0;
}