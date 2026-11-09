#include <stdio.h>

int main(void)
{
    int n; 
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Error");
    } else if (n == 0) {
        printf("No");
    } else {
    if (n % 3 == 0) {
        printf("Up");
    }
    if (n % 5 == 0) {
        printf("Go");
    }
    if (n % 7 == 0) {
        printf("!!");
    }
    if (n % 3 != 0 && n % 5 != 0 && n % 7 != 0) {
        printf("No");
    }
}
    return 0;
}
