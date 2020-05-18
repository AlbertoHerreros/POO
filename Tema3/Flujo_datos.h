#include <fstream>

ofstream f;
string nombreArchivo = "prueba.txt";
f.open (nombreArchivo.c_str() );

if ( f.good() ){
for(int i=0;i<nLineas;i++){
  f << i+1 << "-" << lineas[i] << endl;
  }
  f.close();
}
else{
  cerr << "Error apertura";
}
//--------------------------------------------------------------------------------------------------------------------------------------
//CSV

ofstream f;
string nombreArchivo = "elementosCSV.txt";
f.open (nombreArchivo.c_str() );

if ( f.good() ){
for(int i=0;i<nLineas;i++){
  f << elementos[i].toCSV() << endl;
  }
  f.close();
}
else{
  cerr << "Error apertura";
}
