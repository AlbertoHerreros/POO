#include <stdexcept>

throw std::invalid_argument("");

catch (std::invalid_argument &e){
  std::cerr << " " << e.what();
}
