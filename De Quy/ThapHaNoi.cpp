#include <stdio.h>

int c[3] = {'A', 'B', 'C'};

void thapHaNoi(int n, int i, int j, int k){
    if(n == 1){
        printf("Chuyen dia %d tu cot %c sang cot %c\n", n, c[i], c[j]);
    }
    else{
        thapHaNoi(n - 1, i, k, j);
        printf("Chuyen dia %d tu cot %c sang cot %c\n", n, c[i], c[j]);
        thapHaNoi(n - 1, k, j, i);
    }
}

void thapHaNoi1(int n, int cotDau, int cotTrungGian, int cotCuoi){
    if(n == 1){
        printf("Chuyen dia %d tu cot %c sang cot %c\n", n, cotDau, cotCuoi);
    }
    else{
        thapHaNoi(n - 1, cotDau, cotCuoi, cotTrungGian);
        thapHaNoi(1, cotDau, cotTrungGian, cotCuoi);
        thapHaNoi(n - 1, cotTrungGian, cotDau, cotCuoi);
    }
}
int main(){
    int n;
    printf("Nhap so luong dia: "); scanf("%d", &n);

    thapHaNoi(n, 0, 2, 1);
    return 0;
}