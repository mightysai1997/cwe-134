#include <stdio.h>

void secure_printf(const char *user_input) {
    printf("%s", user_input);  // Secure: user_input is safely handled as a string
}
