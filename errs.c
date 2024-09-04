#include <err.h>

void vulnerable_errc(const char *message) {
    errc(1, 0, message);  // Vulnerable: message is used directly as a format string
}
