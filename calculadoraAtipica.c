#include <stdio.h>
void division (int a,int b );
int potencia (int a,int b);
int multiplicacion (int a,int b);

void menu();
int main()
{
  menu();
 return 0;   
}


/*Crear una funcion que a trav?s
de sumas sucesivas emule la multiplicaci?n*/

/*axb*/
int multiplicacion (int a,int b)
{
     int cursor=0,salida=0;
     while(cursor<b)
     {
      salida=salida+a;
      //cursor=cursor+1;     
      cursor++;
     }     
     //printf("Resultado de la multiplicacion de %d x %d = %d\n\n",a,b,salida );
return salida;
}

/*Crear una funcion que a trav?s de multiplicacion
de sumas sucesivas genere la potencia*/
int potencia (int a,int b)
{
 int cursor=1,salida=0,aux=a;
 if (b==0)
  {
   salida=1;
  }
  else
  {
    if (b==1)
          {
           salida=a;
          }
    else
    {
          while (cursor<b)
          {
                  
           salida=multiplicacion(aux,a);
           aux=salida;
          cursor=cursor+1; 
          }
          
    }
    
  }
  return salida;
}
/*Crear una funcion que nos permita emular
la divisi?n por restas sucesivas*/
/*a/b (numeros enteros)*/
void division (int a,int b )
{
    int cociente=0, resto=a;
      // resto=a;
   if(b==0)
   {
    printf("Error, no se puede dividir por 0!\n");
   } 
    else
    {while (resto>=b)
    {
      //resto=resto-b;      
      resto-=b;
	  //cociente=cociente+1;
	  cociente++;
         
    }
      printf ("%d divido %d es %d",a,b,cociente);
    }
    if(resto!=0)
    printf(" con resto %d",resto);
    
    printf("\n");
}

/*funcion menu que permita capturar los dos numeros
incluyendo la operacion numero operador numero*/
void menu()
{
    int a,b,resultado,band=1;
    char signo;
       
    while(band)
    {
      printf("\nInserte la operacion: " );
      scanf("%d %c %d",&a,&signo,&b);
      getchar();   
      switch(signo)
      { case '+': printf("\n%d + %d = %d",a,b,a+b);
      break;
      case '-': printf("\n%d - %d = %d",a,b,a-b);
      break;
      case '*': printf("\n%d * %d = %d",a,b,multiplicacion(a,b));
      break;
      case '/': division(a,b);
      break;
      case 'P': printf("\n%d a la %d es %d",a,b,potencia(a,b));
      break;
      } 
      printf("\nDesea continuar?s/n: ");
      scanf("%c",&signo);
      getchar();
      if((signo=='S')||(signo=='s'))
       band=1;
      else
       band=0;
   }
}




