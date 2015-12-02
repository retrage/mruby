#define signbit(x) __signbit(x)
#define __nanf(x) nanf(x)

int __signbit(double x);
float nanf(const char *s);
int __fpclassifyd(double x);
int __fpclassifyl(long double x);

long long llround(double x);
long lround(double x);
double round(double x);

double log1p(double x);

double asinh(double x);
double acosh(double x);
double atanh(double x);
double cbrt(double x);
double erf(double x);
double erfc(double x);
double hypot(double x, double y);
