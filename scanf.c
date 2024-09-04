#include <stdio.h>

void vulnerable_scanf(const char *format) {
    char buffer[100];
    scanf(format, buffer);  // Vulnerable: format string is user-controlled
}
