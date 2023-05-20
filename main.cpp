#include <stdio.h>
#include "base.h"

int main() {
    // context cracking
    printf("cl        = %d\n", COMPILER_CL);
    printf("clang     = %d\n", COMPILER_CLANG);
    printf("gcc       = %d\n", COMPILER_GCC);

    printf("windows   = %d\n", OS_WIN);
    printf("linux     = %d\n", OS_LINUX);
    printf("mac       = %d\n", OS_MAC);

    printf("x86       = %d\n", ARCH_X86);
    printf("x64       = %d\n", ARCH_X64);
    printf("arm       = %d\n", ARCH_ARM);
    printf("aarch64   = %d\n", ARCH_ARM64);

    return 0;
}