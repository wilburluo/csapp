/*下列代码试图计算数组a中所有元素的和，其中元素的数量由参数length给出。
 *              float sum_elements(float a[], unsigned length){
 *                  int i;
 *                  float result = 0;
 *
 *                  for (i = 0; i <= length -1; i++)
 *                      result += a[i];
 *                  return result;
 *               }
 * 当参数length等于0时，运行这段代码应该返回0.0。但是实际上，运行时会晕倒一个内存错误。请解释为什么？并修改代码。
 *          当length为0时，0u - 1按照无符号数进行运算，结果为2^32 - 1。
 */

#include <stdio.h>
float sum_elements(float a[], int length) {
    int i;
    float result = 0;

    for (i = 0; i < length; i++) result += a[i];
    return result;
}

int main(void) {
    float a[5];
    a[0] = 1.0;
    a[1] = 2.0;
    a[2] = 3.0;
    a[3] = 4.0;
    a[4] = 5.0;
    printf("%f\n", sum_elements(a, 0));

    return 0;
}