#include <stdio.h>

struct var_s {
    int x;
    int y;
};

int main() {

    struct var_s var;
    var.x = 23;
    var.y = 63;
    printf("var.x = %d \n", var.x);
    printf("var.y = %d \n", var.y);

    return 0;
}
