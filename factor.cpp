 #include <stdio.h>
 main(){ 
   int n;
   int i;

    printf("Ingrese el numero:\n");
    scanf("%d",&n);



    for(i=1;i<=n;i=i+1)
    {
        if(n%i==0){
        printf("%d ",i);
	                 }
       }
    printf("son factor de %d",n);
	return 0;
	
   
}
