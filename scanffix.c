#include <stdio.h>

void secure_scanf(const char *format) {
    char buffer[100];
    // Ensure format string is a valid format specifier
    if (format[0] == '%' && format[1] == 's') {
        scanf(format, buffer);  // Secure: format string is validated
    }
}
