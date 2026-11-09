#include <stdio.h>
int main(void) {
    int n;
    
    // 入力を取得
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    // 1. n が負のとき
    if (n < 0) {
        printf("Error\n");
    } 
    // 2. n が 0 のとき
    else if (n == 0) {
        printf("No\n");
    } 
    // 3. n が正のとき
    else {
        int matched = 0;

        // 3の倍数判定
        if (n % 3 == 0) {
            printf("Up");
            matched = 1;
        }
        // 5の倍数判定
        if (n % 5 == 0) {
            printf("Go");
            matched = 1;
        }
        // 7の倍数判定
        if (n % 7 == 0) {
            printf("!!");
            matched = 1;
        }

        // どれにも当てはまらなければ No
        if (!matched) {
            printf("No");
        }
        
        printf("\n");
    }

    return 0;
}