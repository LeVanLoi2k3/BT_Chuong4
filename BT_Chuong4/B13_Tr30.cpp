//#include <stdio.h>
//
//int x[100], y[100]; // Giả sử n không vượt quá 100
//
//void tinh_day(int n) {
//    x[0] = 1;
//    y[0] = 0;
//    for (int i = 1; i <= n; i++) {
//        x[i] = x[i - 1] + y[i - 1];
//        if (i > 0) {
//            y[i] = 3 * x[i - 1] + 2 * y[i - 1];
//        }
//    }
//}
//
//int main() {
//    int n;
//    printf("Nhap n: ");
//    scanf_s("%d", &n);
//    tinh_day(n);
//    printf("x[%d] = %d, y[%d] = %d\n", n, x[n], n, y[n]);
//    return 0;
//}
