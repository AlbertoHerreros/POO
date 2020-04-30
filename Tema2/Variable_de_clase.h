static <tipo> dato=;

variable de clase que siempre tendrá el valor que se le vaya asignando

//.h
public:
  static int _numTemazos;
------------------------------------------------------------------------------------------------------------------------------------
//.cpp

int Temazo::_numTemazos = 0;

Temazo::Temazo(){
     _titulo="";
     _interprete="";
     _duracion=0;
     _puntuacion=0;
     _nombreUltimoGarito="";
     _fechaUltimoUso=Fecha();
     _idTemazo=_numTemazos;
    _numTemazos++;   
}
-------------------------------------------------------------------------------------------------------------------------------------
Ejemplo: numTemazos es una variable de clase que contará el nº que determinará el orden de creación, asi como puede ser usado
para identificar temazos

