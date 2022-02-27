#include <stdio.h>
main ()

{
	
	int opcion;
	int volver;
	int saldo=10000;
	int nipuser;
	int nip=1234;
	int retiro;
	int abono;
	int salir;
	
   
	printf("\nPorfavor introdusca su NIP\n");
	scanf("%d", &nipuser);
	if(nip==nipuser){
	
	
	printf("\nBienvenido a BANCETEC");
	printf("\n1. Operacion con tarjeta");
	printf("\n2. Operacion sin tarjeta");
	printf("\n5. Salir"),
	printf("\n¿Que operacion desea relizar?");
	scanf("%d", &opcion);
	switch (opcion){//inicio de switch
	
						
	
	
	
	
	
	
	case 1:
		
		
	
		{
		  		printf("Bienvenido a operacion con tarjeta");
			Menu_1:
				
				printf("\n1.Consulta de Saldo");
				printf("\n2.Retiro");
				printf("\n3.Abono");
				printf("\n4.Cambio de NIP");
				printf("\n5.Pago Servicios");
				printf("\n6.Salir");
				printf("\n¿Que operacion desea realizar?");
				int respm1;
				scanf("%d",&respm1);
				switch (respm1)
				
				{//inicio switch m1
				case 1:{printf("\nSu saldo es: %d", saldo);
				printf("\n¿Desea hacer otra operacion?");
				printf("\n.Si=1");
				printf("\n.No=2"); 
				scanf("%d",&volver);
				if(volver==1)
					goto Menu_1;
			
				else printf("Gracias por su preferencia");
			
							break;}
							
				case 2:{printf("\n¿Cuanto desea retirar?");
						printf("\nMenu Retiro");
						printf("\n1.100");
						printf("\n2.500");
						printf("\n3.1000");
						printf("\n4.3000");
						printf("\n5.Otra cantidad");
						printf("\n6.Salir");
						scanf("%d",&opcion);
							switch(opcion)
							{
				
							case 1: {
									saldo=saldo-100;
									printf("Su nuevo saldo es: %d", saldo);
									printf("\n¿Desea hacer otra operacion?");
									printf("\nSi=1");
									printf("\nNo=2"); 
									scanf("%d",&volver);
									if(volver==1)
									goto Menu_1;
							
									else printf("Gracias por su preferencia");
			
						
									break;
									}
							case 2: {
									saldo=saldo-500;
									printf("Su nuevo saldo es: %d", saldo);
									printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
										goto Menu_1;
								
									else printf("Gracias por su preferencia");
								
									break;
									}
							case 3: {
									saldo=saldo-1000;
									printf("Su nuevo saldo es: %d", saldo);
									printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
										goto Menu_1;
								
									else printf("Gracias por su preferencia");
									break;
			
									}
							case 4: {
									saldo=saldo-3000;
									printf("Su nuevo saldo es: %d", saldo);
										printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
										goto Menu_1;
								
									else printf("Gracias por su preferencia");
									break;
									}
				
							case 5: {
								    printf("Su saldo actua es %d\n",saldo);
								    printf("Ingrese la cantidad a retirar\n");
								    scanf("%d" , &retiro);
								    saldo=saldo-retiro;
								    printf("Su saldo despues de la operacion es de %d", saldo);
								  
										printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
										goto Menu_1;
								
									else printf("Gracias por su preferencia");
									break;
									}
						
							case 6: {
								    saldo=saldo;
								  
									printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
										goto Menu_1;
			
									else printf("Gracias por su preferencia");
									break;
			
									}
									
							default: printf("Operacion no valida");
				
					
							}
						}
							
							
							
							
				case 3:{printf("\n¿Cuanto desea abonar?");
						printf("\nMenu Abono");
						printf("\n1.100");
						printf("\n2.500");
						printf("\n3.1000");
						printf("\n4.3000");
						printf("\n5.Otra cantidad");
						printf("\n6.Salir");
						scanf("%d",&opcion);
							switch(opcion)
							{
				
							case 1: {
									saldo=saldo+100;
										printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
										goto Menu_1;
			
									else printf("Gracias por su preferencia");
									break;
			
									}
							case 2: {
									saldo=saldo+500;
									printf("Su nuevo saldo es: %d", saldo);
										printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
										goto Menu_1;
			
									else printf("Gracias por su preferencia");
									break;
			
									}
							case 3: {
									saldo=saldo+1000;
									printf("Su nuevo saldo es: %d", saldo);
										printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
										goto Menu_1;
			
									else printf("Gracias por su preferencia");
									break;
			
									}
							case 4: {
									saldo=saldo+3000;
									printf("Su nuevo saldo es: %d", saldo);
										printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
										goto Menu_1;
			
									else printf("Gracias por su preferencia");
									break;
			
									}
				
							case 5: {
								    printf("Su saldo actua es %d\n",saldo);
								    printf("Ingrese la cantidad a abonar\n");
								    scanf("%d" , &abono);
								    saldo=saldo+abono;
								    printf("Su saldo despues de la operacion es de %d", saldo);
								  
										printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
										goto Menu_1;
			
									else printf("Gracias por su preferencia");
									break;
			
									}
						
							case 6: {
								    saldo=saldo;
								  
										printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
										goto Menu_1;
			
									else printf("Gracias por su preferencia");
									break;
			
									}
									
							default: printf("Operacion no valida");
				
					
							}
						}
				
				case 4:{printf("\nIntrodusca su nuevo NIP");
				scanf("%d" , &nip);
				printf("\nSu Su NIP ha sido cambiado exitosamente");
							break;}
							
							
				case 5:{printf("\n¿Que servicio desea pagar?");
				
					printf("\nMenu Pago de Servicios");
					printf("\n1.Luz");					
					printf("\n2.Agua");
					printf("\n3.Cable");
					printf("\n4.Salir");					
					printf("\n¿Que operacion desea realizar?\n");
					
					scanf("%d",&opcion);
						switch(opcion)
						{//En este caso abono hace refencia a la cantidad a depositar a alguno de los servicios.
						
						case 1:{printf("\n¿Cuanto desea abonar a su cuenta de luz?\n");
						scanf("%d" , &abono);
						saldo=saldo-abono;
						printf("\nSe abono %d a su cuenta de luz y le queda un saldo de %d",abono,saldo);
							printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
										goto Menu_1;
			
									else printf("Gracias por su preferencia");
									break;
			
						}
						
						
						case 2:{printf("\n¿Cuanto desea abonar a su cuenta de agua?\n");
						scanf("%d" , &abono);
						saldo=saldo-abono;
						printf("\nSe abono %d a su cuenta de agua y le queda un saldo de %d",abono,saldo);
							printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
										goto Menu_1;
			
									else printf("Gracias por su preferencia");
									break;
			
						}
						
						case 3:{printf("\n¿Cuanto desea abonar a su cuenta de cable?\n");
						scanf("%d" , &abono);
						saldo=saldo-abono;
						printf("\nSe abono %d a su cuenta de cable y le queda un saldo de %d",abono,saldo);
							printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
										goto Menu_1;
			
									else printf("Gracias por su preferencia");
									break;
			
						}
				}
					
							break;}
							
							
				case 6:{printf("\nGracias por su preferencia");
							break;}
				
				
				
				
						
					default: printf("Operacion no valida");
					
				
					
					
		
				}//Cerrar switch M1	
				break;	
		
		
		}
		
		
	
	case 2:
		
		
	
		{
		  		printf("Bienvenido a operacion sin tarjeta");
			Menu_2:
				
				printf("\n1.Consulta de Saldo");
				printf("\n2.Retiro");
				printf("\n3.Abono");
				printf("\n4.Cambio de NIP");
				printf("\n5.Pago Servicios");
				printf("\n6.Salir");
				printf("\nQue operacion desea realizar");
				int respm1;
				scanf("%d",&respm1);
				switch (respm1)
				
				{//inicio switch m1
				case 1:{printf("\nSu saldo es: %d\n", saldo);
					printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
										goto Menu_2;
			
									else printf("Gracias por su preferencia");
									break;
			
							break;}
							
				case 2:{printf("\n¿Cuanto desea retirar?");
						printf("\nMenu Retiro");
						printf("\n1.100");
						printf("\n2.500");
						printf("\n3.1000");
						printf("\n4.3000");
						printf("\n5.Otra cantidad");
						printf("\n6.Salir");
						scanf("%d",&opcion);
							switch(opcion)
							{
				
							case 1: {
									saldo=saldo-100;
									printf("Su nuevo saldo es: %d", saldo);
									printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
									goto Menu_2;
			
									else printf("Gracias por su preferencia");
									break;
			
									}
							case 2: {
									saldo=saldo-500;
									printf("Su nuevo saldo es: %d", saldo);
									printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
										goto Menu_2;
			
									else printf("Gracias por su preferencia");
									break;
			
									}
							case 3: {
									saldo=saldo-1000;
									printf("Su nuevo saldo es: %d", saldo);
									printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
										goto Menu_2;
			
									else printf("Gracias por su preferencia");
									break;
			
									}
							case 4: {
									saldo=saldo-3000;
									printf("Su nuevo saldo es: %d", saldo);
									printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
										goto Menu_2;
			
									else printf("Gracias por su preferencia");
									break;
			
									}
				
							case 5: {
								    printf("Su saldo actua es %d\n",saldo);
								    printf("Ingrese la cantidad a retirar\n");
								    scanf("%d" , &retiro);
								    saldo=saldo-retiro;
								    printf("Su saldo despues de la operacion es de %d", saldo);
								  
									printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
									goto Menu_2;
			
									else printf("Gracias por su preferencia");
									break;
			
									}
						
							case 6: {
								    saldo=saldo;
								  
									printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
									goto Menu_2;
			
									else printf("Gracias por su preferencia");
									break;
			
									}
									
							default: printf("Operacion no valida");
				
					
							}
						}
							
							
							
							
				case 3:{printf("\n¿Cuanto desea abonar?");
						printf("\nMenu Abono");
						printf("\n1.100");
						printf("\n2.500");
						printf("\n3.1000");
						printf("\n4.3000");
						printf("\n5.Otra cantidad");
						printf("\n6.Salir");
						scanf("%d",&opcion);
							switch(opcion)
							{
				
							case 1: {
									saldo=saldo+100;
									printf("Su nuevo saldo es: %d", saldo);
										printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
										goto Menu_2;
			
									else printf("Gracias por su preferencia");
									break;
			
									}
							case 2: {
									saldo=saldo+500;
									printf("Su nuevo saldo es: %d", saldo);
										printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
										goto Menu_2;
			
									else printf("Gracias por su preferencia");
									break;
			
									}
							case 3: {
									saldo=saldo+1000;
									printf("Su nuevo saldo es: %d", saldo);
										printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==2)
										goto Menu_1;
			
									else printf("Gracias por su preferencia");
									break;
			
									}
							case 4: {
									saldo=saldo+3000;
									printf("Su nuevo saldo es: %d", saldo);
										printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==2)
										goto Menu_1;
			
									else printf("Gracias por su preferencia");
									break;
			
									}
				
							case 5: {
								    printf("Su saldo actua es %d\n",saldo);
								    printf("Ingrese la cantidad a abonar\n");
								    scanf("%d" , &abono);
								    saldo=saldo+abono;
								    printf("Su saldo despues de la operacion es de %d", saldo);
								  
										printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
										goto Menu_2;
			
									else printf("Gracias por su preferencia");
									break;
			
									}
						
							case 6: {
								    saldo=saldo;
								  
										printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
										goto Menu_2;
			
									else printf("Gracias por su preferencia");
									break;
			
									}
									
							default: printf("Operacion no valida");
				
					
							}
						}
				
				case 4:{printf("\nIntrodusca su nuevo NIP");
				scanf("%d" , &nip);
				printf("\nSu Su NIP ha sido cambiado exitosamente");
					printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
										goto Menu_2;
			
									else printf("Gracias por su preferencia");
									
			
							break;}
							
							
				case 5:{printf("\n¿Que servicio desea pagar?");
				
					printf("\nMenu Pago de Servicios");
					printf("\n1.Luz");					
					printf("\n2.Agua");
					printf("\n3.Cable");
					printf("\n4.Salir");					
					printf("\n¿Que operacion desea realizar?\n");
					
					scanf("%d",&opcion);
						switch(opcion)
						{//En este caso abono hace refencia a la cantidad a depositar a alguno de los servicios.
						
						case 1:{printf("\n¿Cuanto desea abonar a su cuenta de luz?\n");
						scanf("%d" , &abono);
						saldo=saldo-abono;
						printf("\nSe abono %d a su cuenta de luz y le queda un saldo de %d",abono,saldo);
							printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
										goto Menu_2;
			
									else printf("Gracias por su preferencia");
									break;
			
						}
						
						
						case 2:{printf("\n¿Cuanto desea abonar a su cuenta de agua?\n");
						scanf("%d" , &abono);
						saldo=saldo-abono;
						printf("\nSe abono %d a su cuenta de agua y le queda un saldo de %d",abono,saldo);
						printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
										goto Menu_2;
			
									else printf("Gracias por su preferencia");
									break;
			
						}
						
						case 3:{printf("\n¿Cuanto desea abonar a su cuenta de cable?\n");
						scanf("%d" , &abono);
						saldo=saldo-abono;
						printf("\nSe abono %d a su cuenta de cable y le queda un saldo de %d",abono,saldo);
						printf("\n¿Desea hacer otra operacion?");
									printf("\n.Si=1");
									printf("\n.No=2"); 
									scanf("%d",&volver);
									if(volver==1)
										goto Menu_2;
			
									else printf("Gracias por su preferencia");
									break;
			
						}
				}
					
							break;}
							
							
				case 6:{printf("\nGracias por su preferencia");
							break;}
				
				
				
				
						
					default: printf("Operacion no valida");
					
				
					
					
		
				}//Cerrar switch M1	
				break;	
		
		
		}
				
					
			
		
	
			
	
	//Salir:
	
	
	}
	return 0;
} else{ printf("NIP Incorrecto");

}
	
	}
