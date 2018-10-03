#include<stdlib.h>
#include<stdio.h>
#include<math.h>

#include "colorUtils.h"

int main(int argc, char **argv) {

  int a = 10, b = 20, c = 30;
  int numPassed = 0;
  int numFailed = 0;

  printf("TESTING: max(%d,%d,%d): ", a, b, c);
  if( max(a, b, c) != 30 ) {
    printf("FAILED\n");
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", a, c, b);
  if( max(a, c, b) != 30 ) {
    printf("FAILED\n");
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", b, a, c);
  if( max(b, a, c) != 30 ) {
    printf("FAILED\n");
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", b, c, a);
  if( max(b, c, a) != 30 ) {
    printf("FAILED\n");
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", c, a, b);
  if( max(c, a, b) != 30 ) {
    printf("FAILED\n");
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", c, b, a);
  if( max(c, b, a) != 30 ) {
    printf("FAILED\n");
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", a, a, c);
  if( max(a, a, c) != 30 ) {
    printf("FAILED\n");
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", a, c, a);
  if( max(a, c, a) != 30 ) {
    printf("FAILED\n");
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", c, a, a);
  if( max(c, a, a) != 30 ) {
    printf("FAILED\n");
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", c, c, c);
  if( max(c, c, c) != 30 ) {
    printf("FAILED\n");
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  //TODO: add your test cases here

  printf("Number Test Cases Passed: %6d\n", numPassed);
  printf("Number Test Cases Failed: %6d\n", numFailed);
  printf("Percent Passed:           %6.2f\n", 100.0 * numPassed / (numPassed + numFailed));

  return 0;

}
