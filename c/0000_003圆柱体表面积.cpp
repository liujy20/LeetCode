#include<stdio.h>
#include<math.h>
int main() {
	double r, h, s1, s2;
	scanf("%lf%lf", &r, &h);
	double pi = 4 * atan(1.0);
	s1 = 2 * r * r * pi;
	s2 = 2 * r * pi * h;
	printf("%.3lf", s1 + s2);
	return 0;
}
