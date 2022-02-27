#include <stdio.h>
main ()
{

	int opcion;
	int volver;
	int saldo=10000;
	int nipuser;
	int nip=1234;
   
	
	
	printf("\nBanco ETEComputo");
	printf("\n1. Operacion con tarjeta");
	printf("\n2. Operacion sin tarjeta");
	printf("\n3. Abonar");
	printf("\n4. Pago de servicios");
	printf("\n5. Salir"),
	printf("\n¿Que operacion desea relizar?");
	scanf("%d", &opcion);
	switch (opcion)
	
	

	{//inicio de switch
	
	
	
	
	
	
	
	
	case 1:
		
		printf("\nIntrodusca su nip");
	scanf("%d", &nipuser);
	if(nip==nipuser);
	
		{
		  		printf("Bienvenido a operacion con tarjeta");
			Menu_1:
				printf("\n1.Consulta de Saldo");
				printf("\n2.Retiro");
				printf("\n3.Abono");
				printf("\n4.Cambio de NIP");
				printf("\n5.Pago Servicios");
				printf("\n6.Salir");
				printf(" Que operacion desea realizar");
				int respm1;
				scanf("%d",&respm1);
				switch (respm1)
				
				{//inicio switch m1
				case 1:{printf("\nSu saldo es: %d", saldo);
				printf("\nDesea hacer otra operacion 1-Si O-No");
				scanf("%d" , &volver);
				if(volver==1)
					goto Menu_1;
				else
					goto Salir;
					
						break;}
						
					default: printf("Operacion no valida");
					
				
					
					
		
				}//Cerrar switch M1	
				break;	
		
		
		}		
				
					
			
		
	
			
	case 2:
		
		{
			//inicio de switch (mr)
			Menu_2:
				printf("\nMenu Retiro");
				printf("\n1.100");
				printf("\n2.500");
				printf("\n3.1000");
				printf("\n4.3000");
				printf("\n5.Otra cantidad");
				printf("\n6.Salir");
				printf("\nQue operacion desea realizar");
				int mr;
				scanf("%d", &mr);
				switch(mr)
				{
				
				case 1: {
						saldo=saldo-100;
						printf("Su nuevo saldo es: %d", saldo);
						printf("\nDesea hacer otra operacion 1-Si O-No");
						scanf("%d" , &volver);
						if(volver==1)
						goto Menu_1;
						else
						goto Salir;
						}
				case 2: {
						saldo=saldo-500;
						printf("Su nuevo saldo es: %d", saldo);
						printf("\nDesea hacer otra operacion 1-Si O-No");
						scanf("%d" , &volver);
						if(volver==1)
						goto Menu_1;
						else
						goto Salir;
						}
				case 3: {
						saldo=saldo-1000;
						printf("Su nuevo saldo es: %d", saldo);
						printf("\nDesea hacer otra operacion 1-Si O-No");
						scanf("%d" , &volver);
						if(volver==1)
						goto Menu_1;
						else
						goto Salir;
						}
				case 4: {
						saldo=saldo-3000;
						printf("Su nuevo saldo es: %d", saldo);
						printf("\nDesea hacer otra operacion 1-Si O-No");
						scanf("%d" , &volver);
						if(volver==1)
						goto Menu_1;
						else
						goto Salir;
						}
				case 5: {
					    saldo=saldo;
					  
						printf("\nDesea hacer otra operacion 1-Si O-No");
						scanf("%d" , &volver);
						if(volver==1)
						goto Menu_1;
						else
						goto Salir;
						}
						
				default: printf("Operacion no valida");
				
					
				}
				
				
			
			printf("Bienvenido a operacion S/tarjeta");
			break;
		//fin de switch (mr)
		}
		
		
case 3:
		
		{
			//inicio switch m3
			Menu_3:
				printf("\nMenu Abono");
				printf("\n1.100");
				printf("\n2.500");
				printf("\n3.1000");
				printf("\n4.3000");
				printf("\n5.Otra cantidad");
				printf("\n6.Salir");
				printf("\n¿Que operacion desea realizar?");
				int respm3;
				scanf("%d",&respm3);
				switch (respm3)
				{
					//inicio switch m3
				case 1: {
						saldo=saldo+100;
						printf("Su nuevo saldo es: %d", saldo);
						printf("\nDesea hacer otra operacion 1-Si O-No");
						scanf("%d" , &volver);
						if(volver==1)
						goto Menu_1;
						else
						goto Salir;
						}
				case 2: {
						saldo=saldo+500;
						printf("Su nuevo saldo es: %d", saldo);
						printf("\nDesea hacer otra operacion 1-Si O-No");
						scanf("%d" , &volver);
						if(volver==1)
						goto Menu_1;
						else
						goto Salir;
						}
				case 3: {
						saldo=saldo+1000;
						printf("Su nuevo saldo es: %d", saldo);
						printf("\nDesea hacer otra operacion 1-Si O-No");
						scanf("%d" , &volver);
						if(volver==1)
						goto Menu_1;
						else
						goto Salir;
						}
				case 4: {
						saldo=saldo+3000;
						printf("Su nuevo saldo es: %d", saldo);
						printf("\nDesea hacer otra operacion 1-Si O-No");
						scanf("%d" , &volver);
						if(volver==1)
						goto Menu_1;
						else
						goto Salir;
						}
				
						
				default: printf("Operacion no valida");
				
					
				}
				
				
			
			printf("Bienvenido a operacion S/tarjeta");
			break;
		//Cerrar switch M3	
		}
		
case 4:
		{
		//inicio switch m4
			Menu_4:
				
				printf("\nMenu Pago de Servicios");
				printf("\n1.Luz");
				printf("\n2.Agua");
				printf("\n3.Sky");
				printf("\n6.Salir");
				printf("\nQue operacion desea realizar");
				int respm4;
				scanf("%d",&respm4);
				switch (respm4)
			
		default: printf("Operacion no valida");
		
		printf("Bienvenido a operacion S/tarjeta");
			break;
		//Cerrar switch M4	
		}
		
		
		
		
	}//fin de switch
	Salir:
	
	return 0;
} 
