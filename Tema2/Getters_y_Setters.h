//.h
public:
	void SetDato( std::string dato );
    	std::string GetDato() const;
private:
	std::string _dato="";

//.cpp

std::string Clase::GetDato() const{
    return _dato;
}

void Clase::SetDato( std::string dato ){
    _dato = dato;
}

//---------------------------------------------------------------------------------------------------------------------------------------

//EJEMPLO CON EXCEPCIONES

std::string Clase::GetDireccion() const{
    return _direccion;
}
void Clase::SetDireccion( std::string direccion ){
    if( direccion == "" ){
        throw string("La dirección introducida no puede ser un espacio en blanco");
    }
    else{
        _direccion = direccion;
    }
}

//---------------------------------------------------------------------------------------------------------------------------------------
//main.cpp

try{
	Clase c;
	c.SetDireccion("x");
	
}catch( const std::string &e ){
	std::cerr << e << std::endl;
	}

