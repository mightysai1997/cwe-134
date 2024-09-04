#include <stdio.h>

void vulnerable_fscanf(const char *format) {
    FILE *file = fopen("data.txt", "r");
    char buffer[100];
    fscanf(file, format, buffer);  // Vulnerable: format string is user-controlled
    fclose(file);
}
