#include <stdlib.h>
#include <stdio.h>

// Compund Interest Formula: A = P(1+r/n)^n*t

/* argc is the num of arguments to be passed
argv is a reference to an array of pointers to each argument passed to the program
** argv[0] is always the program name. Therefore if user enters 4 arguments then argc = 1+ 5
*/
int main(int argc, char *argv[]) {

  if (argc != 5) {
    fprintf(stderr, "Invalid Inputs. Enter:\n principal, \nrate(as decimal) \ncompoundFrequency \ntime(years)");
    return 3;
  }
  // NULL because strtod (string to double) must ignore any advanced error
  double principal = strtod(argv[1], NULL);
  double rate = strtod(argv[2], NULL);
  double compoundFrequency = strtod(argv[3], NULL);
  double time = strtod(argv[4], NULL); 

  
}
