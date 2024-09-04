#include <stdio.h>

void secure_fprintf(const char *user_input) {
    FILE *file = fopen("log.txt", "w");
    fprintf(file, "%s", user_input);  // Secure: user_input is safely handled as a string
    fclose(file);
}
