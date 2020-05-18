string cad, nombreArchivo="archivo.csv";
int cont = 0;
Clase objetos[20];

ifstream fe;

fe.open( nombreArchivo.c_str() );

if (fe.good){
//Hasta que acabe
  while( !fe.eof() ){
    getline (fe,cad);       //línea
    if(cad!=""){      //no cogemos en blanco
    objetos[cont++].fromCSV(cad);       
    cad="";         //evitamos duplicar líneas
  }
}
fe.close();
