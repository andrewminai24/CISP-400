#include <stdio.h>
#include <math.h>

unsigned long long fact(long p) {
    long i, mult = 1;

    for(i=1; i<=p; i++)
        mult *= i;

    return mult;
}

double factExp(double x, int n)
{
    ///fix me
    double result = 1;
   //  if(n==0)
     //  return (double)1;
     for (int i=1;i <= n; i++) {
         result = result * x;

     }
     result/= fact(n);
     return result;
}




double we(double x, int nterms) {
    int m, i, j = 1;
    float sum = 0;

    for(i=0; i<nterms; i++) {
        m = 2 * i + 1;
        sum += j * factExp(x, m);
        j = -j;
    }

    return sum;
}

int main() {
    int i, n;
    float x;

    while(1) {
        printf("Number of terms (enter 0 to quit): ");
        scanf("%d", &n);
        if(n == 0)
            break;

        printf("Enter a value for x: ");
        scanf("%f", &x);

        printf("The series gave me %f\n\n", sinex(x, n));
        return 0;
    }
}

