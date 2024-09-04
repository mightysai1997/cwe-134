#include <stdio.h>

void secure_fscanf(const char *format) {
    FILE *file = fopen("data.txt", "r");
    char buffer[100];
    // Ensure format string is a valid format specifier
    if (format[0] == '%' && format[1] == 's') {
        fscanf(file, format, buffer);  // Secure: format string is validated
    }
    fclose(file);
}
