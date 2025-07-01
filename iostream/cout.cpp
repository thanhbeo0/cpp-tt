#include <iostream>

inline int add(int x, int y){
  return x + y;
}

int main(int argc, char* argv[]){
  int x = 5;
  std::cout << add(x,5) << std::endl;
  //Output: 10
  std::cout << &(x) << std::endl; // print address of x
  //Output: 0x000500
  std::cout <<
    "hello"
    <<
    ", world" << std::endl;
  //Output: hello, world
  std::cout << "hello, ";
  std::cout << "world" << std::endl;
  //Output: hello, world
  return 0;
}
