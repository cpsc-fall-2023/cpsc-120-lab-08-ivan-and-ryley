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
  std::vector<std::string> arguments(argv, argv + argc);

  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguments";
    return 1;
  }

  std::string command{arguments.at(0)};
  std::string first{arguments.at(1)};
  std::string second{arguments.at(2)};
  std::string third{arguments.at(3)};

  std::cout << "Your order:\nA " << first << " sandwich on " << second
            << " with " << third << ".\n";
  return 0;
}