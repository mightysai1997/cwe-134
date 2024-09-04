#include <err.h>

void secure_errc(const char *message) {
    errc(1, 0, "%s", message);  // Secure: message is properly specified as a format string
}
