//Ejemplo para crear un operador de clase

//.h

class Fecha {
public:
    Fecha()=default;
    Fecha(int dia, int mes, int year);
    Fecha(const Fecha& orig);
    
    void SetYear(int year);
    int GetYear() const;
    void SetMes(int mes);
    int GetMes() const;
    void SetDia(int dia);
    int GetDia() const;
    
    bool operator< ( const Fecha &otra );  //Definimos el operador "menor"
  
private:
    int _dia=0;
    int _mes=0;
    int _year=0;
};
-------------------------------------------------------------
//.cpp

/*
Para saber si una fecha es menor que otra realizaremos estos cálculos con los datos y los compararemos.
devolverá si es menor o no
*/

bool Fecha::operator <(const Fecha& otra){
    long numEsta = _year*10000 + _mes*100 +_dia;
    long numOtra = otra._year*10000 + otra._mes*100 + otra._dia;
    
    return (numEsta < numOtra);
}

/*
Si queremos usarlo, solo tendremos que usar el operador con 2 datos tipo fecha(2 objetos fecha) tal que así:

	if(f1<f2){
		cout << "f1 menor f2";
			}
*/
