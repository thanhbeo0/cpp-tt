#include <iostream>
/*
* We import the iostream header file to use the std::cout and std::endl functions;
* We will print the line "hello, world"
* We use the left shift operator "<<" to place the text.
*/

int main(int argc, char* argv[]){ // Parameters passed in
  //This is simple cout
  std::cout << "hello, world" << std::endl; // print the line "hello world"
  //Output:hello, world
  
  //This is long cout
  std::cout << "hello" << "," << " " << "world" << std::endl;
  //Output:hello, world

  /*
    * std::cout is used to print values
    * used to end and "\n" and it also frees the buffer
  */
  return 0;
}
