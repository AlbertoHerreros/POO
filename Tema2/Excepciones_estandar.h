#include <stdexcept>

metodoCualquiera(){
  throw std::invalid_argument("[clase.cpp/metodoCualquiera]: Argumento inválido");
}

//------------------------------------------------------------------------------
//main.cpp

try{
  //FRAGMENTO DE CÓDIGO
}catch (std::invalid_argument &e){
  std::cerr << " " << e.what();
}
