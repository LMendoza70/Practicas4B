#include<stdio.h>
#include<math.h>

//emplearemos la libreria string para el manejo de cadenas de caracteres 
#include<string.h>

int main(){
    float v1=0, v2=0;
    float resp=0;
    char op=' ', operacion[20]=" ";

    //solicitamos los valores con los que vamos a trabajar
    printf("Ingresa el valor 1\n");
    scanf("%f", &v1);

    printf("Ingresa el valor 2\n");
    scanf("%f", &v2);

    printf("que operacion va a realizar?\n");
    printf("[+] Suma\n");
    printf("[-] Resta\n");
    printf("[*] Multiplicacion\n");
    printf("[/] Division\n");
    scanf("%s", &op);

    switch (op)
    {
    case '+':
        resp=v1+v2;
        //para asignar un valor a la cadena de caracteres utilizamos la funcion strcpy(destino,"valor")
        strcpy(operacion,"Suma");
        break;
    case '-':
        resp=v1-v2;
        strcpy(operacion,"Resta");
        break;
    case '*':
        resp=v1*v2;
        strcpy(operacion,"Multiplicacion");
        break;
    case '/':
        if(v2==0){
            printf("No se puede dividir entre 0\n");
            resp=-1;
        }else{
            strcpy(operacion,"division");
            resp=v1/v2;
        }
        break;
    default:
        printf("La opcion seleccionada no existe en el menu :) \n");
        break;
    }

    printf("El resultado de la %s es : %f \n",operacion,resp);

    return 0;
}