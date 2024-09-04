#include <stdio.h>

void vulnerable_printf(const char *user_input) {
    printf(user_input);  // Vulnerable: user_input is used directly as a format string
}
