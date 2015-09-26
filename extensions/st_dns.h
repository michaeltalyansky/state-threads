#include <ares.h>
#include <arpa/inet.h>
#include <netdb.h>

#ifdef __cplusplus
extern "C" {
#endif
extern int st_gethostbyname_r(const char *name, struct hostent **host);
extern int st_gethostbyname2_r(const char *name, int family, struct hostent **host);
#ifdef __cplusplus
}
#endif
