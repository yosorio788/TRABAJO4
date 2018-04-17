#include  <stdio.h>
#include <stdlib.h>
	
	
	
	
	
	
	struct proveedor{
	char nombre[35];
	int cantidad_vendida,precio_unitario,totales;
	}proveedorsitos[50];
	
	
	

	void Menu();
	void recibir_proveedorsitos();
	bool buscar_proveedor(proveedor [],int );
	void mayorymenor_proveedor(int ,proveedor[]);
	
	
	int a,i,j,ban,cantidad,precio,aux=0,menor=9999,base,base1;
	
	int main(){
	
	Menu(); 
	
	return 0;
	}
	
	
	
	void Menu(){
	int opcion;
	do{
	printf("\n MENU\n");
	printf("1. Visualizar datos de un proveedor.\n");
	printf("2. registrar proveedores.\n");
	printf("3. visualizar Proveedor mas barato y Proveedor mas costoso\n");
	printf("0. Salir\n");
	printf("Ingrese un opcion: \n");
	scanf("%d", &opcion);
	switch(opcion){
	case 1: buscar_proveedor(proveedorsitos,a) ;
	break;
	case 2: recibir_proveedorsitos();
	break;
	case 3: mayorymenor_proveedor(a,proveedorsitos);
	break;
	case 0: exit(0);
	break;
	default: printf("la es Opcion Invalidad\n");
	}
	
	}while(opcion != 0);
	
	}
	
	
	void recibir_proveedorsitos(){
	printf("\n ingrese el numero de proveedores a registrar: \n");
	scanf("%d",&a);
	for( i=0 ; i<a ; i++ ){
	
	printf("\n ingrese el nombre del proveedor #%d:\n",i+1);
	fflush(stdin);
	fgets(proveedorsitos[i].nombre,35,stdin);
	printf("ingrese la cantidad total de unidades a comprar:\n");
	scanf("%d",&proveedorsitos[i].cantidad_vendida);
	printf("\n ingrese el precio unitario del producto :\n");
	scanf("%d",&proveedorsitos[i].precio_unitario);
	cantidad=proveedorsitos[i].cantidad_vendida;
	precio=proveedorsitos[i].precio_unitario;
	proveedorsitos[i].totales=cantidad*precio;
	system("cls");
	
	}
	
	printf("\n Proveedores resgistrados con ¡Exito!");
	}
	
	 
	bool buscar_proveedor(proveedor [],int ){
	bool encontrado;
	char datoBuscar[35];
	printf("\n Ingrese nombre del proveedor a buscar: \n");
	fflush(stdin);
	fgets(datoBuscar, 35, stdin);
	for(i = 0; i < a; i++){
	
	while(proveedores[i].nombre[j] != '\n'){
	if(proveedorsitos[i].nombre[j] != datoBuscar[j]){
	encontrado = false;
	
	}
	j += 1;
	}
	ban=i;
	}
	encontrado = true;
	system("cls");
	if (encontrado==true){
	
	printf("\n Nombre del proveedor: %s",proveedorsitos[ban].nombre);
	printf("\n Cantidad de la compra: %d",proveedorsitos[ban].cantidad_vendida);
	printf("\n valor unitario: %d",proveedorsitos[ban].precio_unitario);
	printf("\n Precio total: %d",proveedorsitos[ban].totales);
	
	}
	
	}
	
	
	void mayorymenor_proveedor(int ,proveedor[]){
	
	for(int i=0; i<a; i++){
	if(proveedores[i].totales>aux){
	aux = proveedores[i].totales;
	base=i;
	}
	}
	for(int i=0; i<a; i++){
	if(proveedores[i].totales<menor){
	menor = proveedores[i].totales;
	base1=i;
	}
	}
	system("cls");
	printf("\n el surtidor mas costoso es : %s ",proveedores[base].nombre);
	
	printf("\n su costo es de : %d ",proveedores[base].totales);
	printf("\n");
	
	
	printf("\n el surtidor mas economico es : %s ",proveedores[base1].nombre);
	printf("\n su costo es de : %d ",proveedores[base1].totales);
	
	printf("\n\n");

	}
