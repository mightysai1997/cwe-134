#include <stdio.h>

void vulnerable_fprintf(const char *user_input) {
    FILE *file = fopen("log.txt", "w");
    fprintf(file, user_input);  // Vulnerable: user_input is used directly as a format string
    fclose(file);
}
