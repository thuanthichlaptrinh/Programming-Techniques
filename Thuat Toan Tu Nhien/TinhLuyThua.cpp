#include <iostream> 
using namespace std;

int tinhLuyThua(int a, int n){
    int p = 1;
    for(int i = 1; i <= n; i++){
        p *= a;
    }
    return p;
}

int main(){
    int a, n, p;
    printf("Nhap a: "); scanf("%d", &a);
    printf("Nhap n: "); scanf("%d", &n);

    printf("%d^%d = %d", a, n, tinhLuyThua(a, n));
    return 0;
}