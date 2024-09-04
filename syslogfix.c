#include <syslog.h>

void secure_syslog(const char *message) {
    syslog(LOG_ERR, "%s", message);  // Secure: message is properly specified as a format string
}
