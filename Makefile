ARCH = x86_64
TARGET = sse-enable.efi
SRCS = main.c
CFLAGS = -pedantic -Wall -Wextra -Werror --ansi -O2 -masm=intel
include posix-uefi/uefi/Makefile

