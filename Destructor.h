
//.h

virtual Clase::~Clase();

//.cpp

Clase::~Clase() {

    // Liberamos la memoria que se reservó en el constructor

    if (<var>) {

        delete [] <var>;

        <var> = nullptr;

    }

}

// El destructor de clase destruye los objetos estáticos automáticamente, en cambio para los dinámicos es necesario imponer el código 
// que lo realice. En los dinámicos se usa para borrar los vectores de punteros a objetos
