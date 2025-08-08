#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int count;
    scanf("%d", &count);

    for(; count > 0; count--) {
        unsigned int num;
        scanf("%u", &num);
        printf("%u\n", ~num);         
    }

    return 0;
}