#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//function prototypes + documentation (comments)

/**
 * This function computes the factorial, n!
 */
long factorial(int n);

int main(int argc, char **argv) {

  if(argc != 3) {
    fprintf(stderr, "Usage: %s x n\n", argv[0]);
    exit(1);
  }

  double x = atof(argv[1]);
  int n = atoi(argv[2]);

  double result = 0.0;

  //compute sin(x) using a taylor series out to n terms
  int i;
  int sign = 1;
  double sum = 0.0;
  for(i=0; i<n; i++) {
    sum += (sign * pow(x, 2*i+1) / factorial(2*i+1));
    sign *= -1;
  }

  result = sum;
  printf("sin(%f) = %f\n", x, result);

  return 0;
}


//function definition(s)

long factorial(int n) {
  long result = 1, i;
  for(i=2; i<=n; i++) {
    result *= i;
  }
  return result;
}
