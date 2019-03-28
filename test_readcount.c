#include "types.h"
#include "stat.h"
#include "user.h"
 
int main(void) {
  printf(1, "It ran %d times\n", readcount());
  exit();
}