class A{
  public int _a;
    A& operator =( A& orig ){
    
      if( this != orig ){
          _a = orig._a;
      }
      return( *this );
    }
  
};
///-------------------------------------------------------------------------
class B: public A{
  public int _b;
    B& operator =( A& orig ){
    
      if( this != orig ){
          this->A::operator =( orig );
          _b = orig._b;
      }
      return( *this );
    }
  
};
