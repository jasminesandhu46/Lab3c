// Author: Jasmine Sandhu jps6818@psu.edu
// Collaborator: Nick Orf nco5067@psu.edu
// Collaborator: Emma Dischner etd5123@psu.edu
// Collaborator: Hao Chen hzc5424@psu.edu
// Section: 10
// Breakout: 2

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(int n) {
  if (n <= 0) {
    return 0;
  }
  else {
    return n + sum_n(n-1);
  }
}

void print_n(const char *s, int n) {
  if (n == 0) {
    return;
  }
  else {
    printf("%s\n", s);
    print_n(s, n-1);
  }
}

int main(void) {
  char *n = readline("Enter an int: ");
  int ni = atoi(n);
  printf("sum is %d.\n",sum_n(ni));
  char *s = readline("Enter a string: ");
  print_n(s, ni);
}