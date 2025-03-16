#include <limits.h>
#include <stdio.h>
#include <float.h>


int main(){
    #ifdef __STDC_VERSION__
        printf("C Standard: %ld\n", __STDC_VERSION__);
    #else
        printf("C Standard: Pre-C99\n");
    #endif

    printf("Storage size for int : %ld \n", sizeof(int));
    printf("Storage size for float : %ld \n", sizeof(float));
    printf("Storage size for double : %ld \n", sizeof(double));
    printf("Storage size for char : %ld \n", sizeof(char));
    printf("Storage size for long : %ld \n", sizeof(long));
    printf("Storage size for long long : %ld \n", sizeof(long long));
    printf("Storage size for long double : %ld \n", sizeof(long double));
    printf("Storage size for short : %ld \n", sizeof(short));
    printf("Storage size for unsigned int : %ld \n", sizeof(unsigned int));
    printf("Storage size for unsigned long : %ld \n", sizeof(unsigned long));
    printf("Storage size for unsigned long long : %ld \n", sizeof(unsigned long long));
    printf("Storage size for unsigned short : %ld \n", sizeof(unsigned short));
    printf("Storage size for unsigned char : %ld \n", sizeof(unsigned char));
    printf("Storage size for signed char : %ld \n", sizeof(signed char));
    printf("Storage size for signed int : %ld \n", sizeof(signed int));
    printf("Storage size for signed long : %ld \n", sizeof(signed long));
    printf("Storage size for signed long long : %ld \n", sizeof(signed long long));
    printf("Storage size for signed short : %ld \n", sizeof(signed short));
    printf("Storage size for signed float : %zu \n", sizeof(float));
    printf("Storage size for signed double : %zu \n", sizeof(double));
    printf("Storage size for signed long double : %zu \n", sizeof(long double));
    printf("Storage size for signed long long : %ld \n", sizeof(signed long long));
    printf("Storage size for signed short : %ld \n", sizeof(signed short));
    printf("Storage size for signed char : %ld \n", sizeof(signed char));
    printf("Storage size for signed int : %ld \n", sizeof(signed int));
    printf("Storage size for signed long : %ld \n", sizeof(signed long));
    printf("Storage size for signed long long : %ld \n", sizeof(signed long long));
}