#include <stdio.h>
#include <stdbool.h>


int main() {

    char expressao[100];

    int indice;

    int primeironumero = 0;
    int segundonumero = 0;

    char operador;

    int resultado = 0; 
    
    bool operadorEncontrado = false;

    printf("Vamos calcular:\n");
    scanf("%99s", expressao);

    for (indice = 0; expressao[indice] != '\0'; indice++)
    {
        if (expressao[indice] >= '0' && expressao[indice] <='9')
        {
            if (operadorEncontrado == false)
            {
                primeironumero = primeironumero * 10 + (expressao[indice] - '0);     
            }
            else
            {
                    segundonumero = segundonumero * 10 + (expressao[indice] - '0');
            }
        }
        else .....continuar




    }





   
    
    return 0;    
}

/*

O que fazer sempre que qualquer alteração for realizada no código:


git add .
git commit -m "update: alteração realizada"
git push origin main




*/