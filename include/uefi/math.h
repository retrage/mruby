#define signbit(x) __signbit(x)
#define __nanf(x) nanf(x)

int __signbit(double x);
float nanf(const char *s);
int __fpclassifyd(double x);
int __fpclassifyl(long double x);
