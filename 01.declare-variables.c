#include <stdio.h>
#include <inttypes.h>

int main() {
    unsigned short var01 = 52130u;
    int64_t var02 = 8942492113;
    char var03 = -115;
    int64_t var04 = 4825932;
    unsigned char var05 = 97u;
    short var06 = -10000;
    long long var07 = -35982859328592389;
    printf("%u\n", var01);
    printf("%ld\n", var02);
    printf("%d\n", var03);
    printf("%ld\n", var04);
    printf("%d\n", var05);
    printf("%d\n", var06);
    printf("%lld\n", var07);

    return 0;
}