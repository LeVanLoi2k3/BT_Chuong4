//#include <stdio.h>
//
//int fibonacci_largest_less_than(int n) {
//    int a = 0, b = 1, c;
//    while (b < n) {
//        c = a + b;
//        a = b;
//        b = c;
//    }
//    return a;  // a là số Fibonacci lớn nhất nhỏ hơn n
//}
//
//int main() {
//    int n;
//    printf("Nhap n: ");
//    scanf_s("%d", &n);
//    int result = fibonacci_largest_less_than(n);
//    printf("So Fibonacci lon nhat nho hon %d la: %d\n", n, result);
//    return 0;
//}
