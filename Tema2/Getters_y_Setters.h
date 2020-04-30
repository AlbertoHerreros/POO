//.h
public:
	void SetDato(string dato);
    	string GetDato() const;
private:
	string _dato="";

//.cpp

string Garito::GetDato() const{
    return _dato;
}

void Garito::SetDato(string dato){
    this->_dato=dato;
}

---------------------------------------------------------------------------------------------------------------------------------------

//EJEMPLO CON EXCEPCIONES

string Garito::GetDireccion() const{
    return _direccion;
}
void Garito::SetDireccion(string direccion){
    if(direccion==""){
        throw string("La direccion introducida no puede ser un espacio en blanco");
    }
    else{
        this->_direccion=direccion;
    }
}

