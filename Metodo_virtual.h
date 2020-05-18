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
