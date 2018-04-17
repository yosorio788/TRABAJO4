

#include<iostream>
#include<conio.h>
using namespace std;

struct Promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct Alumno{
	char nombre[20];
	char sexo[10];
	int edad;
	struct Promedio prom;
}alumnos[100];

int main(){
	int n_alumnos,posM=0;
	float promedio_alumno[100],mayor=0;
	
	printf("Digite el numero de alumnos: ");
	scanf("%d", &n_alumnos;
	
	for(int i=0;i<n_alumnos;i++){
		fflush(stdin);
		printf("Nombre: ");
		scanf(alumnos[i].nombre,20,'\n');
		printf("Sexo: "); 
		scanf(alumnos[i].sexo,10,'\n');
		printf"Edad: ");
		scanf(alumnos[i].edad);
	
		printf("Notas del Examen:\n");
		printf("Nota1: "); 
		scanf(alumnos[i].prom.nota1);
		printf("Nota2: "); 
		scanf(alumnos[i].prom.nota2);
		printf("Nota3: "); 
		scanf(alumnos[i].prom.nota3);
	
		//Sacando el promedio del alumno
		promedio_alumno[i] = (alumnos[i].prom.nota1+alumnos[i].prom.nota2+alumnos[i].prom.nota3)/3;
		
		if(promedio_alumno[i] > mayor){
			mayor = promedio_alumno[i];
			posM = i;
		}
		cout<<"\n";
	}
	
	printf("\n\ostrando Datos del alumno con mejor Promedio \n");
	printf("Nombre: ");
	scanf(alumnos[posM].nombre<<endl);
	printf("Sexo: ");
	scanf(alumnos[posM].sexo<<endl);
	printf("Edad: ");
	scanf(alumnos[posM].edad<<endl);
	printf("Promedio: ",promedio_alumno[posM];
		
	getch();
	return 0;
}
