
#include<iostream>
#include<conio.h>
using namespace std;

struct Empleado{
	char nombre[20];
	float salario;	
}e[100];

int main(){
	int n_empleados,mayor=0,menor=999999,posM,posm;
	
	printf("Digite el numero de empleados: "); 
	scanf("%d",&n_empleados);
	
	for(int i=0;i<n_empleados;i++){
		fflush(stdin); //Vaciar el buffer y poder digitar mas valores
		printf("Nombre: "); 
		scanf(e[i].nombre,20,"\n");
		printf("Salario: ");
		scanf(e[i].salario);
		
		//Empleado con mayor salario
		if(e[i].salario > mayor){
			mayor = e[i].salario;
			posM = i;
		}
		//Empleado con menor salario
		if(e[i].salario < menor){
			menor  = e[i].salario;
			posm = i;
		}		
		cout<<"\n";
	}
	
	printf("\nEmpleado con mayor salario: ");
	printf("Nombre: "<<e[posM].nombre);
	printf("Salario: "<<e[posM].salario);
	
	printf("\nEmpleado con menor salario: ");
	printf("Nombre: "<<e[posm].nombre);
	printf("Salario: "<<e[posm].salario);
	
	getch();
	return 0;
}
