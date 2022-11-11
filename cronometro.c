#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(void) {

    //Localização e título
    setlocale(LC_ALL, "Portuguese");
    SetConsoleTitle("Cronômetro");

    // Variaveis

    int sec = 0; //segundos
    int min = 0; //minutos
    int hr = 0; //horas

    int i = 0; //controle de loop

    do {
        system("cls"); //limpa tela

        printf("Cronômetro\n\n");

        printf("\n\t\t\t\t%dh:%dm:%ds\n\n", hr, min, sec);

        if(sec==60) {
            sec=0;
            
            hr++;
        }

        if(min==60) {
            min=0;

            hr++;
        }

        if(hr==24) {
            hr=0;
        }

        Sleep(1000); //função de pausar a execução por um determinado tempo
        sec++;
    }

    while (i==0);

    system("pause");
    return 0;

}