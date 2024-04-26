#include <stdio.h>

void bubbleSort(int a[], int n){ // noi ptu nho nhat len truoc
    for(int i = 0; i < n - 1; i++){
        for(int j = n - 1; j > i; j--){
            if(a[j] < a[j - 1]){
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
}

void output(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(){
    int a[] = {2, 3, 4, 0, 7, 9, 3, 29, 100, 2};
    int len = sizeof(a) / sizeof(int);
    bubbleSort(a, len);
    output(a, len);

    return 0;
}



