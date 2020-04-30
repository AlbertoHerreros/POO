#include <sstream>

//.h

 std::string toCSV(); ///< Función que devuelve los datos de una clase en formato CSV

//.cpp

std::string Clase::toCSV(){
  std::stringstream ss;
  ss << <var1> ";" << <var2> << ";" << <varx> ;
  return ss.str();
}

-------------------------------------------------------------------------------------------------------------------------------------------

//.h

void fromCSV( std::string& datos );

//.cpp

void Clase::fromCSV( std::string& datos)
{
   std::stringstream aux;

   aux << datos;

   getline ( aux, this-><var1string>, ';' ); ///< Así ignoramos en la entrada de palabras el ";"
   getline ( aux, this-><var2string>, ';' );
   aux >> this-><var3num>;
   aux.ignore (1);      ///< En la entrada de números ignoramos un espacio para saltar el ";"
   aux >> this-><var4num>;
   aux.ignore (1);
   getline ( aux, this->_incidenciasUltimaMision );
}
