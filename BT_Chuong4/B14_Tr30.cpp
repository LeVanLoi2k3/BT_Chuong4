//#include <stdio.h>
//
//int A[100]; // Giả sử n không vượt quá 100
//
//void tinh_A(int n) {
//    A[0] = 1;
//    for (int i = 1; i <= n; i++) {
//        A[i] = 0;
//        for (int j = 0; j < i; j++) {
//            A[i] += A[j];
//        }
//    }
//}
//
//int main() {
//    int n;
//    printf("Nhap n: ");
//    scanf_s("%d", &n);
//    tinh_A(n);
//    printf("A[%d] = %d\n", n, A[n]);
//    return 0;
//}
