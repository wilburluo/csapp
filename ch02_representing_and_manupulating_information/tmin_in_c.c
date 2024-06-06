#include <stdio.h>

int main(void)
{
    int dpos32 = (-2147483648 > 0); //-X，负号属于整型常量的一部分！！！
                                    //在C中整型常量部位负，所以前面出现符号，是对整型常量使用一元运算符.
    int hpos32 = (0x80000000 > 0);

    printf("dpos32 = %d\n", dpos32);
    printf("hpos32 = %d\n", hpos32);

    int dtmin32 = -2147483648;
    int dpos32_1 = (dtmin32 > 0);
    int htmin32 = 0x80000000;
    int hpos32_1 = (htmin32 > 0);

    printf("dpos32_1 = %d\n", dpos32_1);
    printf("hpos32_1 = %d\n", hpos32_1);

    printf("1L << sizeof(long) << 3 - 1 = %ld\n", 1L << sizeof(long) << 3 - 1); //problem 2
    printf("1L << (sizeof(long) << 3) - 1 = %ld\n", 1L << (sizeof(long) << 3) - 1);

    return 0;
}