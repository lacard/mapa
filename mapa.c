/************************************************************************
 * MAPA:Programa para cadastro de aluno academia.
 * AUTOR: Luis Antonio Cardozo
 * RA: 1752471-5
 * DISCIPLINA:ALGORITMOS E LÓGICA DE PROGRAMAÇÃO II
************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct Aluno
{
    char nome[30];
    char email[20];
    float peso;
    float alt;
        
};

struct Aluno cad [20];

int main()
{
    setlocale(LC_ALL,"Portuguese");
    //DECLARANDO OUTRAS VARIAVEIS NECESSARIAS
    int op,i,f=0,s=0;
    char Cont[30];
    float imc;
    for (i = 1; i <= 21; i++)
    
    
    do{
    printf("\nCADASTRO ALUNO ACADEMIA\n");
    printf("1 - CADASTRAR ALUNO:\n");
    printf("2 - LISTAR ALUNO:\n");
    printf("3 - EXCLUIR ALUNO:\n");
    printf("4 - LISTAR IMC ALUNOS:\n");
    printf("0 - SAIR\n");
    scanf("%d", & op);
    
    switch (op)
    {
        case 1:
            printf("ESCOLHA A POSIÇÃO DE 1 A 20 : ");
            scanf("%d", &i);
            if(i<1 || i>20)
            {
                printf("\n\nPOSIÇÃO INVÁLIDA, ESCOLHA NOVAMENTE:\n\n");
                i=1;
            }
            else
            {
                printf("POSIÇÃO: %d\n",i);
                printf("DIGITE O NOME:\n");
                scanf("%s", cad[i].nome);
                printf("DIGITE O EMAIL:\n");
                scanf("%s", cad[i].email);
                printf("DIGITE O PESO(kg):\n");
                scanf("%f", & cad[i].peso);
                printf("DIGITE A ALTURA (m):\n");
                scanf("%f", & cad[i].alt);
                
                printf("\n\nCADASTRADO COM SUCESSO!!\n\n");
                fflush(stdin);
            }
            break;
        case 2:
            for(i=1; i<21; i++)
            {
                printf("%d:Nome: %s, Email: %s, Peso:%.2f, Altura:%.2f\n",i,cad[i].nome,cad[i].email,cad[i].peso,cad[i].alt);
            }
            break;
        
        case 3:
        printf("DIGITE O NÚMERO PARA EXCLUIR:\n");
        scanf("%d",& i);
            if (i>=1 || i <=20)
            {
                strcpy(cad[i].nome, ""); 
                strcpy(cad[i].email, "");
                cad[i].peso = 0;
                cad[i].alt = 0;
                imc = 0;
                
                printf("\n\nEXCLUÍDO COM SUCESSO!!\n\n");
            }
            else
            {
                printf("NÚMERO INVÁLIDO");
            }
            break;
        case 4:
            for(i=1; i<21; i++)
            {
                imc=cad[i].peso/(cad[i].alt*cad[i].alt);
        
                if(imc<18.5)
            {
                    printf("\n Nome:%s IMC:%.2f", cad[i].nome,imc);
                    printf(" Condição: BAIXO PESO.");
            }
            else if(imc>18.5 && imc<25)
            {
                    printf("\n Nome:%s IMC:%.2f", cad[i].nome,imc);
                    printf(" Condição: PESO IDEAL.");
                 
            }
             else if(imc>25 && imc<30)
            {
                    printf("\n Nome:%s IMC:%.2f", cad[i].nome,imc);
                    printf(" Condição: SOBREPESO.");
            }
             else if(imc>30 && imc<35)
            {
                    printf("\n Nome:%s IMC:%.2f", cad[i].nome,imc);
                    printf(" Condição: OBESIDADE GRAU 1.");
            }
             else if(imc>35 && imc<40)
            {
                    printf("\n Nome:%s IMC:%.2f", cad[i].nome,imc);
                    printf(" Condição: OBESIDADE GRAU 2.");
            }
              else if(imc>=40)
            {
                    printf("\n Nome:%s IMC:%.2f", cad[i].nome,imc);
                    printf(" Condição: OBESIDADE GRAU 3.");
            }
        }
            break;
        case 0:exit(0);
            s = 1;
            break;
            default:
            printf("OPÇÃO INVÁLIDA!\n");
            system("cls");
            break;
            
    }
    
    }
    while (1 == 1);
    return (0);
}

