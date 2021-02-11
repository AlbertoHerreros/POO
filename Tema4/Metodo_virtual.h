class A{
  virtual string metodo(){
  return "clase A";
  }
}

class B: public A{
  virtual string metodo() override{
  return "clase B";
  }
}

//Dependiendo del tipo de objeto nos devolverá un valor u otro
//Si pedimos a un objeto estático B que nos diga qué es, dirá que es un objeto de la clase A
//En cambio si el objeto es dinámico, nos dirá que pertenece a la clase B
