#include <bits/stdc++.h>

void swap(int &a, int &b){
    int temp = a; 
    a = b;
    b = temp;
}
void InterchangeSort(int *a, int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                swap(a[i], a[j]);
            }
        }
    }
}
void SelectionSort(int *a, int n){
    for(int i = 0; i < n - 1; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if(a[min] > a[j]){
                min = j;
            }
        }
        swap(a[min], a[i]);
    }
}

int Partition(int *a, int left, int right){
    int pivot = a[right];
    int vt = left - 1;
    for(int i = left; i < right; i++){
        if(a[i] < pivot){
            vt++;
            swap(a[vt], a[i]);
        }
    }
    vt++;
    swap(a[vt], a[right]); // đưa chốt vào giữa
    return vt;
}
void quicsort(int *a, int left, int right){
    if(left < right){
        int pivot = Partition(a, left, right);
        quicsort(a, left, pivot - 1);
        quicsort(a, pivot + 1, right);
    }
}
void QuickSort(int *a, int n){
    quicsort(a, 0, n - 1);
}

int main(){
    int *a = NULL;
    int n = 0;
    printf("Nhap so luong phan tu: "); scanf("%d", &n);
    a = new int[n];
    srand((unsigned)time(NULL));
    for(int i = 0; i < n; i++){
        a[i] = rand() % 101 - 50;
    }
    printf("\nMANG VUA NHAP: ");
    for(int i = 0; i < n; i++){
        printf("%4d", a[i]);
    }

    QuickSort(a, n);
    printf("\nMANG SAU KHI SAP XEP: ");
      for(int i = 0; i < n; i++){
        printf("%4d", a[i]);
    }

    delete[] a;
    return 0;
}