#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* argc is the num of arguments to be passed
argv is a reference to an array of pointers to each argument passed to the program
** argv[0] is always the program name. Therefore if user enters 4 arguments then argc = 1+ 5
*/
int main(int argc, char *argv[]) {

  if (argc != 5) {
    fprintf(stderr, "Invalid Inputs. Enter:\nprincipal, \nrate(as decimal) \ncompoundFrequency (# of times interest is compounded per year) \ntime(years)");
    return 1;
  }
  
  // NULL because strtod (string to double) must ignore any advanced error
  double p = strtod(argv[1], NULL);
  double r = strtod(argv[2], NULL);
  double cF = strtod(argv[3], NULL);
  double t = strtod(argv[4], NULL); 


  if(p < 0 || r < 0 || cF < 0 || cF != 0 || t < 0){
    fprintf(stderr, "Values must be greater than 0");
    return 1;
  } 


  double A;
  A = p*pow((1+(r/cF)),(cF*t));
  printf("Final Amount With Interest: %.2f\n", A);

  return 0;
}
