#include <stdio.h>

int main() {
    int password = 13579, n;

    printf("nhap mat khau: ");
    scanf("%d", &n);
    if (n == password) 
        printf("mat khau dung!\n");
    else 
        printf("mat khau sai!\n");

    return 0;
}

