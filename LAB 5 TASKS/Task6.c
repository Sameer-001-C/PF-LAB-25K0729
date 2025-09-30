#include <stdio.h>

int main() {
    int a = 5, b = 0, c = 0;
	printf("Pre-Increament: \n");
	printf("Before:\na = %d, b = %d\n", a, b);
    b = ++a;  
    printf("After pre-increment (++a):\n");
    printf("a = %d, b = %d\n\n", a, b);

    a = 5;

	printf("Post-Increment:\n");
	printf("Bofore:\na= %d, c = %d\n", a,c);
    c = a++;  
    printf("After post-increment (a++):\n");
    printf("a = %d, c = %d\n", a, c);

    return 0;
}
