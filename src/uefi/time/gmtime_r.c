#include "uefi/time_impl.h"
#include <errno.h>
#include <time.h>
//#include "libc.h"

//extern const char __gmt[];
const char __gmt[] = "GMT";

struct tm *__gmtime_r(const time_t *t, struct tm *tm)
{
	if (__secs_to_tm(*t, tm) < 0) {
		errno = EOVERFLOW;
		return 0;
	}
	tm->tm_isdst = 0;
	//tm->tm_gmtoff = 0;
	tm->tm_zoneoff = 0;
	//tm->tm_zone = __gmt;
	return tm;
}

//weak_alias(__gmtime_r, gmtime_r);
