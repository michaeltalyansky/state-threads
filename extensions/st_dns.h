#include <ares.h>
#include <arpa/inet.h>
#include <netdb.h>

#ifdef __cplusplus
extern "C" {
#endif
extern int st_gethostbyname_r(const char *name, struct hostent **host);
#ifdef __cplusplus
}
#endif
