#include <err.h>

void vulnerable_warn(const char *message) {
    warn(message);  // Vulnerable: message is used directly as a format string
}
