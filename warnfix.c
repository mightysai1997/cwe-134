#include <err.h>

void secure_warn(const char *message) {
    warn("%s", message);  // Secure: message is properly specified as a format string
}
