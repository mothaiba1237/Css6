#include <stdio.h>

int main(){
	int n;
	printf("nhap vao mot so nguyen bat ky: ");
	scanf("%d", &n);
	printf("cac uoc cua %d la:\n", n);
	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			printf("%d\n", i);
		}
	}
	return 0;
}
