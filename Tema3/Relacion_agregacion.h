//Objetos de clase A poseen(aunque pueden compartir) objetos de clase B

/*
-Semánticamente es una relación más fuerte que la asociación
-Los objetos de la clase B pueden existir por sí solos
-Relación establecida a través de atributos
-Los objetos se crean y destruyen por separado
*/

class B {
private:
  ///< atributos clase B
}

class A{
  private:
  B *_pb1 = nullptr; ///< Puntero al primer objeto clase B
  B *_pb2 = nullptr; ///< Puntero al segundo objeto clase B
  ///< atributos clase A
}


//Representa con rombo transparente(blanco) en la clase que recibe objetos de la otra

CLASE A <blanco>---------------  CLASE B
            pb1 pb2
            
            
A::~A(){  
_pb1 = _pb2 = nullptr;    ///< Asigna nullptr pero no destruye
}

Para destruir todo: Destruyes objeto clase A y luego cada objeto de clase B
