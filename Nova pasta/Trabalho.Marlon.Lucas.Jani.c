#include<stdio.h>
#include<stdlib.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include <time.h>

struct aluno
{

    char nome[100],email[100],tele[100];

    int data;

};

struct aluno alunnovo;
void turmaB();
void menu();
void Trabalho();
void cor();
void registro();
void abreArquivo(char modo, char caminho[300]);
void fecharArquivo(FILE *arquivo);
void loginProfessor();
void MenuProfessor();
void Novaconta();
void inveter(char vet[500],char encontre,char trocar);
void turmaA();
void NovoAluno();
void Menualunos();
void loginaluno();
void infoAlunos();

int flag,xp,sair=0,t;

int menutrab=0,flag2=0;

int menuagend=0,flag3=0,i=0;

int flag1=0,menucor=0;

int menuprof=0,flag4=0;

int cont=0,continu=0,continuu=0;

int k=0,kk=0;

int menunovacontaprofe=0,flag5=0;

int menuturmaA=0,flag6=0;

int menuinfoaluno=0,flag8=0;

int menualuno=0,flag7=0;

int ddp=0;

int conte=0,contee=0;

int main()
{

    keybd_event ( VK_MENU, 0x36, 0, 0 );                //36
    keybd_event ( VK_RETURN, 0x1C, 0, 0 );
    keybd_event ( VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0 );
    keybd_event ( VK_MENU, 0x38, KEYEVENTF_KEYUP, 0 ); //38

    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);

    time_t tempo; //variável que guarda um tempo
    struct tm *sTempo;  //estrutura que guarda um tempo
    tempo = time( NULL ); //recebe tempo
    sTempo = localtime( &tempo );

    // int aded=0;
    //printf("%d",aded);
    // system("pause");

    FILE *log;
    log=fopen("Logs.txt","a");


    if((sTempo->tm_sec<10)&&(sTempo->tm_min<10)&&(sTempo->tm_hour<10))
    {
        fprintf(log,"Iniciado em %d/%d/%d (0%d:0%d:0%d)\n",tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,sTempo->tm_hour, sTempo->tm_min, sTempo->tm_sec);
    }
    else if((sTempo->tm_sec<10)&&(sTempo->tm_min<10))
    {
        fprintf(log,"Iniciado em %d/%d/%d (%d:0%d:0%d)\n",tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,sTempo->tm_hour, sTempo->tm_min, sTempo->tm_sec);
    }
    else if((sTempo->tm_sec<10)&&(sTempo->tm_hour<10))
    {
        fprintf(log,"Iniciado em %d/%d/%d (0%d:%d:0%d)\n",tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,sTempo->tm_hour, sTempo->tm_min, sTempo->tm_sec);
    }
    else if((sTempo->tm_hour<10)&&(sTempo->tm_min<10))
    {
        fprintf(log,"Iniciado em %d/%d/%d (0%d:0%d:%d)\n",tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,sTempo->tm_hour, sTempo->tm_min, sTempo->tm_sec);
    }
    else if(sTempo->tm_hour<10)
    {
        fprintf(log,"Iniciado em %d/%d/%d (0%d:%d:%d)\n",tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,sTempo->tm_hour, sTempo->tm_min, sTempo->tm_sec);
    }
    else if(sTempo->tm_min<10)
    {
        fprintf(log,"Iniciado em %d/%d/%d (%d:0%d:%d)\n",tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,sTempo->tm_hour, sTempo->tm_min, sTempo->tm_sec);
    }
    else if(sTempo->tm_sec<10)
    {
        fprintf(log,"Iniciado em %d/%d/%d (%d:%d:0%d)\n",tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,sTempo->tm_hour, sTempo->tm_min, sTempo->tm_sec);
    }
    else
    {
        fprintf(log,"Iniciado em %d/%d/%d (%d:%d:%d)\n",tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,sTempo->tm_hour, sTempo->tm_min, sTempo->tm_sec);
    }
    fclose(log);

    int contador=0;
    FILE *prog;
    prog=fopen("Programa.txt","rt");
    fscanf(prog,"%d",&contador);
    fclose(prog);
    cont=contador;

    contador=0;

    prog=fopen("Programa2.txt","rt");
    fscanf(prog,"%d",&contador);
    fclose(prog);
    conte=contador;



    do
    {
        flag = 0;
        xp = 0;
        menu();
    }
    while(sair == 0);


    return 0;
}
void menu()
{
    do
    {
        if(xp == 0)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³        Trabalho de Programa%c%co       ³\n",135,198);
            printf("   ³             1 Periodo                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Trabalho Desenvolvido              ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ³   Cr%cditos                           ³\n",130);
            printf("   ³                                      ³\n");
            printf("   ³   Trocar Cor do Programa             ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Sair                               ³\n");
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(xp == 1)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³        Trabalho de Programa%c%co       ³\n",135,198);
            printf("   ³             1 Periodo                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Trabalho Desenvolvido              ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Cr%cditos                           ³\n",16,130);
            printf("   ³                                      ³\n");
            printf("   ³   Trocar Cor do Programa             ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Sair                               ³\n");
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(xp == 2)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³        Trabalho de Programa%c%co       ³\n",135,198);
            printf("   ³             1 Periodo                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Trabalho Desenvolvido              ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Cr%cditos                           ³\n",130);
            printf("   ³                                      ³\n");
            printf("   ³ %c Trocar Cor do Programa             ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ³   Sair                               ³\n");
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(xp == 3)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³        Trabalho de Programa%c%co       ³\n",135,198);
            printf("   ³             1 Periodo                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Trabalho Desenvolvido              ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Cr%cditos                           ³\n",130);
            printf("   ³                                      ³\n");
            printf("   ³   Trocar Cor do Programa             ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Sair                               ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        t = getch();
        if(t == 13)
        {
            if(xp == 0)
            {
                system("cls");
                flag++;
                flag2=0;
                menutrab=0;
                Trabalho();


            }
            else if(xp == 1)
            {
                system("cls");
                system("color 0a");
                flag++;
                printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
                printf("   ³ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                Alunos Graduando Em Bacharelado De Sistema De Informa%c%co                                                                                ³ÛÛÛÛÛÛ³\n",135,131);
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                           %c Marlon Nascimento Santana %c                                                                                                ³ÛÛÛÛÛÛ³\n",16,17);
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                           %c Lucas Guizzi Costa Longa %c                                                                                                 ³ÛÛÛÛÛÛ³\n",16,17);
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                             %c Jani Sara Marcelino %c                                                                                                    ³ÛÛÛÛÛÛ³\n",16,17);
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                          Clique Qualquer tecla para Voltar                                                                                             ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛ³                                                                                                                                                                                                                        ³ÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ³\n");
                printf("   ³ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ³\n");
                printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
                getch();
                system("color 07");
            }
            else if(xp == 2)
            {
                system("cls");
                flag++;
                flag1=0;
                cor();


            }
            else if(xp == 3)
            {
                system("cls");
                flag8++;
                flag++;
                sair++;


            }
        }

        if((t == 115)||(t == 80))
        {
            xp++;

        }
        else if((t == 119)||(t == 72))
        {
            xp--;
        }
        if(xp > 3 )
        {
            xp = 0;
        }
        if(xp < 0)
        {
            xp = 3;
        }

    }
    while(flag == 0);
}
void Trabalho()
{

    do
    {
        if(menutrab == 0)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³        Trabalho de Programa%c%co       ³\n",135,198);
            printf("   ³             1 Periodo                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Area Do Professor                  ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ³   Area Do Aluno                      ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Voltar                             ³\n");
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menutrab == 1)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³        Trabalho de Programa%c%co       ³\n",135,198);
            printf("   ³             1 Periodo                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Area Do Professor                  ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Area Do Aluno                      ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ³   Voltar                             ³\n");
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menutrab == 2)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³        Trabalho de Programa%c%co       ³\n",135,198);
            printf("   ³             1 Periodo                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Area Do Professor                  ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Area Do Aluno                      ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Voltar                             ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        t = getch();
        if(t == 13)
        {
            if(menutrab == 0)
            {
                system("cls");
                flag2++;
                flag5=0;
                menunovacontaprofe=0;
                Novaconta();



            }
            else if(menutrab == 1)
            {
                system("cls");
                flag2++;
                flag7=0;
                menualuno=0;

                Menualunos();
            }
            else if(menutrab == 2)
            {
                system("cls");
                flag2++;
                flag=0;
                menu();
            }
        }
        if((t == 115)||(t == 80))
        {
            menutrab++;

        }
        else if((t == 119)||(t == 72))
        {
            menutrab--;
        }
        if(menutrab > 2 )
        {
            menutrab = 0;
        }
        if(menutrab < 0)
        {
            menutrab = 2;
        }

    }
    while(flag2 == 0);
}
void cor()
{
    do
    {
        if(menucor == 0)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                     Trabalho de Programa%c%co                          ³\n",135,198);
            printf("   ³                           1 Periodo                                  ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³ %c  Preto                               Cinza                         ³\n",16);
            printf("   ³    Azul                                Azul Claro                    ³\n");
            printf("   ³    Verde                               Verde Claro                   ³\n");
            printf("   ³    Verde-%cgua                          Verde-%cgua Claro              ³\n",181,181);
            printf("   ³    Vermelho                            Vermelho Claro                ³\n");
            printf("   ³    Roxo                                L%cl%cs                         ³\n",161,160);
            printf("   ³    Amarelo                             Amarelo Claro                 ³\n");
            printf("   ³    Branco                              Branco Brilhante              ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Sair                                                              ³\n");
            printf("   ³                                                            By:Marlon ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menucor == 1)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                     Trabalho de Programa%c%co                          ³\n",135,198);
            printf("   ³                           1 Periodo                                  ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Preto                               Cinza                         ³\n");
            printf("   ³ %c  Azul                                Azul Claro                    ³\n",16);
            printf("   ³    Verde                               Verde Claro                   ³\n");
            printf("   ³    Verde-%cgua                          Verde-%cgua Claro              ³\n",181,181);
            printf("   ³    Vermelho                            Vermelho Claro                ³\n");
            printf("   ³    Roxo                                L%cl%cs                         ³\n",161,160);
            printf("   ³    Amarelo                             Amarelo Claro                 ³\n");
            printf("   ³    Branco                              Branco Brilhante              ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Sair                                                              ³\n");
            printf("   ³                                                            By:Marlon ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menucor == 2)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                     Trabalho de Programa%c%co                          ³\n",135,198);
            printf("   ³                           1 Periodo                                  ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Preto                               Cinza                         ³\n");
            printf("   ³    Azul                                Azul Claro                    ³\n");
            printf("   ³ %c  Verde                               Verde Claro                   ³\n",16);
            printf("   ³    Verde-%cgua                          Verde-%cgua Claro              ³\n",181,181);
            printf("   ³    Vermelho                            Vermelho Claro                ³\n");
            printf("   ³    Roxo                                L%cl%cs                         ³\n",161,160);
            printf("   ³    Amarelo                             Amarelo Claro                 ³\n");
            printf("   ³    Branco                              Branco Brilhante              ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Sair                                                              ³\n");
            printf("   ³                                                            By:Marlon ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menucor == 3)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                     Trabalho de Programa%c%co                          ³\n",135,198);
            printf("   ³                           1 Periodo                                  ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Preto                               Cinza                         ³\n");
            printf("   ³    Azul                                Azul Claro                    ³\n");
            printf("   ³    Verde                               Verde Claro                   ³\n");
            printf("   ³ %c  Verde-%cgua                          Verde-%cgua Claro              ³\n",16,181,181);
            printf("   ³    Vermelho                            Vermelho Claro                ³\n");
            printf("   ³    Roxo                                L%cl%cs                         ³\n",161,160);
            printf("   ³    Amarelo                             Amarelo Claro                 ³\n");
            printf("   ³    Branco                              Branco Brilhante              ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Sair                                                              ³\n");
            printf("   ³                                                            By:Marlon ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menucor == 4)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                     Trabalho de Programa%c%co                          ³\n",135,198);
            printf("   ³                           1 Periodo                                  ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Preto                               Cinza                         ³\n");
            printf("   ³    Azul                                Azul Claro                    ³\n");
            printf("   ³    Verde                               Verde Claro                   ³\n");
            printf("   ³    Verde-%cgua                          Verde-%cgua Claro              ³\n",181,181);
            printf("   ³ %c  Vermelho                            Vermelho Claro                ³\n",16);
            printf("   ³    Roxo                                L%cl%cs                         ³\n",161,160);
            printf("   ³    Amarelo                             Amarelo Claro                 ³\n");
            printf("   ³    Branco                              Branco Brilhante              ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Sair                                                              ³\n");
            printf("   ³                                                            By:Marlon ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menucor == 5)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                     Trabalho de Programa%c%co                          ³\n",135,198);
            printf("   ³                           1 Periodo                                  ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Preto                               Cinza                         ³\n");
            printf("   ³    Azul                                Azul Claro                    ³\n");
            printf("   ³    Verde                               Verde Claro                   ³\n");
            printf("   ³    Verde-%cgua                          Verde-%cgua Claro              ³\n",181,181);
            printf("   ³    Vermelho                            Vermelho Claro                ³\n");
            printf("   ³ %c  Roxo                                L%cl%cs                         ³\n",16,161,160);
            printf("   ³    Amarelo                             Amarelo Claro                 ³\n");
            printf("   ³    Branco                              Branco Brilhante              ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Sair                                                              ³\n");
            printf("   ³                                                            By:Marlon ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menucor == 6)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                     Trabalho de Programa%c%co                          ³\n",135,198);
            printf("   ³                           1 Periodo                                  ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Preto                               Cinza                         ³\n",16);
            printf("   ³    Azul                                Azul Claro                    ³\n");
            printf("   ³    Verde                               Verde Claro                   ³\n");
            printf("   ³    Verde-%cgua                          Verde-%cgua Claro              ³\n",181,181);
            printf("   ³    Vermelho                            Vermelho Claro                ³\n");
            printf("   ³    Roxo                                L%cl%cs                         ³\n",161,160);
            printf("   ³ %c  Amarelo                             Amarelo Claro                 ³\n",16);
            printf("   ³    Branco                              Branco Brilhante              ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Sair                                                              ³\n");
            printf("   ³                                                            By:Marlon ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menucor == 7)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                     Trabalho de Programa%c%co                          ³\n",135,198);
            printf("   ³                           1 Periodo                                  ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Preto                               Cinza                         ³\n",16);
            printf("   ³    Azul                                Azul Claro                    ³\n");
            printf("   ³    Verde                               Verde Claro                   ³\n");
            printf("   ³    Verde-%cgua                          Verde-%cgua Claro              ³\n",181,181);
            printf("   ³    Vermelho                            Vermelho Claro                ³\n");
            printf("   ³    Roxo                                L%cl%cs                         ³\n",161,160);
            printf("   ³    Amarelo                             Amarelo Claro                 ³\n");
            printf("   ³ %c  Branco                              Branco Brilhante              ³\n",16);
            printf("   ³                                                                      ³\n");
            printf("   ³    Sair                                                              ³\n");
            printf("   ³                                                            By:Marlon ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menucor == 8)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                     Trabalho de Programa%c%co                          ³\n",135,198);
            printf("   ³                           1 Periodo                                  ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Preto                             %c Cinza                         ³\n",16);
            printf("   ³    Azul                                Azul Claro                    ³\n");
            printf("   ³    Verde                               Verde Claro                   ³\n");
            printf("   ³    Verde-%cgua                          Verde-%cgua Claro              ³\n",181,181);
            printf("   ³    Vermelho                            Vermelho Claro                ³\n");
            printf("   ³    Roxo                                L%cl%cs                         ³\n",161,160);
            printf("   ³    Amarelo                             Amarelo Claro                 ³\n");
            printf("   ³    Branco                              Branco Brilhante              ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Sair                                                              ³\n");
            printf("   ³                                                            By:Marlon ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menucor == 9)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                     Trabalho de Programa%c%co                          ³\n",135,198);
            printf("   ³                           1 Periodo                                  ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Preto                               Cinza                         ³\n");
            printf("   ³    Azul                              %c Azul Claro                    ³\n",16);
            printf("   ³    Verde                               Verde Claro                   ³\n");
            printf("   ³    Verde-%cgua                          Verde-%cgua Claro              ³\n",181,181);
            printf("   ³    Vermelho                            Vermelho Claro                ³\n");
            printf("   ³    Roxo                                L%cl%cs                         ³\n",161,160);
            printf("   ³    Amarelo                             Amarelo Claro                 ³\n");
            printf("   ³    Branco                              Branco Brilhante              ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Sair                                                              ³\n");
            printf("   ³                                                            By:Marlon ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menucor == 10)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                     Trabalho de Programa%c%co                          ³\n",135,198);
            printf("   ³                           1 Periodo                                  ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Preto                               Cinza                         ³\n");
            printf("   ³    Azul                                Azul Claro                    ³\n");
            printf("   ³    Verde                             %c Verde Claro                   ³\n",16);
            printf("   ³    Verde-%cgua                          Verde-%cgua Claro              ³\n",181,181);
            printf("   ³    Vermelho                            Vermelho Claro                ³\n");
            printf("   ³    Roxo                                L%cl%cs                         ³\n",161,160);
            printf("   ³    Amarelo                             Amarelo Claro                 ³\n");
            printf("   ³    Branco                              Branco Brilhante              ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Sair                                                              ³\n");
            printf("   ³                                                            By:Marlon ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menucor == 11)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                     Trabalho de Programa%c%co                          ³\n",135,198);
            printf("   ³                           1 Periodo                                  ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Preto                               Cinza                         ³\n");
            printf("   ³    Azul                                Azul Claro                    ³\n");
            printf("   ³    Verde                               Verde Claro                   ³\n");
            printf("   ³    Verde-%cgua                        %c Verde-%cgua Claro              ³\n",181,16,181);
            printf("   ³    Vermelho                            Vermelho Claro                ³\n");
            printf("   ³    Roxo                                L%cl%cs                         ³\n",161,160);
            printf("   ³    Amarelo                             Amarelo Claro                 ³\n");
            printf("   ³    Branco                              Branco Brilhante              ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Sair                                                              ³\n");
            printf("   ³                                                            By:Marlon ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menucor == 12)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                     Trabalho de Programa%c%co                          ³\n",135,198);
            printf("   ³                           1 Periodo                                  ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Preto                               Cinza                         ³\n");
            printf("   ³    Azul                                Azul Claro                    ³\n");
            printf("   ³    Verde                               Verde Claro                   ³\n");
            printf("   ³    Verde-%cgua                          Verde-%cgua Claro              ³\n",181,181);
            printf("   ³    Vermelho                          %c Vermelho Claro                ³\n",16);
            printf("   ³    Roxo                                L%cl%cs                         ³\n",161,160);
            printf("   ³    Amarelo                             Amarelo Claro                 ³\n");
            printf("   ³    Branco                              Branco Brilhante              ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Sair                                                              ³\n");
            printf("   ³                                                            By:Marlon ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menucor == 13)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                     Trabalho de Programa%c%co                          ³\n",135,198);
            printf("   ³                           1 Periodo                                  ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Preto                               Cinza                         ³\n");
            printf("   ³    Azul                                Azul Claro                    ³\n");
            printf("   ³    Verde                               Verde Claro                   ³\n");
            printf("   ³    Verde-%cgua                          Verde-%cgua Claro              ³\n",181,181);
            printf("   ³    Vermelho                            Vermelho Claro                ³\n");
            printf("   ³    Roxo                              %c L%cl%cs                         ³\n",16,161,160);
            printf("   ³    Amarelo                             Amarelo Claro                 ³\n");
            printf("   ³    Branco                              Branco Brilhante              ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Sair                                                              ³\n");
            printf("   ³                                                            By:Marlon ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menucor == 14)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                     Trabalho de Programa%c%co                          ³\n",135,198);
            printf("   ³                           1 Periodo                                  ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Preto                               Cinza                         ³\n");
            printf("   ³    Azul                                Azul Claro                    ³\n");
            printf("   ³    Verde                               Verde Claro                   ³\n");
            printf("   ³    Verde-%cgua                          Verde-%cgua Claro              ³\n",181,181);
            printf("   ³    Vermelho                            Vermelho Claro                ³\n");
            printf("   ³    Roxo                                L%cl%cs                         ³\n",161,160);
            printf("   ³    Amarelo                           %c Amarelo Claro                 ³\n",16);
            printf("   ³    Branco                              Branco Brilhante              ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Sair                                                              ³\n");
            printf("   ³                                                            By:Marlon ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menucor == 15)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                     Trabalho de Programa%c%co                          ³\n",135,198);
            printf("   ³                           1 Periodo                                  ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Preto                               Cinza                         ³\n");
            printf("   ³    Azul                                Azul Claro                    ³\n");
            printf("   ³    Verde                               Verde Claro                   ³\n");
            printf("   ³    Verde-%cgua                          Verde-%cgua Claro              ³\n",181,181);
            printf("   ³    Vermelho                            Vermelho Claro                ³\n");
            printf("   ³    Roxo                                L%cl%cs                         ³\n",161,160);
            printf("   ³    Amarelo                             Amarelo Claro                 ³\n");
            printf("   ³    Branco                            %c Branco Brilhante              ³\n",16);
            printf("   ³                                                                      ³\n");
            printf("   ³    Sair                                                              ³\n");
            printf("   ³                                                            By:Marlon ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menucor == 16)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                     Trabalho de Programa%c%co                          ³\n",135,198);
            printf("   ³                           1 Periodo                                  ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³    Preto                               Cinza                         ³\n");
            printf("   ³    Azul                                Azul Claro                    ³\n");
            printf("   ³    Verde                               Verde Claro                   ³\n");
            printf("   ³    Verde-%cgua                          Verde-%cgua Claro              ³\n",181,181);
            printf("   ³    Vermelho                            Vermelho Claro                ³\n");
            printf("   ³    Roxo                                L%cl%cs                         ³\n",161,160);
            printf("   ³    Amarelo                             Amarelo Claro                 ³\n");
            printf("   ³    Branco                              Branco Brilhante              ³\n");
            printf("   ³                                                                      ³\n");
            printf("   ³  %c Sair                                                              ³\n",16);
            printf("   ³                                                            By:Marlon ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        t = getch();
        if(t == 13)
        {
            if(menucor == 0)
            {
                system("cls");
                flag1++;
                system("color 00");
                flag=0;
                menu();


            }
            else if(menucor == 1)
            {
                system("cls");
                flag1++;
                system("color 01");
                flag=0;
                menu();


            }
            else if(menucor == 2)
            {
                system("cls");
                flag1++;
                system("color 02");
                flag=0;
                menu();


            }
            else if(menucor == 3)
            {
                system("cls");
                flag1++;
                system("color 03");
                flag=0;
                menu();


            }
            else if(menucor == 4)
            {
                system("cls");
                flag1++;
                system("color 04");
                flag=0;
                menu();


            }
            else if(menucor == 5)
            {
                system("cls");
                flag1++;
                system("color 05");
                flag=0;
                menu();


            }
            else if(menucor == 6)
            {
                system("cls");
                flag1++;
                system("color 06");
                flag=0;
                menu();


            }
            else if(menucor == 7)
            {
                system("cls");
                flag1++;
                system("color 07");
                flag=0;
                menu();


            }
            else if(menucor == 8)
            {
                system("cls");
                flag1++;
                system("color 08");
                flag=0;
                menu();


            }
            else if(menucor == 9)
            {
                system("cls");
                flag1++;
                system("color 09");
                flag=0;
                menu();


            }
            else if(menucor == 10)
            {
                system("cls");
                flag1++;
                system("color 0a");
                flag=0;
                menu();


            }
            else if(menucor == 11)
            {
                system("cls");
                flag1++;
                system("color 0b");
                flag=0;
                menu();


            }
            else if(menucor == 12)
            {
                system("cls");
                flag1++;
                system("color 0c");
                flag=0;
                menu();


            }
            else if(menucor == 13)
            {
                system("cls");
                flag1++;
                system("color 0d");
                flag=0;
                menu();


            }
            else if(menucor == 14)
            {
                system("cls");
                flag1++;
                system("color 0e");
                flag=0;
                menu();


            }
            else if(menucor == 15)
            {
                system("cls");
                flag1++;
                system("color 0f");
                flag=0;
                menu();


            }
            else if(menucor == 16)
            {
                system("cls");
                flag1++;
                flag=0;
                menu();


            }
        }

        if((t == 115)||(t == 80))
        {
            menucor++;

        }
        else if((t == 119)||(t == 72))
        {
            menucor--;
        }





        if(menucor > 16 )
        {
            menucor = 0;
        }
        if(menucor < 0)
        {
            menucor = 16;
        }

    }
    while(flag1 == 0);
}
void registro()
{
    char login[300],senha[300];
    char senhamestre[50];


    char nome[300],email[300];
    int data;
    char tele[300];
    int turma;


    system("cls");
    printf("\n\nDigite Senha Mestre: ");
    scanf("%s",&senhamestre);
    if(strcmp(senhamestre,"admin") == 0)
    {
        FILE *arquivo;
        getchar();
        printf("\nLogin Do Novo Professor: ");
        scanf("%s",login);
        printf("\nSenha do Novo Professor: ");
        getchar();
        scanf("%s",senha);

        getchar();
        printf("\nDigite O Nome Do Professor: ");
        scanf("%[^\n]s",nome);
        getchar();
        inveter(nome,' ','_');
        printf("\nDigite a Data De Nascimento (EX: 16092001): ");
        scanf("%d",&data);
        printf("\nDigite O Email Do Professor (EX:Exemplo@gmail): ");
        scanf("%s",email);
        printf("\nDigite Telefone de Contato (EX:028 99970 7070): ");
        getchar();
        scanf("%[^\n]s",tele);
        inveter(tele,' ','_');
        getchar();
        printf("\nDigite a Turma Encarrecado pelo Professor\n(EX:1-Turma A ,2-Turma B): ");
        scanf("%d",&turma);
        system("pause");

        // arquivo=abreArquivo('a',"loginProfessor.txt");  //salfa login e senha
        //fprintf(arquivo,"%s %s\n",login,senha);
        //fecharArquivo(arquivo);

        FILE *prof;
        prof=fopen("INFOPROFESSOR.txt","a");
        fprintf(prof,"%s %s %s %d %s %s %d\n",login,senha,nome,data,email,tele,turma);
        fclose(prof);

        system("pause");

        int contador=0;
        FILE *policia14;
        policia14=fopen("Programa.txt","rt");
        fscanf(policia14,"%d",&contador);
        fclose(policia14);
        cont=contador;

        system("pause");

        policia14=fopen("Programa.txt","wt");
        fprintf(policia14,"%d",cont+1);
        fclose(policia14);



        flag2=0;
        Trabalho();



    }
    else
    {

        printf("\n\nSenha Mestre Errada!!");
        flag2=0;
        int i;
        for(i=3; i>=0; i--)
        {
            printf("\nVoltando em %d",i+1);
            Sleep(1000);
        }
        Trabalho();
    }
}
void abreArquivo(char modo, char caminho[300])
{
    FILE *arquivo;
    switch (modo)
    {
    case 'g':
        arquivo=fopen(caminho,"wt");
        break;
    case 'l':
        arquivo=fopen(caminho,"rt");
        break;
    case 'a':
        arquivo=fopen(caminho,"a");
        break;
    }
    if (arquivo==NULL)
    {
        printf("Desculpe, não foi possivel abrir o arquivo");
        exit(0);
    }
    return arquivo;
}
void fecharArquivo(FILE *arquivo)
{
    fclose(arquivo);
}
void loginProfessor()
{
    int contador=0;
    FILE *prog;
    prog=fopen("Programa.txt","rt");
    fscanf(prog,"%d",&contador);
    fclose(prog);
    cont=contador;

    char as;
    char login[50];
    char senha[50];
    int a=10;
    int i=0,z;
    int g=0;

    char loginparaler[cont][50];
    char senhaparaler[cont][50];
    //  char nome[cont][300];
    //  int data[cont];

    char nome[cont][100],email[cont][100],tele[cont][100];
    int data[cont],turma[cont];





    // char login[300],senha[300];
    // char senhamestre[50];
//char nome[300];
    //  int data=0;

//fprintf(arquivo,"%s %s %s %d %d\n",nome,data,cpf);/



    FILE *arquivo;
    arquivo=fopen("INFOPROFESSOR.txt","rt");
    for(g=0; g<cont; g++)
    {
        fscanf(arquivo,"%s %s %s %d %s %s %d\n",loginparaler[g],senhaparaler[g],nome[g],&data[g],email[g],tele[g],&turma[g]);
    }
    fecharArquivo(arquivo);


    system("cls");
    printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Acesso Privado ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("   ³                                      ³\n");
    printf("          Login : ");
    scanf("%s",login);
    printf("\n");
    printf("          Senha: ");
    while((as=getch())!=13)  //enquanto c nao recebe o enter ele vai acresentar o asterisco
    {
        senha[i]=as;
        i++;
        printf("*");
    }
    senha[i]='\0';
    i=0;
    system("cls");
    //a= (strcmp(senha,"teste") && (login,"teste"));                                    //antes
    //a= ((strcmp(senha,senhaparaler) == 0) && ((login,loginparaler) == 0));
    //if((login == &loginparaler) && (senha == &senhaparaler)){
    //if(a==0){                                                                           //antes
    g=0;

    do
    {
        if((strcmp(senha,senhaparaler[g]) == 0) && (strcmp(login,loginparaler[g]) == 0))
        {
            k=g;
            system("cls");
            menuprof=0;
            flag4=0;
            continu++;
            MenuProfessor();
        }
        else
        {
            if(g == cont)
            {
                continu++;

                printf("\nA SENHA DIGITADA ESTA ERRADA\n\nSenha Digitada : %s\n",senha);
                for(z=3; z>0; z--)
                {
                    printf("Voltando em %d...\n",z);
                    Sleep(1000);
                }
                system("cls");
                flag2=0;
                menutrab=0;
                Trabalho();


            }
            else
            {
                g++;
            }
        }
    }
    while(continu < 1);

    /*
        printf("\nA SENHA DIGITADA ESTA ERRADA\n\nSenha Digitada : %s\n",senha);
        for(z=3; z>0; z--)
        {
            printf("%d",continu);
            printf("Voltando em %d...\n",z);
            Sleep(1000);
        }
        system("cls");
        flag2=0;
        menutrab=0;
        Trabalho();
        */


}
void MenuProfessor()
{
    int contador=0;

    FILE *policia14;
    policia14=fopen("Programa.txt","rt");
    fscanf(policia14,"%d",&contador);
    fclose(policia14);
    cont=contador;


    char loginparaler[cont][50];
    char senhaparaler[cont][50];
    char nome[cont][500];
    char email[cont][300];
    int data[cont];
    char tele[cont][500];
    int g=0;
    int turma[cont];
    getchar();

    FILE *arquivo;
    arquivo=fopen("INFOPROFESSOR.txt","rt");

    for(g=0; g<cont; g++)
    {
        fscanf(arquivo,"%s %s %s %d %s %s %d\n",loginparaler[g],senhaparaler[g],nome[g],&data[g],email[g],tele[g],&turma[g]);
    }
    fclose(arquivo);

    // fscanf(arquivo,"%s %s\n",loginparaler[g],senhaparaler[g]);




    do
    {
        if(menuprof == 0)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³        Trabalho de Programa%c%co       ³\n",135,198);
            printf("   ³             1 Periodo                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Turma                              ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ³   Minhas Informa%coes                 ³\n",135);
            printf("   ³                                      ³\n");
            printf("   ³   Voltar                             ³\n");
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menuprof == 1)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³        Trabalho de Programa%c%co       ³\n",135,198);
            printf("   ³             1 Periodo                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Turma                              ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Minhas Informa%coes                 ³\n",16,135);
            printf("   ³                                      ³\n");
            printf("   ³   Voltar                             ³\n");
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menuprof == 2)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³        Trabalho de Programa%c%co       ³\n",135,198);
            printf("   ³             1 Periodo                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Turma                              ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Minhas Informa%coes                 ³\n",135);
            printf("   ³                                      ³\n");
            printf("   ³ %c Voltar                             ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        t = getch();
        if(t == 13)
        {
            if(menuprof == 0)
            {

                flag4++;
                system("cls");
                flag4++;
                if(turma[k] == 1)
                {
                    menuturmaA=0;
                    flag6=0;
                    turmaA();
                }
                else
                {
                    menuturmaA=0;
                    flag6=0;
                    turmaB();
                }




            }
            else if(menuprof == 1)
            {
                system("cls");
                flag4++;


                /*

                                FILE *arquivo;
                                arquivo=fopen("INFOPROFESSOR.txt","rt");

                                for(g=0; g<cont; g++)
                                {
                                    // fscanf(arquivo,"%s %s\n",loginparaler[g],senhaparaler[g]);

                                    fscanf(arquivo,"%s %s %s %d %s %s %d\n",loginparaler[g],senhaparaler[g],nome[g],&data[g],email[g],tele[g],&turma[g]);

                                }
                                fclose(arquivo);
                                */
                // fscanf(arquivo,"%s %s %s %d %s %s\n",loginparaler,senhaparaler,nome,&data,email,tele);







                inveter(nome[k],'_',' ');
                inveter(tele[k],'_',' ');
                int d,w,r,t,i,o;
                d=data[k];
                i=d%10000;
                r=d/10000;
                t=r%100;
                o=r/100;
                w=o%100;

                system("cls");
                // printf("%d",k);
                printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
                printf("   ³                                      \n");
                printf("   ³                                      \n");
                printf("   ³   Login : %s                         \n",loginparaler[k]);
                printf("   ³                                      \n");
                printf("   ³   Senha : %s                         \n",senhaparaler[k]);
                printf("   ³                                      \n");
                printf("   ³   Nome  : %s                         \n",nome[k]);
                printf("   ³                                      \n");



                if((w<10)&&(t<10))
                {
                    printf("   ³   Data  : 0%d|0%d|%d                   \n",w,t,i);
                }
                else if(w<10)
                {
                    printf("   ³   Data  : 0%d|%d|%d                   \n",w,t,i);
                }
                else if(t<10)
                {
                    printf("   ³   Data  : %d|0%d|%d                   \n",w,t,i);
                }
                else
                {
                    printf("   ³   Data  : %d|%d|%d                   \n",w,t,i);
                }



                printf("   ³                                      \n");
                printf("   ³   Email : %s                         \n",email[k]);
                printf("   ³                                      \n");
                printf("   ³   Telefone : %s                      \n",tele[k]);
                printf("   ³                                      \n");
                printf("   ³                                      \n");
                printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
                getch();
                menuprof=0;
                flag4=0;


            }
            else if(menuprof == 2)
            {
                system("cls");
                flag4++;
                menutrab=0;
                flag2=0;
                k=0;
                Trabalho();


            }
        }
        if((t == 115)||(t == 80))
        {
            menuprof++;

        }
        else if((t == 119)||(t == 72))
        {
            menuprof--;
        }
        if(menuprof > 2 )
        {
            menuprof = 0;
        }
        if(menuprof < 0)
        {
            menuprof = 2;
        }

    }
    while(flag4 == 0);
}
void Novaconta()
{
    do
    {
        if(menunovacontaprofe == 0)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³        Trabalho de Programa%c%co       ³\n",135,198);
            printf("   ³             1 Periodo                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Login Professor                    ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ³   Novo Professor                     ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Voltar                             ³\n");
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menunovacontaprofe == 1)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³        Trabalho de Programa%c%co       ³\n",135,198);
            printf("   ³             1 Periodo                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Login Professor                    ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Novo Professor                     ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ³   Voltar                             ³\n");
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menunovacontaprofe == 2)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³        Trabalho de Programa%c%co       ³\n",135,198);
            printf("   ³             1 Periodo                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Login Professor                    ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Novo Professor                     ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Voltar                             ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        t = getch();
        if(t == 13)
        {
            if(menunovacontaprofe == 0)
            {
                system("cls");
                flag5++;
                continu=0;
                loginProfessor();



            }
            else if(menunovacontaprofe == 1)
            {
                system("cls");
                flag5++;
                registro();

            }
            else if(menunovacontaprofe == 2)
            {
                system("cls");
                flag5++;
                flag2=0;
                Trabalho();

            }
        }
        if((t == 115)||(t == 80))
        {
            menunovacontaprofe++;

        }
        else if((t == 119)||(t == 72))
        {
            menunovacontaprofe--;
        }
        if(menunovacontaprofe > 2 )
        {
            menunovacontaprofe = 0;
        }
        if(menunovacontaprofe < 0)
        {
            menunovacontaprofe = 2;
        }

    }
    while(flag5 == 0);
}
void inveter(char vet[500],char encontre,char trocar)
{
    int i;

    for(i=0; i<500; i++)
    {
        if(vet[i] == encontre)
        {
            vet[i]=trocar;
        }
    }
    //inveter(charseu,' ','_'); procura o espaço e vai trocar por _
    //inveter(charseu,'_',' '); aocontrario
}
void turmaA()
{
    int contador=0;
    FILE *prog;
    prog=fopen("Programa2.txt","rt");
    fscanf(prog,"%d",&contador);
    fclose(prog);
    conte=contador;

    char loginparaler[conte][300];
    char senhaparaler[conte][300],nome[conte][300],email[conte][300],tele[conte][100];
    int data[conte];
    int g=0,z=0;
    int op=0;
    int media[conte];
    int nota1[conte];
    int nota2[conte];
    int nota3[conte];
    int nota4[conte];
    int ddd[conte];

    int presen[conte],falta[conte];

    FILE *arquivo;
    arquivo=fopen("INFOALUNOA.txt","rt");

    for(g=0; g<conte; g++)
    {
        fscanf(arquivo,"%s %s %s %d %s %s %d %d %d %d %d %d %d\n",loginparaler[g],senhaparaler[g],nome[g],&data[g],email[g],tele[g],&presen[g],&falta[g],&nota1[g],&nota2[g],&nota3[g],&nota4[g],&ddd[g]);
    }
    fclose(arquivo);


    do
    {
        if(menuturmaA == 0)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³               Turma A                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Lista Dos Alunos                   ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ³   Presen%ca/Falta                     ³\n",135);
            printf("   ³                                      ³\n");
            printf("   ³   Notas                              ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Reniciar                           ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Voltar                             ³\n");
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menuturmaA== 1)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³               Turma A                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Lista Dos Alunos                   ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Presen%ca/Falta                     ³\n",16,135);
            printf("   ³                                      ³\n");
            printf("   ³   Notas                              ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Reniciar                           ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Voltar                             ³\n");
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menuturmaA== 2)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³               Turma A                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Lista Dos Alunos                   ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Presen%ca/Falta                     ³\n",135);
            printf("   ³                                      ³\n");
            printf("   ³ %c Notas                              ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ³   Reniciar                           ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Voltar                             ³\n");
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menuturmaA== 3)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³               Turma A                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Lista Dos Alunos                   ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Presen%ca/Falta                     ³\n",135);
            printf("   ³                                      ³\n");
            printf("   ³   Notas                              ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Reniciar                           ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ³   Voltar                             ³\n");
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menuturmaA== 4)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³               Turma A                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Lista Dos Alunos                   ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Presen%ca/Falta                     ³\n",135);
            printf("   ³                                      ³\n");
            printf("   ³   Notas                              ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Reniciar                           ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Voltar                             ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        t = getch();
        if(t == 13)
        {
            if(menuturmaA == 0)
            {
                int mediaa[conte];
                /*
                arquivo=fopen("INFOALUNOA.txt","rt");

                for(g=0; g<cont; g++)
                {
                    fscanf(arquivo,"%d %s %s %d %s %s %d %d %d %d %d %d\n",&loginparaler[g],senhaparaler[g],nome[g],&data[g],email[g],tele[g],&presen[g],&falta[g],&nota1[g],&nota2[g],&nota3[g],&nota4[g]);
                }
                fclose(arquivo);*/
                FILE *arquivo;
                arquivo=fopen("INFOALUNOA.txt","rt");

                for(z=0; z<conte; z++)
                {
                    fscanf(arquivo,"%s %s %s %d %s %s %d %d %d %d %d %d %d\n",&loginparaler[z],senhaparaler[z],nome[z],&data[z],email[z],tele[z],&presen[z],&falta[z],&nota1[z],&nota2[z],&nota3[z],&nota4[z],&ddd[z]);
                    mediaa[z]=(nota1[z]+nota2[z]+nota3[z]+nota4[z])/4;
                    inveter(nome[z],'_',' ');
                }
                fclose(arquivo);

                int z=0;
                system("cls");

                printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
                printf("                                           \n");
                printf("                   Turma A                 \n");
                printf("                Lista De Alunos            \n");
                printf("                                           \n");
                printf("        N%c  Matricula                                   PROVA 1       PROVA 2       PROVA 3       PROVA 4\n\n",248);

                g=0;
                for(z=0; z<conte; z++)
                {
                    if(z<9)
                    {


                        if(presen[z]==100)
                        {
                            printf("        0%d- %s |  (Presen%ca-%d) | ",z+1,loginparaler[z],135,presen[z]);
                        }
                        if(presen[z]<10)
                        {
                            printf("        0%d- %s |  (Presen%ca-00%d) | ",z+1,loginparaler[z],135,presen[z]);
                        }
                        if(   (presen[z]>9) &&  (presen[z]<100)  )
                        {
                            printf("        0%d- %s |  (Presen%ca-0%d) | ",z+1,loginparaler[z],135,presen[z]);
                        }

                        if(falta[z]==100)
                        {
                            printf("(Falta-%d) | ",falta[z]);
                        }
                        if(        (falta[z]>9) &&      (falta[z]<100 )         )
                        {
                            printf("(Falta-0%d) | ",falta[z]);
                        }
                        if(falta[z]<10)
                        {
                            printf("(Falta-00%d) | ",falta[z]);
                        }
                        if(nota1[z]==100)
                        {
                            printf("(Notas %d) | ",nota1[z]);
                        }
                        if(          (nota1[z]>9) &&     (nota1[z]<100)        )
                        {
                            printf("(Notas 0%d) | ",nota1[z]);
                        }
                        if(nota1[z]<10)
                        {
                            printf("(Notas 00%d) | ",nota1[z]);
                        }

                        if(nota2[z]==100)
                        {
                            printf("(Notas %d) | ",nota2[z]);
                        }
                        if(   (nota2[z]>9) &&    (nota2[z]<100)   )
                        {
                            printf("(Notas 0%d) | ",nota2[z]);
                        }
                        if(nota2[z]<10)
                        {
                            printf("(Notas 00%d) | ",nota2[z]);
                        }
                        if(nota3[z]==100)
                        {
                            printf("(Notas %d) | ",nota3[z]);
                        }
                        if(    (nota3[z]>9) &&   (nota3[z]<100)    )
                        {
                            printf("(Notas 0%d) | ",nota3[z]);
                        }
                        if(nota3[z]<10)
                        {
                            printf("(Notas 00%d) | ",nota3[z]);
                        }
                        if(nota4[z]==100)
                        {
                            printf("(Notas %d) | ",nota4[z]);
                        }
                        if(     (nota4[z]>9) &&   (nota4[z]<100 )      )
                        {
                            printf("(Notas 0%d) | ",nota4[z]);
                        }
                        if(nota4[z]<10)
                        {
                            printf("(Notas 00%d) | ",nota4[z]);
                        }



                        if(mediaa[z]==100)
                        {
                            printf("(Media:%d) | ",mediaa[z]);
                        }
                        if((mediaa[z]>9)&&(mediaa[z]<100))
                        {
                            printf("(Media:0%d) | ",mediaa[z]);
                        }
                        if(mediaa[z]<10)
                        {
                            printf("(Media:00%d) | ",mediaa[z]);
                        }
                        if(mediaa[z]==0)
                        {
                            printf("Nenhuma Prova Foi Aplicada  | ");
                        }
                        if(mediaa[z]>60)
                        {
                            printf("APROVADO  | ");
                        }
                        if(mediaa[z]<60)
                        {
                            printf("REPROVADO | ");
                        }
                        printf("Nome: %s\n\n",nome[z]);



                    }
                    else
                    {

                        if(presen[z]==100)
                        {
                            printf("        %d- %s |  (Presen%ca-%d) | ",z+1,loginparaler[z],135,presen[z]);
                        }
                        if(presen[z]<10)
                        {
                            printf("        %d- %s |  (Presen%ca-00%d) | ",z+1,loginparaler[z],135,presen[z]);
                        }
                        if(   (presen[z]>9) &&  (presen[z]<100)  )
                        {
                            printf("        %d- %s |  (Presen%ca-0%d) | ",z+1,loginparaler[z],135,presen[z]);
                        }

                        if(falta[z]==100)
                        {
                            printf("(Falta-%d) | ",falta[z]);
                        }
                        if(        (falta[z]>9) &&      (falta[z]<100 )         )
                        {
                            printf("(Falta-0%d) | ",falta[z]);
                        }
                        if(falta[z]<10)
                        {
                            printf("(Falta-00%d) | ",falta[z]);
                        }
                        if(nota1[z]==100)
                        {
                            printf("(Notas %d) | ",nota1[z]);
                        }
                        if(          (nota1[z]>9) &&     (nota1[z]<100)        )
                        {
                            printf("(Notas 0%d) | ",nota1[z]);
                        }
                        if(nota1[z]<10)
                        {
                            printf("(Notas 00%d) | ",nota1[z]);
                        }

                        if(nota2[z]==100)
                        {
                            printf("(Notas %d) | ",nota2[z]);
                        }
                        if(   (nota2[z]>9) &&    (nota2[z]<100)   )
                        {
                            printf("(Notas 0%d) | ",nota2[z]);
                        }
                        if(nota2[z]<10)
                        {
                            printf("(Notas 00%d) | ",nota2[z]);
                        }
                        if(nota3[z]==100)
                        {
                            printf("(Notas %d) | ",nota3[z]);
                        }
                        if(    (nota3[z]>9) &&   (nota3[z]<100)    )
                        {
                            printf("(Notas 0%d) | ",nota3[z]);
                        }
                        if(nota3[z]<10)
                        {
                            printf("(Notas 00%d) | ",nota3[z]);
                        }
                        if(nota4[z]==100)
                        {
                            printf("(Notas %d) | ",nota4[z]);
                        }
                        if(     (nota4[z]>9) &&   (nota4[z]<100 )      )
                        {
                            printf("(Notas 0%d) | ",nota4[z]);
                        }
                        if(nota4[z]<10)
                        {
                            printf("(Notas 00%d) | ",nota4[z]);
                        }


                        if(mediaa[z]==100)
                        {
                            printf("(Media:%d) | ",mediaa[z]);
                        }
                        if((mediaa[z]>9)&&(mediaa[z]<100))
                        {
                            printf("(Media:0%d) | ",mediaa[z]);
                        }
                        if(mediaa[z]<10)
                        {
                            printf("(Media:00%d) | ",mediaa[z]);
                        }
                        if(mediaa[z]==0)
                        {
                            printf("Nenhuma Prova Foi Aplicada  | ");
                        }
                        if(mediaa[z]>60)
                        {
                            printf("APROVADO  | ");
                        }
                        if(mediaa[z]<60)
                        {
                            printf("REPROVADO | ");
                        }
                        printf("Nome: %s\n\n",nome[z]);





                    }
                }
                printf("                                           \n");
                printf("                                           \n");
                printf("                                           \n");
                printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
                getch();
                menuturmaA=0;
                flag6=0;
            }
            else if(menuturmaA == 1)
            {
                system("cls");
                flag6++;
                printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
                printf("\n                                           ");
                printf("\n                   Turma A                 ");
                printf("\n                  1-Presen%ca               ",135);
                printf("\n                  2-Falta                  ");
                printf("\n                                           ");
                for(z=0; z<conte; z++)
                {
                    inveter(nome[z],'_',' ');
                    if(z<9)
                    {
                        printf("\n        0%d- %s                             : ",z+1,nome[z]);
                    }
                    else
                    {
                        printf("\n        %d- %s                             : ",z+1,nome[z]);
                    }
                    // printf("\n     1-Presenca\n2-Falta\n");
                    scanf("%d",&op);
                    switch(op)
                    {
                    case 1:
                        presen[z]=presen[z]+1;
                        break;
                    case 2:
                        falta[z]=falta[z]+1;
                        break;
                    }
                    arquivo=fopen("INFOALUNOA.txt","wt");
                    for(g=0; g<conte; g++)
                    {
                        inveter(nome[g],' ','_');
                        inveter(tele[g],' ','_');
                        fprintf(arquivo,"%s %s %s %d %s %s %d %d %d %d %d %d %d\n",loginparaler[g],senhaparaler[g],nome[g],data[g],email[g],tele[g],presen[g],falta[g],nota1[g],nota2[g],nota3[g],nota4[g],ddd[g]);
                    }
                    fclose(arquivo);
                }

                printf("\n                                           ");
                printf("\n                                           ");
                printf("\n                                           \n");
                printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
                getch();
                menuturmaA=0;
                flag6=0;


            }
            else if(menuturmaA == 2)
            {
                arquivo=fopen("INFOALUNOA.txt","rt");
                for(g=0; g<conte; g++)
                {
                    fprintf(arquivo,"%s %s %s %d %s %s %d %d %d %d %d %d %d\n",loginparaler[g],senhaparaler[g],nome[g],data[g],email[g],tele[g],presen[g],falta[g],nota1[g],nota2[g],nota3[g],nota4[g],ddd[g]);
                    inveter(nome[g],'_',' ');
                }
                fclose(arquivo);



                system("cls");
                flag6++;
                int peso;

                do
                {
                    system("cls");
                    printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
                    printf("   ³                                      ³\n");
                    printf("   ³               Turma A                ³\n");
                    printf("   ³                                      ³\n");
                    printf("   ³         Escolha a Avaliação          ³\n");
                    printf("   ³                                      ³\n");
                    printf("   ³          1- Primeira Prova           ³\n");
                    printf("   ³          2- Segunda Prova            ³\n");
                    printf("   ³          3- Terceira Prova           ³\n");
                    printf("   ³          4- Quarta Prova             ³\n");
                    printf("   ³                                      ³\n");
                    printf("   ³                                      ³\n");
                    printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
                    scanf("%d",&peso);
                }
                while((peso<=0)   || (peso>4));


                switch(peso)
                {
                case 1:
                    system("cls");
                    printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
                    printf("\n                                           ");
                    printf("\n                   Turma A                 ");
                    printf("\n                Digite a NOTA              ");
                    printf("\n                                           ");
                    for(i=0; i<conte; i++)
                    {
                        inveter(nome[i],'_',' ');
                        do
                        {
                            printf("\n         %s : ",nome[i]);
                            scanf("%d",&nota1[i]);
                        }
                        while((nota1[i]<0)||(nota1[i]>100));
                        inveter(nome[i],' ','_');
                    }
                    printf("\n                                           \n");
                    printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
                    break;



                case 2:
                    system("cls");
                    printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
                    printf("\n                                           ");
                    printf("\n                   Turma A                 ");
                    printf("\n                Digite a NOTA              ");
                    printf("\n                                           ");
                    for(i=0; i<conte; i++)
                    {
                        inveter(nome[i],'_',' ');
                        do
                        {
                            printf("\n         %s : ",nome[i]);
                            scanf("%d",&nota2[i]);
                        }
                        while((nota2[i]<0)||(nota2[i]>100));
                        inveter(nome[i],' ','_');
                    }
                    printf("\n                                           \n");
                    printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
                    break;



                case 3:
                    system("cls");
                    printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
                    printf("\n                                           ");
                    printf("\n                   Turma A                 ");
                    printf("\n                Digite a NOTA              ");
                    printf("\n                                           ");
                    for(i=0; i<conte; i++)
                    {
                        inveter(nome[i],'_',' ');
                        do
                        {
                            printf("\n         %s : ",nome[i]);
                            scanf("%d",&nota3[i]);
                        }
                        while((nota3[i]<0)&&(nota3[i]>100));
                        inveter(nome[i],' ','_');
                    }
                    printf("\n                                           \n");
                    printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
                    break;




                case 4:
                    system("cls");
                    printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
                    printf("\n                                           ");
                    printf("\n                   Turma A                 ");
                    printf("\n                Digite a NOTA              ");
                    printf("\n                                           ");
                    for(i=0; i<conte; i++)
                    {
                        inveter(nome[i],'_',' ');
                        do
                        {
                            printf("\n         %s : ",nome[i]);
                            scanf("%d",&nota4[i]);
                        }
                        while((nota4[i]<0)&&(nota4[i]>100));
                        inveter(nome[i],' ','_');
                    }
                    printf("\n                                           \n");
                    printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
                    break;
                }
                arquivo=fopen("INFOALUNOA.txt","wt");
                for(z=0; z<conte; z++)
                {
                    inveter(nome[z],' ','_');
                    inveter(tele[z],' ','_');
                    fprintf(arquivo,"%s %s %s %d %s %s %d %d %d %d %d %d %d\n",loginparaler[z],senhaparaler[z],nome[z],data[z],email[z],tele[z],presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],ddd[z]);
                    //      fprintf(arquivo,"%d %s %s %d %s %s %d %d %d %d %d %d\n",loginparaler[z],senhaparaler[z],nome[z],data[z],email[z],tele[z],presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z]);
                }
                fclose(arquivo);

                getch();
                menuturmaA=0;
                flag6=0;
            }
            else if(menuturmaA == 3)
            {
                system("cls");
                flag6++;
                arquivo=fopen("INFOALUNOA.txt","rt");
                for(g=0; g<conte; g++)
                {
                    fscanf(arquivo,"%s %s %s %d %s %s %d %d %d %d %d %d %d\n",loginparaler[g],senhaparaler[g],nome[g],&data[g],email[g],tele[g],&presen[g],&falta[g],&nota1[g],&nota2[g],&nota3[g],&nota4[g],&ddd[g]);
                }
                fclose(arquivo);



                arquivo=fopen("INFOALUNOA.txt","wt");
                for(g=0; g<conte; g++)
                {
                    media[g]=0;
                    nota1[g]=0;
                    nota2[g]=0;
                    nota3[g]=0;
                    nota4[g]=0;
                    presen[g]=0;
                    falta[g]=0;
                    fprintf(arquivo,"%s %s %s %d %s %s %d %d %d %d %d %d %d\n",loginparaler[g],senhaparaler[g],nome[g],data[g],email[g],tele[g],presen[g],falta[g],nota1[g],nota2[g],nota3[g],nota4[g],ddd[g]);
                }
                fclose(arquivo);

                flag6=0;


            }
            else if(menuturmaA == 4)
            {
                system("cls");
                flag6++;
                menuprof=0;
                flag4=0;

            }

        }
        if((t == 115)||(t == 80))
        {
            menuturmaA++;

        }
        else if((t == 119)||(t == 72))
        {
            menuturmaA--;
        }
        if(menuturmaA > 4 )
        {
            menuturmaA = 0;
        }
        if(menuturmaA < 0)
        {
            menuturmaA = 4;
        }

    }
    while(flag6 == 0);
}
void NovoAluno()
{
    char senha[300];
    char senhamestre[50];
    int numerodamatricula;
    int contador=0;
    int ddea;
    int g=0;
    int pppp=1;
    int ano=20191;


    // char nome[300],email[300];
    //  int data;
    // char tele[300];
    int nota1=0,nota2=0,nota3=0,nota4=0;
    int presen=0,falta=0;

    int notas4[conte],notas3[conte],notas2[conte],notas1[conte],faltas[conte],presens[conte],datas[conte];
    char loginparaler[conte][300];

    char emails[conte][300],nomes[conte][300],senhaparalers[conte][300],teles[conte][300];
    char auxMatri[3] = "";
    int ddd[conte],turminha=0;



    FILE *policia14;
    policia14=fopen("Programa2.txt","rt");
    fscanf(policia14,"%d",&contador);
    fclose(policia14);
    conte=contador;


    policia14=fopen("Programa3.txt","rt");
    fscanf(policia14,"%d",&contador);
    fclose(policia14);
    contee=contador;

    int jani=conte+contee;








    FILE *arquivo;
    arquivo=fopen("INFOALUNOA.txt","rt");

    for(g=0; g<conte; g++)
    {
        fscanf(arquivo,"%s %s %s %d %s %s %d %d %d %d %d %d %d\n",loginparaler[g],senhaparalers[g],nomes[g],&datas[g],emails[g],teles[g],&presens[g],&faltas[g],&notas1[g],&notas2[g],&notas3[g],&notas4[g],&ddd[g]);
    }
    fclose(arquivo);


    system("cls");
    printf("\n\nDigite Senha Administrador: ");
    scanf("%s",&senhamestre);
    if(strcmp(senhamestre,"teste") == 0)
    {
        // printf("\nDigite o Numero da matricula do Aluno (EX:20190000): ");
        //srand(time(NULL));


        /*
                do
                {
                    numerodamatricula=(000+(rand()%999));


                    for(i=0; i<conte; i++)
                    {
                        if(numerodamatricula==loginparaler[i])
                        {
                            pppp=1;
                        }
                        else
                        {

                            pppp=2;
                        }
                    }




                }
                while(pppp==1);
                    */

        /*
                if (numerodamatricula < 10){
                    strcpy(auxMatri,"00");
                }else
                    if (numerodamatricula < 100){
                        strcpy(auxMatri,"0");
                    }
                    */

        char tur[300];
        // numerodamatricula=20190000+rand()%9999;

        printf("\nSenha do Novo Aluno: ");
        scanf("%s",senha);

        printf("\nDigite Sigla do Curso Do Aluno: (EX:si): ");
        scanf("%s",tur);
        printf("\nDigite A Turma Do Aluno: (EX:1 ou 2): ");
        scanf("%d",&turminha);

        getchar();



        printf("\nDigite O Nome Do Aluno: ");
        //scanf("%[^\n]s",nome);
        scanf("%[^\n]s",alunnovo.nome);


        getchar();
        inveter(alunnovo.nome,' ','_');
        do
        {
            printf("\nDigite a Data De Nascimento (EX: 16092001): ");
            // scanf("%d",&data);
            scanf("%d",&alunnovo.data);
        }
        while(   (alunnovo.data>99999999) || (alunnovo.data<00000001)     );
        printf("\nDigite O Email Do Aluno (EX:Exemplo@gmail): ");
        //scanf("%s",email);
        scanf("%s",alunnovo.email);
        inveter(alunnovo.email,' ','_');


        printf("\nDigite Telefone de Contato (EX:028 99970 7070): ");
        getchar();
        //scanf("%[^\n]s",tele);
        scanf("%[^\n]s",alunnovo.tele);


        inveter(alunnovo.tele,' ','_');
        getchar();


        char pntc[200]= "" ;

        numerodamatricula=(000+jani+1);

        if (numerodamatricula < 10)
        {
            strcpy(auxMatri,"00");
        }
        else if (numerodamatricula < 100)
        {
            strcpy(auxMatri,"0");
        }

        // strcat(pntc,ano);
        // strcat(pntc,tur);
        // strcat(pntc,auxMatri);
        // strcat(pntc,numerodamatricula);

        /*

        do
        {
           numerodamatricula=(000+conte+1);

           if (numerodamatricula < 10){
           strcpy(auxMatri,"00");
        }else
           if (numerodamatricula < 100){
               strcpy(auxMatri,"0");
           }

           strcat(pntc,ano);
           strcat(pntc,tur);
           strcat(pntc,auxMatri);
           strcat(pntc,numerodamatricula);


           for(i=0; i<conte; i++)
           {
               if(pntc==loginparaler[i])        //  999            20191si039
               {
                   pppp=1;
               }
               else
               {
                   pppp=2;

               }
           }




        }
        while(pppp==1);
        */

        // if (numerodamatricula < 10){
        //     strcpy(auxMatri,"00");
        //  }else
        //     if (numerodamatricula < 100){
        //       strcpy(auxMatri,"0");
        //   }



        printf("\nLogin Do Aluno: %d%s%s%d\n\n",ano,tur,auxMatri,numerodamatricula);
        system("pause");
        //  printf("\nDigite O numero da matricula (EX:20190000): ")
        // scanf("%d",&numerodamatricula);

        // arquivo=abreArquivo('a',"loginProfessor.txt");  //salfa login e senha
        //fprintf(arquivo,"%s %s\n",login,senha);
        //fecharArquivo(arquivo);
        if(turminha == 1)
        {

            FILE *alun;
            alun=fopen("INFOALUNOA.txt","a");
            fprintf(alun,"%d%s%s%d %s %s %d %s %s %d %d %d %d %d %d %d\n",ano,tur,auxMatri,numerodamatricula,senha,alunnovo.nome,alunnovo.data,alunnovo.email,alunnovo.tele,presen,falta,nota1,nota2,nota3,nota4,turminha);
            fclose(alun);
            FILE *policia14;
            policia14=fopen("Programa2.txt","rt");
            fscanf(policia14,"%d",&contador);
            fclose(policia14);
            conte=contador;

            policia14=fopen("Programa2.txt","wt");
            fprintf(policia14,"%d",conte+1);
            fclose(policia14);

            flag2=0;
            Trabalho();
        }
        else
        {
            FILE *alun;
            alun=fopen("INFOALUNOB.txt","a");
            fprintf(alun,"%d%s%s%d %s %s %d %s %s %d %d %d %d %d %d %d\n",ano,tur,auxMatri,numerodamatricula,senha,alunnovo.nome,alunnovo.data,alunnovo.email,alunnovo.tele,presen,falta,nota1,nota2,nota3,nota4,turminha);
            fclose(alun);
            FILE *policia14;
            policia14=fopen("Programa3.txt","rt");
            fscanf(policia14,"%d",&contador);
            fclose(policia14);
            conte=contador;

            policia14=fopen("Programa3.txt","wt");
            fprintf(policia14,"%d",conte+1);
            fclose(policia14);

            flag2=0;
            Trabalho();

        }
    }
    else
    {

        printf("\n\nSenha Administrador Errado!!");
        flag2=0;
        int i;
        for(i=3; i>=0; i--)
        {
            printf("\nVoltando em %d",i+1);
            Sleep(1000);
        }
        Trabalho();
    }
}
void Menualunos()
{
    do
    {
        if(menualuno == 0)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³        Trabalho de Programa%c%co       ³\n",135,198);
            printf("   ³             1 Periodo                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Login Aluno                        ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ³   Novo Aluno                         ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Voltar                             ³\n");
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menualuno == 1)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³        Trabalho de Programa%c%co       ³\n",135,198);
            printf("   ³             1 Periodo                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Login Aluno                        ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Novo Aluno                         ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ³   Voltar                             ³\n");
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menualuno == 2)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³        Trabalho de Programa%c%co       ³\n",135,198);
            printf("   ³             1 Periodo                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Login Aluno                        ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Novo Aluno                         ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Voltar                             ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        t = getch();
        if(t == 13)
        {
            if(menualuno == 0)
            {
                system("cls");
                flag7++;
                menuinfoaluno=0;
                flag8=0;
                continuu=1;
                loginaluno();


            }
            else if(menualuno == 1)
            {
                system("cls");
                flag7++;
                NovoAluno();

            }
            else if(menualuno == 2)
            {
                system("cls");
                flag7++;
                menutrab=0;
                flag2=0;
                Trabalho();

            }
        }
        if((t == 115)||(t == 80))
        {
            menualuno++;

        }
        else if((t == 119)||(t == 72))
        {
            menualuno--;
        }
        if(menualuno > 2 )
        {
            menualuno = 0;
        }
        if(menualuno < 0)
        {
            menualuno = 2;
        }

    }
    while(flag7 == 0);
}
void loginaluno()
{
    char c;
    char login[300];
    char senha[50];
    int a=10;
    int i=0,z;
    int g=0;

    char loginparalers[conte][300],datas[conte],presens[conte],faltas[conte],notas1[conte],notas2[conte],notas3[conte],notas4[conte];
    char senhaparalers[conte][300],nomes[conte][300],emails[conte][300],teles[conte][300];

    int ddd[conte],lmn;



    FILE *ade;
    ade=fopen("INFOALUNOA.txt","rt");

    for(g=0; g<conte; g++)
    {
        fscanf(ade,"%s %s %s %d %s %s %d %d %d %d %d %d %d\n",loginparalers[g],senhaparalers[g],nomes[g],&datas[g],emails[g],teles[g],&presens[g],&faltas[g],&notas1[g],&notas2[g],&notas3[g],&notas4[g],&ddd[g]);
    }
    fclose(ade);


    system("cls");
    printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Acesso Privado ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("   ³                                      ³\n");
    printf("          Login : ");
    scanf("%s",login);
    printf("\n");
    printf("          Senha: ");
    while((c=getch())!=13)
    {
        senha[i]=c;
        i++;
        printf("*");
    }
    senha[i]='\0';
    i=0;
    system("cls");
    g=0;

    do
    {
        //printf("%s %s\n",loginparalers[g],senhaparalers[g]);
        if((strcmp(senha,senhaparalers[g]) == 0) && (strcmp(login,loginparalers[g])== 0))
        {
            kk=g;
            system("cls");
            ddp=ddd[g];
            menuinfoaluno=0;
            flag8=0;
            infoAlunos();
        }
        else
        {
            if(g == conte)
            {
                /*
                continuu++;

                printf("\nA SENHA DIGITADA ESTA ERRADA\n\nSenha Digitada : %s\n",senha);
                for(z=3; z>0; z--)
                {
                    printf("Voltando em %d...\n",z);
                    Sleep(1000);
                }
                system("cls");
                flag2=0;
                menutrab=0;
                Trabalho();
                */
                ade=fopen("INFOALUNOB.txt","rt");

                for(g=0; g<conte; g++)
                {
                    fscanf(ade,"%s %s %s %d %s %s %d %d %d %d %d %d %d\n",loginparalers[g],senhaparalers[g],nomes[g],&datas[g],emails[g],teles[g],&presens[g],&faltas[g],&notas1[g],&notas2[g],&notas3[g],&notas4[g],&ddd[g]);
                }
                fclose(ade);

                g=0;
                if(lmn == 1)
                {

                    printf("\nA SENHA DIGITADA ESTA ERRADA\n\nSenha Digitada : %s\n",senha);
                    for(z=3; z>0; z--)
                    {
                        printf("Voltando em %d...\n",z);
                        Sleep(1000);
                    }
                    system("cls");
                    flag2=0;
                    menutrab=0;
                    continuu=5;
                    Trabalho();
                }
                else
                {
                    lmn=1;
                }
            }
            else
            {
                g++;
            }
        }
    }
    while(continuu == 1);
}
void infoAlunos()
{
    int contador=0;
    FILE *prog;
    prog=fopen("Programa2.txt","rt");
    fscanf(prog,"%d",&contador);
    fclose(prog);
    conte=contador;

    int presen[conte],falta[conte],nota1[conte],nota2[conte],nota3[conte],nota4[conte],data[conte];

    char loginparaler[conte][300],senhaparaler[conte][300],nome[conte][300],email[conte][300],tele[conte][300];
    int ddd[conte];

    int z,g;

    if(ddp==1)
    {
        FILE *arquivo;
        arquivo=fopen("INFOALUNOA.txt","rt");

        for(g=0; g<conte; g++)
        {
            fscanf(arquivo,"%s %s %s %d %s %s %d %d %d %d %d %d %d\n",loginparaler[g],senhaparaler[g],nome[g],&data[g],email[g],tele[g],&presen[g],&falta[g],&nota1[g],&nota2[g],&nota3[g],&nota4[g],&ddd[g]);
            inveter(nome[g],'_',' ');
            inveter(email[g],'_',' ');
            inveter(tele[g],'_',' ');
        }
        fclose(arquivo);
    }
    else
    {
        FILE *arquivo;
        arquivo=fopen("INFOALUNOB.txt","rt");

        for(g=0; g<conte; g++)
        {
            fscanf(arquivo,"%s %s %s %d %s %s %d %d %d %d %d %d %d\n",loginparaler[g],senhaparaler[g],nome[g],&data[g],email[g],tele[g],&presen[g],&falta[g],&nota1[g],&nota2[g],&nota3[g],&nota4[g],&ddd[g]);
            inveter(nome[g],'_',' ');
            inveter(email[g],'_',' ');
            inveter(tele[g],'_',' ');
        }
        fclose(arquivo);


    }


    do
    {
        if(menuinfoaluno == 0)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³        Trabalho de Programa%c%co       ³\n",135,198);
            printf("   ³             1 Periodo                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Notas                              ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ³   Minhas Info                        ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Voltar                             ³\n");
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menuinfoaluno == 1)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³        Trabalho de Programa%c%co       ³\n",135,198);
            printf("   ³             1 Periodo                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Notas                              ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Minhas Info                        ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ³   Voltar                             ³\n");
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menuinfoaluno == 2)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³        Trabalho de Programa%c%co       ³\n",135,198);
            printf("   ³             1 Periodo                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Notas                              ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Minhas Info                        ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Voltar                             ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        t = getch();
        if(t == 13)
        {
            if(menuinfoaluno == 0)
            {
                system("cls");
                flag8++;
                printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
                printf("                                           \n");
                printf("                                           \n");
                printf("     Aulas Comparecidas: %d                                      \n",presen[kk]);
                printf("                                           \n");
                printf("     Aulas Faltadas: %d                                      \n",falta[kk]);
                printf("                                           \n");
                printf("     Prova 1: %d                                      \n",nota1[kk]);
                printf("                                           \n");
                printf("     Prova 2: %d                                      \n",nota2[kk]);
                printf("                                           \n");
                printf("     Prova 3: %d                                      \n",nota3[kk]);
                printf("                                           \n");
                printf("     Prova 4: %d                                      \n",nota4[kk]);
                printf("                                           \n");
                printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
                getch();
                menuinfoaluno=0;
                flag8=0;


            }
            else if(menuinfoaluno == 1)
            {
                system("cls");
                flag8++;
                printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
                printf("                                           \n");
                printf("                                           \n");
                printf("    Matricula: %s                                      \n",loginparaler[kk]);
                printf("                                           \n");
                printf("    Senha: %s                                      \n",senhaparaler[kk]);
                printf("                                           \n");
                printf("    Nome Completo: %s                                      \n",nome[kk]);
                printf("                                           \n");
                printf("    Data De Nascimento: %d                                      \n",data[kk]);
                printf("                                           \n");
                printf("    Email: %s                                      \n",email[kk]);
                printf("                                           \n");
                printf("    Numero De Contato: %s                                      \n",tele[kk]);
                printf("                                           \n");
                printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
                getch();
                menuinfoaluno=0;
                flag8=0;

            }
            else if(menuinfoaluno == 2)
            {
                system("cls");
                flag8++;
                flag8++;
                flag2=0;
                menutrab=0;
                Trabalho();

            }
        }
        if((t == 115)||(t == 80))
        {
            menuinfoaluno++;

        }
        else if((t == 119)||(t == 72))
        {
            menuinfoaluno--;
        }
        if(menuinfoaluno > 2 )
        {
            menuinfoaluno = 0;
        }
        if(menuinfoaluno < 0)
        {
            menuinfoaluno = 2;
        }

    }
    while(flag8 == 0);
}
void turmaB()
{
    int contador=0;
    FILE *prog;
    prog=fopen("Programa3.txt","rt");
    fscanf(prog,"%d",&contador);
    fclose(prog);
    conte=contador;

    char loginparaler[conte][300];
    char senhaparaler[conte][300],nome[conte][300],email[conte][300],tele[conte][100];
    int data[conte];
    int g=0,z=0;
    int op=0;
    int media[conte];
    int nota1[conte];
    int nota2[conte];
    int nota3[conte];
    int nota4[conte];
    int ddd[conte];

    int presen[conte],falta[conte];

    FILE *arquivo;
    arquivo=fopen("INFOALUNOB.txt","rt");

    for(g=0; g<conte; g++)
    {
        fscanf(arquivo,"%s %s %s %d %s %s %d %d %d %d %d %d %d\n",loginparaler[g],senhaparaler[g],nome[g],&data[g],email[g],tele[g],&presen[g],&falta[g],&nota1[g],&nota2[g],&nota3[g],&nota4[g],&ddd[g]);
    }
    fclose(arquivo);


    do
    {
        if(menuturmaA == 0)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³               Turma B                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Lista Dos Alunos                   ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ³   Presen%ca/Falta                     ³\n",135);
            printf("   ³                                      ³\n");
            printf("   ³   Notas                              ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Reniciar                           ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Voltar                             ³\n");
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menuturmaA== 1)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³               Turma B                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Lista Dos Alunos                   ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Presen%ca/Falta                     ³\n",16,135);
            printf("   ³                                      ³\n");
            printf("   ³   Notas                              ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Reniciar                           ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Voltar                             ³\n");
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menuturmaA== 2)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³               Turma B                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Lista Dos Alunos                   ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Presen%ca/Falta                     ³\n",135);
            printf("   ³                                      ³\n");
            printf("   ³ %c Notas                              ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ³   Reniciar                           ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Voltar                             ³\n");
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menuturmaA== 3)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³               Turma B                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Lista Dos Alunos                   ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Presen%ca/Falta                     ³\n",135);
            printf("   ³                                      ³\n");
            printf("   ³   Notas                              ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Reniciar                           ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ³   Voltar                             ³\n");
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menuturmaA== 4)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³               Turma B                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Lista Dos Alunos                   ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Presen%ca/Falta                     ³\n",135);
            printf("   ³                                      ³\n");
            printf("   ³   Notas                              ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Reniciar                           ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Voltar                             ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        t = getch();
        if(t == 13)
        {
            if(menuturmaA == 0)
            {
                int mediaa[conte];
                /*
                arquivo=fopen("INFOALUNOA.txt","rt");

                for(g=0; g<cont; g++)
                {
                    fscanf(arquivo,"%d %s %s %d %s %s %d %d %d %d %d %d\n",&loginparaler[g],senhaparaler[g],nome[g],&data[g],email[g],tele[g],&presen[g],&falta[g],&nota1[g],&nota2[g],&nota3[g],&nota4[g]);
                }
                fclose(arquivo);*/
                FILE *arquivo;
                arquivo=fopen("INFOALUNOB.txt","rt");

                for(z=0; z<conte; z++)
                {
                    fscanf(arquivo,"%s %s %s %d %s %s %d %d %d %d %d %d %d\n",&loginparaler[z],senhaparaler[z],nome[z],&data[z],email[z],tele[z],&presen[z],&falta[z],&nota1[z],&nota2[z],&nota3[z],&nota4[z],&ddd[z]);
                    mediaa[z]=(nota1[z]+nota2[z]+nota3[z]+nota4[z])/4;
                    inveter(nome[z],'_',' ');
                }
                fclose(arquivo);

                int z=0;
                system("cls");

                printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
                printf("                                           \n");
                printf("                   Turma B                 \n");
                printf("                Lista De Alunos            \n");
                printf("                                           \n");
                printf("        N%c  Matricula                                   PROVA 1       PROVA 2       PROVA 3       PROVA 4\n\n",248);

                g=0;
                for(z=0; z<conte; z++)
                {
                    if(z<9)
                    {


                        if(presen[z]==100)
                        {
                            printf("        0%d- %s |  (Presen%ca-%d) | ",z+1,loginparaler[z],135,presen[z]);
                        }
                        if(presen[z]<10)
                        {
                            printf("        0%d- %s |  (Presen%ca-00%d) | ",z+1,loginparaler[z],135,presen[z]);
                        }
                        if(   (presen[z]>9) &&  (presen[z]<100)  )
                        {
                            printf("        0%d- %s |  (Presen%ca-0%d) | ",z+1,loginparaler[z],135,presen[z]);
                        }

                        if(falta[z]==100)
                        {
                            printf("(Falta-%d) | ",falta[z]);
                        }
                        if(        (falta[z]>9) &&      (falta[z]<100 )         )
                        {
                            printf("(Falta-0%d) | ",falta[z]);
                        }
                        if(falta[z]<10)
                        {
                            printf("(Falta-00%d) | ",falta[z]);
                        }
                        if(nota1[z]==100)
                        {
                            printf("(Notas %d) | ",nota1[z]);
                        }
                        if(          (nota1[z]>9) &&     (nota1[z]<100)        )
                        {
                            printf("(Notas 0%d) | ",nota1[z]);
                        }
                        if(nota1[z]<10)
                        {
                            printf("(Notas 00%d) | ",nota1[z]);
                        }

                        if(nota2[z]==100)
                        {
                            printf("(Notas %d) | ",nota2[z]);
                        }
                        if(   (nota2[z]>9) &&    (nota2[z]<100)   )
                        {
                            printf("(Notas 0%d) | ",nota2[z]);
                        }
                        if(nota2[z]<10)
                        {
                            printf("(Notas 00%d) | ",nota2[z]);
                        }
                        if(nota3[z]==100)
                        {
                            printf("(Notas %d) | ",nota3[z]);
                        }
                        if(    (nota3[z]>9) &&   (nota3[z]<100)    )
                        {
                            printf("(Notas 0%d) | ",nota3[z]);
                        }
                        if(nota3[z]<10)
                        {
                            printf("(Notas 00%d) | ",nota3[z]);
                        }
                        if(nota4[z]==100)
                        {
                            printf("(Notas %d) | ",nota4[z]);
                        }
                        if(     (nota4[z]>9) &&   (nota4[z]<100 )      )
                        {
                            printf("(Notas 0%d) | ",nota4[z]);
                        }
                        if(nota4[z]<10)
                        {
                            printf("(Notas 00%d) | ",nota4[z]);
                        }



                        if(mediaa[z]==100)
                        {
                            printf("(Media:%d) | ",mediaa[z]);
                        }
                        if((mediaa[z]>9)&&(mediaa[z]<100))
                        {
                            printf("(Media:0%d) | ",mediaa[z]);
                        }
                        if(mediaa[z]<10)
                        {
                            printf("(Media:00%d) | ",mediaa[z]);
                        }
                        if(mediaa[z]==0)
                        {
                            printf("Nenhuma Prova Foi Aplicada  | ");
                        }
                        if(mediaa[z]>60)
                        {
                            printf("APROVADO  | ");
                        }
                        if(mediaa[z]<60)
                        {
                            printf("REPROVADO | ");
                        }
                        printf("Nome: %s\n\n",nome[z]);



                    }
                    else
                    {

                        if(presen[z]==100)
                        {
                            printf("        %d- %s |  (Presen%ca-%d) | ",z+1,loginparaler[z],135,presen[z]);
                        }
                        if(presen[z]<10)
                        {
                            printf("        %d- %s |  (Presen%ca-00%d) | ",z+1,loginparaler[z],135,presen[z]);
                        }
                        if(   (presen[z]>9) &&  (presen[z]<100)  )
                        {
                            printf("        %d- %s |  (Presen%ca-0%d) | ",z+1,loginparaler[z],135,presen[z]);
                        }

                        if(falta[z]==100)
                        {
                            printf("(Falta-%d) | ",falta[z]);
                        }
                        if(        (falta[z]>9) &&      (falta[z]<100 )         )
                        {
                            printf("(Falta-0%d) | ",falta[z]);
                        }
                        if(falta[z]<10)
                        {
                            printf("(Falta-00%d) | ",falta[z]);
                        }
                        if(nota1[z]==100)
                        {
                            printf("(Notas %d) | ",nota1[z]);
                        }
                        if(          (nota1[z]>9) &&     (nota1[z]<100)        )
                        {
                            printf("(Notas 0%d) | ",nota1[z]);
                        }
                        if(nota1[z]<10)
                        {
                            printf("(Notas 00%d) | ",nota1[z]);
                        }

                        if(nota2[z]==100)
                        {
                            printf("(Notas %d) | ",nota2[z]);
                        }
                        if(   (nota2[z]>9) &&    (nota2[z]<100)   )
                        {
                            printf("(Notas 0%d) | ",nota2[z]);
                        }
                        if(nota2[z]<10)
                        {
                            printf("(Notas 00%d) | ",nota2[z]);
                        }
                        if(nota3[z]==100)
                        {
                            printf("(Notas %d) | ",nota3[z]);
                        }
                        if(    (nota3[z]>9) &&   (nota3[z]<100)    )
                        {
                            printf("(Notas 0%d) | ",nota3[z]);
                        }
                        if(nota3[z]<10)
                        {
                            printf("(Notas 00%d) | ",nota3[z]);
                        }
                        if(nota4[z]==100)
                        {
                            printf("(Notas %d) | ",nota4[z]);
                        }
                        if(     (nota4[z]>9) &&   (nota4[z]<100 )      )
                        {
                            printf("(Notas 0%d) | ",nota4[z]);
                        }
                        if(nota4[z]<10)
                        {
                            printf("(Notas 00%d) | ",nota4[z]);
                        }


                        if(mediaa[z]==100)
                        {
                            printf("(Media:%d) | ",mediaa[z]);
                        }
                        if((mediaa[z]>9)&&(mediaa[z]<100))
                        {
                            printf("(Media:0%d) | ",mediaa[z]);
                        }
                        if(mediaa[z]<10)
                        {
                            printf("(Media:00%d) | ",mediaa[z]);
                        }
                        if(mediaa[z]==0)
                        {
                            printf("Nenhuma Prova Foi Aplicada  | ");
                        }
                        if(mediaa[z]>60)
                        {
                            printf("APROVADO  | ");
                        }
                        if(mediaa[z]<60)
                        {
                            printf("REPROVADO | ");
                        }
                        printf("Nome: %s\n\n",nome[z]);





                    }
                }
                printf("                                           \n");
                printf("                                           \n");
                printf("                                           \n");
                printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
                getch();
                menuturmaA=0;
                flag6=0;
            }
            else if(menuturmaA == 1)
            {
                system("cls");
                flag6++;
                printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
                printf("\n                                           ");
                printf("\n                   Turma B                 ");
                printf("\n                  1-Presen%ca               ",135);
                printf("\n                  2-Falta                  ");
                printf("\n                                           ");
                for(z=0; z<conte; z++)
                {
                    inveter(nome[z],'_',' ');
                    if(z<9)
                    {
                        printf("\n        0%d- %s                             : ",z+1,nome[z]);
                    }
                    else
                    {
                        printf("\n        %d- %s                             : ",z+1,nome[z]);
                    }
                    // printf("\n     1-Presenca\n2-Falta\n");
                    scanf("%d",&op);
                    switch(op)
                    {
                    case 1:
                        presen[z]=presen[z]+1;
                        break;
                    case 2:
                        falta[z]=falta[z]+1;
                        break;
                    }
                    arquivo=fopen("INFOALUNOB.txt","wt");
                    for(g=0; g<conte; g++)
                    {
                        inveter(nome[g],' ','_');
                        inveter(tele[g],' ','_');
                        fprintf(arquivo,"%s %s %s %d %s %s %d %d %d %d %d %d %d\n",loginparaler[g],senhaparaler[g],nome[g],data[g],email[g],tele[g],presen[g],falta[g],nota1[g],nota2[g],nota3[g],nota4[g],ddd[g]);
                    }
                    fclose(arquivo);
                }

                printf("\n                                           ");
                printf("\n                                           ");
                printf("\n                                           \n");
                printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
                getch();
                menuturmaA=0;
                flag6=0;


            }
            else if(menuturmaA == 2)
            {
                arquivo=fopen("INFOALUNOB.txt","rt");
                for(g=0; g<conte; g++)
                {
                    fprintf(arquivo,"%s %s %s %d %s %s %d %d %d %d %d %d %d\n",loginparaler[g],senhaparaler[g],nome[g],data[g],email[g],tele[g],presen[g],falta[g],nota1[g],nota2[g],nota3[g],nota4[g],ddd[g]);
                    inveter(nome[g],'_',' ');
                }
                fclose(arquivo);



                system("cls");
                flag6++;
                int peso;

                do
                {
                    system("cls");
                    printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
                    printf("   ³                                      ³\n");
                    printf("   ³               Turma B                ³\n");
                    printf("   ³                                      ³\n");
                    printf("   ³         Escolha a Avaliação          ³\n");
                    printf("   ³                                      ³\n");
                    printf("   ³          1- Primeira Prova           ³\n");
                    printf("   ³          2- Segunda Prova            ³\n");
                    printf("   ³          3- Terceira Prova           ³\n");
                    printf("   ³          4- Quarta Prova             ³\n");
                    printf("   ³                                      ³\n");
                    printf("   ³                                      ³\n");
                    printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
                    scanf("%d",&peso);
                }
                while((peso<=0)   || (peso>4));


                switch(peso)
                {
                case 1:
                    system("cls");
                    printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
                    printf("\n                                           ");
                    printf("\n                   Turma B                 ");
                    printf("\n                Digite a NOTA              ");
                    printf("\n                                           ");
                    for(i=0; i<conte; i++)
                    {
                        inveter(nome[i],'_',' ');
                        do
                        {
                            printf("\n         %s : ",nome[i]);
                            scanf("%d",&nota1[i]);
                        }
                        while((nota1[i]<=0)&&(nota1[i]>=100));
                        inveter(nome[i],' ','_');
                    }
                    printf("\n                                           \n");
                    printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
                    break;



                case 2:
                    system("cls");
                    printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
                    printf("\n                                           ");
                    printf("\n                   Turma B                 ");
                    printf("\n                Digite a NOTA              ");
                    printf("\n                                           ");
                    for(i=0; i<conte; i++)
                    {
                        inveter(nome[i],'_',' ');
                        do
                        {
                            printf("\n         %s : ",nome[i]);
                            scanf("%d",&nota2[i]);
                        }
                        while((nota2[i]<=0)&&(nota2[i]>=100));
                        inveter(nome[i],' ','_');
                    }
                    printf("\n                                           \n");
                    printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
                    break;



                case 3:
                    system("cls");
                    printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
                    printf("\n                                           ");
                    printf("\n                   Turma B                 ");
                    printf("\n                Digite a NOTA              ");
                    printf("\n                                           ");
                    for(i=0; i<conte; i++)
                    {
                        inveter(nome[i],'_',' ');
                        do
                        {
                            printf("\n         %s : ",nome[i]);
                            scanf("%d",&nota3[i]);
                        }
                        while((nota3[i]<=0)&&(nota3[i]>=100));
                        inveter(nome[i],' ','_');
                    }
                    printf("\n                                           \n");
                    printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
                    break;




                case 4:
                    system("cls");
                    printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
                    printf("\n                                           ");
                    printf("\n                   Turma B                 ");
                    printf("\n                Digite a NOTA              ");
                    printf("\n                                           ");
                    for(i=0; i<conte; i++)
                    {
                        inveter(nome[i],'_',' ');
                        do
                        {
                            printf("\n         %s : ",nome[i]);
                            scanf("%d",&nota4[i]);
                        }
                        while((nota4[i]<=0)&&(nota4[i]>=100));
                        inveter(nome[i],' ','_');
                    }
                    printf("\n                                           \n");
                    printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
                    break;
                }
                arquivo=fopen("INFOALUNOB.txt","wt");
                for(z=0; z<conte; z++)
                {
                    inveter(nome[z],' ','_');
                    inveter(tele[z],' ','_');
                    fprintf(arquivo,"%s %s %s %d %s %s %d %d %d %d %d %d %d\n",loginparaler[z],senhaparaler[z],nome[z],data[z],email[z],tele[z],presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],ddd[z]);
                    //      fprintf(arquivo,"%d %s %s %d %s %s %d %d %d %d %d %d\n",loginparaler[z],senhaparaler[z],nome[z],data[z],email[z],tele[z],presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z]);
                }
                fclose(arquivo);

                getch();
                menuturmaA=0;
                flag6=0;
            }
            else if(menuturmaA == 3)
            {
                system("cls");
                flag6++;
                arquivo=fopen("INFOALUNOB.txt","rt");
                for(g=0; g<conte; g++)
                {
                    fscanf(arquivo,"%s %s %s %d %s %s %d %d %d %d %d %d %d\n",loginparaler[g],senhaparaler[g],nome[g],&data[g],email[g],tele[g],&presen[g],&falta[g],&nota1[g],&nota2[g],&nota3[g],&nota4[g],&ddd[g]);
                }
                fclose(arquivo);



                arquivo=fopen("INFOALUNOB.txt","wt");
                for(g=0; g<conte; g++)
                {
                    media[g]=0;
                    nota1[g]=0;
                    nota2[g]=0;
                    nota3[g]=0;
                    nota4[g]=0;
                    presen[g]=0;
                    falta[g]=0;
                    fprintf(arquivo,"%s %s %s %d %s %s %d %d %d %d %d %d %d\n",loginparaler[g],senhaparaler[g],nome[g],data[g],email[g],tele[g],presen[g],falta[g],nota1[g],nota2[g],nota3[g],nota4[g],ddd[g]);
                }
                fclose(arquivo);

                flag6=0;


            }
            else if(menuturmaA == 4)
            {
                system("cls");
                flag6++;
                menuprof=0;
                flag4=0;

            }

        }
        if((t == 115)||(t == 80))
        {
            menuturmaA++;

        }
        else if((t == 119)||(t == 72))
        {
            menuturmaA--;
        }
        if(menuturmaA > 4 )
        {
            menuturmaA = 0;
        }
        if(menuturmaA < 0)
        {
            menuturmaA = 4;
        }

    }
    while(flag6 == 0);
}

