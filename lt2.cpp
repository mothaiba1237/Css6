#include <stdio.h>

int main() {
    int n, even = 0, odd = 0;
    
    for (int i = 1; i <= 5; i++) {
        printf("nhap vao so nguyen thu %d: ", i);
        scanf("%d", &n);
        if (n % 2 == 0) 
            even++;
        else 
            odd++;
    }
    printf("so luong so chan: %d\n", even);
    printf("so luong so le: %d\n", odd);

    return 0;
}

