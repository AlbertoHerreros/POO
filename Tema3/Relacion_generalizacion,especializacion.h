//La clase B es un subtipo de la clase A
/*
-B hereda A
-Semánticamente, la clase B es una especialización de la clase A
-B incluye atributos y métodos de A además de los propios
-B puede redefinir métodos de a. OVERRIDE
-Reutilización de código
-Una clase definida como final no puede tener derivadas
*/

class A
{
  protected: ///< Atributos
}

class B: public A
{
  
}

//------------------------------------------------------------------------------------------------------------------------------------
//Constructor parametrizado de B

B::B( int a, int b, int c): A( a,b ), _c(c){  ///< Los atributos de A se encajan de este modo

}
//------------------------------------------------------------------------------------------------------------------------------------
// Constructor copia de B

B::B( const B& orig ): A(orig), _c(orig._c){

}
//------------------------------------------------------------------------------------------------------------------------------------

PERSONA <------ GUERRERO <------- LANCERO

Creación: se crean de persona a lancero
Destrucción: se destruyen de lancero a persona
//------------------------------------------------------------------------------------------------------------------------------------
A& A::operator= (const A& orig){
  if( this!=&orig)
  {
  _a = orig._a;
  }
  return *this;
}

B& B::operator= (const B& orig){
  if( this!=&orig)
  {
  this->A::operator= (orig);
  _c = orig._c;
  }
 return *this;
}











