#include <stdio.h>
#include <limits.h>

int main(){
    printf("Character types:\n");
    printf("CHAR_BIT: %d\n", CHAR_BIT);
    printf("CHAR_MIN: %d\n", CHAR_MIN);
    printf("CHAR_MAX: %d\n", CHAR_MAX);
    printf("SCHAR_MIN: %d\n", SCHAR_MIN);
    printf("SCHAR_MAX: %d\n", SCHAR_MAX);
    printf("UCHAR_MAX: %u\n", UCHAR_MAX);

    printf("\nShort integer types:\n");
    printf("SHRT_MIN: %d\n", SHRT_MIN);
    printf("SHRT_MAX: %d\n", SHRT_MAX);
    printf("USHRT_MAX: %u\n", USHRT_MAX);

    printf("\nInteger types:\n");
    printf("INT_MIN: %d\n", INT_MIN);
    printf("INT_MAX: %d\n", INT_MAX);
    printf("UINT_MAX: %u\n", UINT_MAX);

    printf("\nLong integer types:\n");
    printf("LONG_MIN: %ld\n", LONG_MIN);
    printf("LONG_MAX: %ld\n", LONG_MAX);
    printf("ULONG_MAX: %lu\n", ULONG_MAX);

    printf("\nLong long integer types:\n");
    printf("LLONG_MIN: %lld\n", LLONG_MIN);
    printf("LLONG_MAX: %lld\n", LLONG_MAX);
    printf("ULLONG_MAX: %llu\n", ULLONG_MAX);

    return 0;
}