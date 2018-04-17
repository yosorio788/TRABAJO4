#include <stdio.h>
#include <stdlib.h>
struct competidor{
	char nombre[20];
	int edad;
	char sexo[20];
	char club[20];
	
}competir;
void pedirdatos();
void mostrardatos();
int main(){
	
	printf("ingrese un nombre: \n");
	fgets(competir.nombre,20,stdin);
	printf("ingrese edad: \n");
	scanf("%d",&competir.edad);
	printf("ingrese sexo:\n");
	fflush(stdin);
	fgets(competir.sexo,20,stdin);
	printf("ingrese el club:\n");
	fgets(competir.club,20,stdin);
	
	if(competir.edad>20){
		printf("es mayor\n");
	}else if(competir.edad<=15&&competir.edad<=20){
		printf("es un infantil\n");
	}
	else{
		printf("es un joven\n");
	}
	
	system("pause");
	return 0;
}
 
void pedirdatos(){
		printf("ingrese un nombre: \n");
	fgets(competir.nombre,20,stdin);
	printf("ingrese edad: \n");
	scanf("%d",&competir.edad);
	printf("ingrese sexo:\n");
	fflush(stdin);
	fgets(competir.sexo,20,stdin);
	printf("ingrese el club:\n");
	fgets(competir.club,30,stdin);
	
}

void mostrardatos(){
	printf("ingrese un nombre: \n");
	fgets(competir.nombre,20,stdin);
	printf("ingrese edad: \n");
	scanf("%d",&competir.edad);
	printf("ingrese sexo:\n");
	fflush(stdin);
	fgets(competir.sexo,20,stdin);
	printf("ingrese el club:\n");
	fgets(competir.club,20,stdin);	
	
	
	
}
