#include <syslog.h>

void vulnerable_syslog(const char *message) {
    syslog(LOG_ERR, message);  // Vulnerable: message is used directly as a format string
}
