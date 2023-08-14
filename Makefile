TARGET = sse-enable.efi
SRCS = main.c
CFLAGS = -pedantic -Wall -Wextra -Werror -O2 -masm=intel
include uefi/Makefile

