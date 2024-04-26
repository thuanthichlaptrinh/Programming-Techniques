/*       thuật toán sắp xếp chọn
- Do phuc tap: O(n^2)
- 
*/
#include <stdio.h>

void hoanVi(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void selectionSort(int a[], int n){ // do phuc tap tuong duong doi bbs
    for(int i = 0; i < n - 1; i++){ // chỉ số đầu tiên của dãy hiện tại
        int min = i; // min là chỉ số của ptu nhỏ nhất
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[min]){
                min = j; // lưu vtri ptu nhỏ nhất
            }
        }
        hoanVi(a[i], a[min]);
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
    selectionSort(a, len);
    output(a, len);
    return 0;
}