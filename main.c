#include <uefi.h>

int main(int argc, char **argv)
{
    int32_t a, b, c;
    (void)argc;
    (void)argv;

    a = 1234;
    b = 4321;
    __asm__ volatile(
        "cvtsi2sd xmm0, %1;"
        "cvtsi2sd xmm1, %2;"
        "addsd xmm0, xmm1;"
        "cvttsd2si %0, xmm0;"
        : "=r" (c)
        : "r" (a), "r" (b)
    );
    printf("%d + %d = %d\n", a, b, c);
    return 0;
}
