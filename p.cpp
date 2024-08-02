#include <iostream>

int de() {
  int* p;
  return *p; 
}

int main() {
    std::cout << de();
    return 0;
}
