#include <stdio.h>
int main() {
    int w;
    if (scanf("%d", &w) != 1) return 0;
    int current_count = 0;
    int max_count = 0;
    for (int i = 0; i < w; i++) {
        int num;
        scanf("%d", &num);
        if (num % 2 == 0) {
            current_count++;
            if (current_count > max_count) {
                max_count = current_count;
            }
        } else {
            current_count = 0;
        }
    }
    printf("%d\n", max_count);
    return 0;
}
