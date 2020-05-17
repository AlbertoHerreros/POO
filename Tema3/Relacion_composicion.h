//Objetos de clase A están formados por objetos de clase B
/*
-Semánticamente es más fuerte que la agregación
-Normalmente, el objeto de clase A crea los objetos de clase B
-Al destruir un objeto de clase A, los objetos de clase B que forman parte de él también se destruyen
*/

CLASE A <NEGRO>--------------------- CLASE B
                    * <rol>

class B{
  private:
    ///< Atributos clase B
}

class A{
  private:
    ///< Atributos clase A
    B *_b = nullptr;
}


///< El atributo de clase B se crea en el constructor y se destruye en el destructor

A::A(): _var( " "," " ), _b( new B() ){} ///< En el constructor de clase A se crea también el de la B

A::~A(){
  if( _b != nullptr )
  {
    delete _b;
    _b = nullptr;
  }
}

/*
-Los objetos componentes los crea la clase compuesta
-Se referencian en la clase compuesta usando atributos con el tipo objeto o punteros
-Se pueen utilizar estructuras de datos para almacenar varios componentes como array de punteros.
-La clase compuesta será la encargada de destruir los objetos componentes(si se definen como atributos de tipo objeto, 
estos se destruirán automaticamente al destruirse el objeto contenedor)
*/

