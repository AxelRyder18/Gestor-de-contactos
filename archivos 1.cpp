#include <stdio.h>

int main(){
	char pal[100];
	fprintf(stdout,"Como te llamas?: \n"); //salida estandar stdout
	fscanf(stdin,"%s",pal); //leer con formato de la salida estandar stdin
	fprintf(stdout,"hola, %s \n",pal); //escriba en el archivo stdout
	//stdout y stdin son archivos especiales, no hay que abrirlos.
	
	
	
return 0;	
}
