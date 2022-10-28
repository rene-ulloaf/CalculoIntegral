#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define _MAXCAR 100;

char integrales[100];
void CreaMenu();
int Integrar();
int SepararIntegrales(char[]);
void CalcularIntegral();

int main() {
    CreaMenu();
    Integrar();

    return (EXIT_SUCCESS);
}

void CreaMenu(){
    system("clear");
}

int Integrar(){
    if(strchr("", '*') || strchr("", '/')){
        
    }else{
        if(SepararIntegrales("2+2")){
            CalcularIntegral();
        }
    }
}

int SepararIntegrales(char string[]){
    int i,cont=0,resp = 0;
    int cantString = strlen(string);

    for(i=0;i<cantString;i++){
        if(string[i] == "+" || string[i] == "-"){
            if(cont != 0){
                cont ++;
                integrales[cont] = string[i]
                cont ++;
            }else{
                resp = 1;
            }
        }else{
            integrales[cont] = string[i];
        }

        return resp;
    }
}