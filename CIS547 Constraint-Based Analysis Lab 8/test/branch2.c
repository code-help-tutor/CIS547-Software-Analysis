WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#include "prelude.h"

int main(int argc, char **argv) {
  int x = tainted_input();
  int y;
  if (1) {
    y = 0;
  } else {
    y = 100;
  }
  int z = 4 / y;
}
