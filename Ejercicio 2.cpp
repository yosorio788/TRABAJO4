

#include<iostream>
#include<conio.h>

using namespace std;

struct Alumno{
	char nombre[20];
	int grado;
	int edad;
	float promedio;
}alumnos[3];

int main(){
	int mayor = 0,pos=0;
	
	//Pedir los datos para 3 alumnos
	for(int i=0;i<3;i++){
		fflush(stdin);
		printf("Nombre: ");
		scanf(alumnos[i].nombre,20,'\n');
		printf("Edad: ");
		scanf(alumnos[i].edad);
		printf("Promedio: ");
		scanf(alumnos[i].promedio;
		
		if(alumnos[i].promedio > mayor){
			mayor = alumnos[i].promedio; //sacamos el mayor promedio
			pos = i; // guardamos la posicion del mayor promedio
		}
		cout<<"\n";
	}
	
	//Imprimimos los datos del alumno con el mejor promedio
	printf("\nAlumnos con el mejor Promedio: \n";
	printf("Nombre: ",alumnos[pos].nombre);
	printf("Edad: ",alumnos[pos].edad);
	printf("Promedio: ",alumnos[pos].promedio);
	
	getch();
	return 0;
}
