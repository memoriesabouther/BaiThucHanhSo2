#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Hàm kiểm tra số chính phương
bool laSoChinhPhuong(int x) {
	int sqrtX = (int)sqrt(x);
	return (sqrtX * sqrtX == x);
}

// Hàm đếm và in ra các số chính phương nhỏ hơn n
void inVaDemSoChinhPhuong(int n) {
	int count = 0;
	printf("Cac so chinh phuong nho hon %d la:\n", n);
	for (int i = n - 1; i > 0; i--) {
		if (laSoChinhPhuong(i)) {
			printf("%d ", i);
			count++;
		}
	}
	printf("\nTong so chinh phuong nho hon %d la: %d\n", n, count);
}

int main() {
	int n;
	printf("Nhap vao mot so nguyen duong n: ");
	scanf("%d", &n);

	if (n <= 0) {
		printf("Vui long nhap mot so nguyen duong.\n");
	}
	else {
		inVaDemSoChinhPhuong(n);
	}

	return 0;
}
