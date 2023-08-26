#include <stdio.h>
/*
Domingo 	0
Lunes		1
Martes		2
Miércoles	3
Jueves		4
Viernes		5
Sábado		6

d=((A-1)*365 + (A-1)/4-(3*((A-1)/100+1)/4)+DM+D)%7
d = Día esperado
A = Año provisto
DM = Días acumulados hasta antes del primer día del mes
*/

void imprimirDia(int d){
	switch(d){
		case 0:
			printf("Domingo");
			break;
		case 1:
			printf("Odio los Lunes");
			break;
		case 2:
			printf("Martes");
			break;
		case 3:
			printf("Miércoles");
			break;
		case 4:
			printf("Jueves");
			break;
		case 5:
			printf("Viernes");
			break;
		case 6:
			printf("Sábado");
			break;

	}
}

int formula(int dd,int mm,int aaaa,int DM,int d){
	d=((aaaa-1)*365 + (aaaa-1)/4-(3*((aaaa-1)/100+1)/4)+DM+dd)%7;
	imprimirDia(d);
	return d;
}

void calcularFecha(int dd, int mm, int aaaa)
{
	int d,iterador=1,DM=0;

    while(iterador<mm)
	{
		switch(iterador){
			case 4: case 6: case 9: case 11:
				DM += 30;
				break;
			case 2:
				if ((aaaa % 4 == 0 && aaaa % 100 != 0) || (aaaa % 400 == 0))
                    DM += 29;
                else
                    DM += 28;
                break;
			default:
				DM += 31;
				break;
		}
		iterador++;	
	}
		
	d = formula(dd,mm,aaaa,DM,d);
}

void menu()
{
    int dd, mm, aaaa;
    printf("> Ingrese la fecha (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &dd, &mm, &aaaa);
    calcularFecha(dd, mm, aaaa);
}

int main()
{
    menu();
    return 0;
}

