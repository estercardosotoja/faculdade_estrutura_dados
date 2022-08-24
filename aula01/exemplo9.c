#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

#define TAM 100

//Função para transformar os caracteres em maiúsculos
int Maiuscula(char *string){
    int x;
    for(x=0;x<strlen(string);x++){
        string[x]=toupper(string[x]);
    }
}

//Função Principal
int main(){
    char str[TAM];
    puts("\n Digite a string: ");
    gets(str);
    Maiuscula(str);
    printf("\n String Maiuscula: %s\n",str);
   
    getch();
}