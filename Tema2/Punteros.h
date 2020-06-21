Clase w[10]; //Inicializados con constructor por defecto
w[0] = Clase();
///---------------------------------------------------------
Clase* v[10]; //No inicializados
v[0] = new Clase();

for(int i=0;i<10;i++){
        if( v[i]!=nullptr ){
            delete v[i];
            v[i]=nullptr;
        }
    }
