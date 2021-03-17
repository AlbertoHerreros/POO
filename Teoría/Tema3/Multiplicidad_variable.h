class A
{
  public:
    static const int _MAX_VARIABLES_ = 10; ///< Nº máximo elementos
    
  private:
    ///< Atributos
    B* _elementos[_MAX_VARIABLES_];
    int _nElementos = 0;
}

//@brief CONSTRUCTOR POR DEFECTO CON MULTIPLICIDAD VARIABLE

A::A():__nElementos(0)
{
  int i;
  for( i=0; i < _MAX_VARIABLES_; i++ )
  {
    _elementos[i] = nullptr;
  }
}
//--------------------------------------------------------------------------------------------------------------------
void A::addB (B* b){
  if (_nElementos == _MAX_VARIABLES_ )
  {
    throw std::length_error( " " );
  }
  _elementos[_nElementos] = b;
  _nElementos++;
}



B& A::getB (int cual) const{
  if( ( cual <=0 ) || (cual > _nElementos ) )
  {
    throw std::out_of_range("");
  }
  return *(_elementos[cual-1]);
}
