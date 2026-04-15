/*Vamos a intentar crear un programa que nos calcule o valor intrínseco das accións
das empresas nas que queremos invertir.*/

/*Una empresa vale hoy el total de flujos de caja que generará desde ahora
hasta el día del juicio final, descontados a una tasa adecuada.*/

/*Warren Buffet utiliza el método de flujo de caja descontado (DCF) simplificado 
bajo el concepto de "Owner Earnings" (Ganancias del Propietario)*/

/*CAPEX: Gastos de capital*/

/*Owner Earnings = Beneficio neto + Depreciación y Amortización + CAPEX*/
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int main(){
    long long valorEmpresa, AccionesTotales, FCF;
    int BPA, ROE, PER;
    char nombreEmpresa[40];
    double valorAccion;

    
    printf("Escribe nombre da empresa: ");
    scanf("%s",nombreEmpresa);
    printf("Cantas accions cotizan? ");
    scanf("%lld", &AccionesTotales);
    printf("o numero de accions e de: %lld\n", AccionesTotales);
    printf("A empresa e: %s", nombreEmpresa);

    return 0;
}

