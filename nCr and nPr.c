#include <stdio.h>
double factorial(int m);
double permut(int n, int r);
double combin(int n, int r);

int main()
{
    double permutation,combination;
    permutation = permut(7,2);
    combination = combin(7,2);
    printf("Permutation = %lf\n",permutation);
    printf("Combination = %lf",combination);
    return 0;
}
double permut(int n, int r)
{
    double result;
    result=factorial(n)/factorial((n-r));
    return result;
}
double combin(int n, int r)
{
    double result;
    result=factorial(n)/(factorial(r)*factorial(n-r));
    return result;
}
