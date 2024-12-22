#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;
    printf("nhap vao mot so nguyen bat ky: "); 
    scanf("%d", &n);
    printf("%d so dau tien trong day fibonacy la:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}

