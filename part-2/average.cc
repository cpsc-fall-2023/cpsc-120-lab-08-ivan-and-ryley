// Ivan Cervantes
// omarivan570@csu.fullerton.edu
// @ivanc570
// Partners: @delvalleryley
//
// Command Line Mad Lib
//

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }
  double sum{0.0};

  for (int i = 1; i < arguments.size(); ++i) {
    sum += std::stod(arguments.at(i));
  }

  double average{sum / (--argc)};
  std::cout << "average = " << average;

  return 0;
}