#include<stdio.h>
#include<math.h>

int main()
{
	double H;
	scanf("%lf", &H);
	printf("%.9f\n", sqrt(H * (12800000 + H)));
}