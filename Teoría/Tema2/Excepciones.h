EXCEPCIONES EN C++

//.cpp

Cuando queramos que el programa lance una excepción durante la ejecución, debemos poner donde
queremos que se lance la excepción:

throw string("");

//.cpp(main)

Donde queramos someter al fragmento de código ante estas excepciones, debemos de hacer lo siguiente:

try{
//FRAGMENTO DE CÓDIGO QUE UTILIZAREMOS
	}catch(const string &e){
	std::cout << e; //Soltaremos la excepción
}

///Nota: Son excepciones tipo string
