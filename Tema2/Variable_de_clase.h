static <tipo> dato;
<tipo> Clase::dato=;

variable de clase que siempre tendrá el valor que se le vaya asignando

//.h
public:
  static int _numObjetos;
------------------------------------------------------------------------------------------------------------------------------------
//.cpp

int Clase::_numObjetos = 0;

Clase::Clase(){
     _titulo="";
     _interprete="";
     _duracion=0;
     _puntuacion=0;
     _nombreUltimoGarito="";
     _fechaUltimoUso=Fecha();
     _idObjeto = _numObjetos; //La id del objeto será su posición -> _numObjetos del momento
    _numObjetos++;   //_numObjetos++ porque crece en 1 el nº de objetos del mismo tipo
}
-------------------------------------------------------------------------------------------------------------------------------------
Ejemplo: _numObjetos es una variable de clase que contará el nº que determinará el orden de creación, asi como puede ser usado
para identificar Objetos

