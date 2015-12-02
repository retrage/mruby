#include "uefi/math.h"

// FIXME: macro in math.h
int __signbit(double x)
{
	union {
		double d;
		UINT64 i;
	} y = { x };
	return y.i>>63;
}

