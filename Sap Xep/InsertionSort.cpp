/*  SẮP XẾP CHÈN
- ý tưởng:
    for i = 2 to n
        chèn ai vào vị trí sắp xếp đúng của dãy a1, a2, ai-1
        
*/
#include <stdio.h>
#include <stdlib.h>

void insertionSort(int a[], int n){
    for(int i = 1; i < n; i++){
        int j = i;
        while(j > 0 && a[j] < a[j - 1]){
            int temp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = temp;
            j--;
        }
    }
}

int main(){
    int a[100];
    int n, k;
    FILE *f = fopen("sapXepChen.txt", "r");
    if(f == NULL){
        printf("Loi mo, tao file");
        exit(1);
    }
    fscanf(f, "%d", &n);
    for(int i = 0; i < n; i++){
        fscanf(f, "%d", &a[i]);
    }
    fclose(f);

    insertionSort(a, n);
    
    printf("Day so da sap xep: ");
    for(int i = 0; i < n; i++){
        printf("%d", a[i]);
    }
    
    return 0;
}
 
