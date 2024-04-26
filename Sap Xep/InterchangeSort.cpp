#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int x = a;
    a = b;
    b = x;
}
// Đổi chổ trực tiếp
void InterchangeSort(int a[], int &n){ // O(n^2)
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[i]){
                swap(a[j], a[i]);
            }
        } 
    }
}

int main(){
    int a[100];
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    InterchangeSort(a, n);
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}