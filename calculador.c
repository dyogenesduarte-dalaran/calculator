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
                primeironumero = primeironumero * 10 + (expressao[indice] - '0');     
            }
            else
            {
                    segundonumero = segundonumero * 10 + (expressao[indice] - '0');
            }
        }
        else 
        {
            operador = expressao[indice];
            operadorEncontrado = true;
        }
    }
     if (operador == '+')
    {
        resultado = primeironumero + segundonumero;
    }
    else if (operador == '-')
    {
        resultado = primeironumero - segundonumero;
    }
    else if (operador == '*')
    {
        resultado = primeironumero * segundonumero;
    }
    else if (operador == '/')
    {
        if (segundonumero == 0)
        {
            printf("Erro: divisao por zero.\n");
            return 1;
        }

        resultado = primeironumero / segundonumero;
    }


    else
    {
        printf("Operador invalido.\n");
        return 1;
    }



    printf("Resultado: %d\n", resultado);



      
    
    return 0;    
}

/*

            O que fazer sempre que qualquer alteração for realizada no código:

    
    git init
    git add .
    git commit -m "update: alteração realizada"
    git push origin main

*/