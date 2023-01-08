#include "Matrix.h"
#include <cassert>
#include <iostream>

// Print Matrix
#define PRINT(m)                                                               \
  std::cout << #m << ":\n";                                                    \
  for (size_t c = 0; c < m.getCols() * 2 + 1; c++) {                           \
    std::cout << "-";                                                          \
  }                                                                            \
  std::cout << "\n";                                                           \
  m.print();                                                                   \
  for (size_t c = 0; c < m.getCols() * 2 + 1; c++) {                           \
    std::cout << "-";                                                          \
  }                                                                            \
  std::cout << "\n";

int main() {
  srand(time(0));

  Matrix<2, 2> m1;
  Matrix<2, 2> m2;

  m1.random();
  m2.random();
  
  PRINT(m1);
  PRINT(m2);

  Matrix<2,2> m3 = m1.copy();

  m3 *= m2;

  PRINT(m3);
  
  return 0;
}
