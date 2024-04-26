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

void thapHaNoi1(int n, char a, char b, char c){
    if(n == 1){
        printf("%c -> %c\n", a, c);
    }
    else{
        thapHaNoi1(n - 1, a, c, b);
        thapHaNoi1(1, a, b, c);
        thapHaNoi1(n - 1, b, a, c);
    }
}

int main(){
    int n;
    printf("Nhap so luong dia: "); scanf("%d", &n);

    thapHaNoi1(n, 'A', 'B', 'C');
    return 0;
}