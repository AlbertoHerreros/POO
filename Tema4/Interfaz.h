//Ahorra código definiendo métodos para otras clases

class A  {   ///< INTERFAZ
  public:
    virtual tipo <metodo> ()=0;
}

class B: public A {
  virtual tipo <metodo> (){
    ///< código
  }
}

class C: public A {
  virtual tipo <metodo> (){
    ///< código
  }
}

///< Las clases B y C tienen métodos comunes y se usa una clase A tipo interfaz para ello
