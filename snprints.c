#include <stdio.h>

void vulnerable_snprintf(const char *format) {
    char buffer[100];
    snprintf(buffer, sizeof(buffer), format);  // Vulnerable: format string is user-controlled
}
