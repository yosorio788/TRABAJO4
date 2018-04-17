
#include <iostream>
#include <string>
using namespace std;

struct Promedio{
  float Nota1;
  float Nota2;
  float Nota3;
};

struct Alumno{
  string Nombre;
  char Sexo;
  int Edad;
  Promedio PromAlumno; 
}alumno1;

void CargarDatos(Alumno &alumno1){ 
  
  printf("Ingrese el nombre del alumno: ");
  scanf("%d",&alumno1.Nombre);
  printf("Ingrese el sexo del alumno: ");
  scanf("%d",&alumno1.Sexo);
  printf("Ingrese la edad del alumno: ");
  scanf("%d",&alumno1.Edad);
  printf("Nota1: ");
	scanf("%d",&alumno1.PromAlumno.Nota1); 
  printf("Nota2: ");
  scanf("%d",&alumno1.PromAlumno.Nota2);
 	printf("Nota3: ");
 scanf("%d",&alumno1.PromAlumno.Nota3);
}

float CalcularProm(Alumno alumno1){
  float fProm;
  fProm = (alumno1.PromAlumno.Nota1 + alumno1.PromAlumno.Nota2 + alumno1.PromAlumno.Nota3)/3;
  return fProm;
}

void MostrarTodosDatos(Alumno alumno1, float fProm){
  printf("Nombre: %s\n",alumno1.Nombre << endl;
  printf("Sexo: %s\n",alumno1.Sexo << endl;
 	printf("Edad:%d\n "alumno1.Edad << endl;
  printf("Promedio:%f\n "  fProm << endl;
}

int main(){
  float fProm;
  CargarDatos(alumno1);
  fProm = CalcularProm(alumno1);
  MostrarTodosDatos(alumno1, fProm);
}
