#include<stdio.h>
#include<stdlib.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include <time.h>


int flag,xp,sair=0,t;

int menutrab=0,flag2=0;

int menuagend=0,flag3=0,i=0;

int flag1=0,menucor=0;

int menuprof=0,flag4=0;

int cont=0,continu=0;
int continuu=0;

int k=0,kk=0;

//int turma[999];


int menunovacontaprofe=0,flag5=0;
int menuinfoaluno=0,flag8=0;

int menuturmaA=0,flag6=0;


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
                continuu=0;
                LoginAluno();

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
        scanf("%s",tele);
        inveter(tele,' ','_');
        printf("Digite a Turma Encarrecado pelo Professor\n   1- Turma A\n   2- Turma B\n\n   Turma Escolhida: ");
        do
        {
            scanf("%d",&turma);
        }
        while((turma>=1)||(turma<=2));

        // arquivo=abreArquivo('a',"loginProfessor.txt");  //salfa login e senha
        // fprintf(arquivo,"%s %s\n",login,senha);
        // fecharArquivo(arquivo);

        FILE *prof;
        prof=abreArquivo('a',"INFOPROFESSOR.txt");
        fprintf(arquivo,"%s %s %s %d %s %s %d\n",login,senha,nome,data,email,tele,turma);
        fecharArquivo(prof);






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
void agendaler()
{
    int a=10;
    int i=0;
    char c;
    char senha[999];

    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);
    do
    {
        if(menuagend == 0)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³        Trabalho de Programa%c%co       ³\n",135,198);
            printf("   ³             1 Periodo                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Escrever Na Agenda                 ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ³   Ler a Agenda                       ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Voltar                             ³\n");
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menuagend == 1)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³        Trabalho de Programa%c%co       ³\n",135,198);
            printf("   ³             1 Periodo                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Escrever Na Agenda                 ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Ler a Agenda                       ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ³   Voltar                             ³\n");
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menuagend == 2)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³        Trabalho de Programa%c%co       ³\n",135,198);
            printf("   ³             1 Periodo                ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Escrever Na Agenda                 ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Ler a Agenda                       ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Voltar                             ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        t = getch();
        if(t == 13)
        {
            if(menuagend == 0)
            {
                char frasee[300];
                system("cls");
                flag3++;
                FILE *agenda;
                printf("Digite Sua Frase Para Salvar: \n");
                fgets(frasee,300,stdin);
                if(frasee == NULL)
                {
                    flag3=0;
                    agendaler();
                }
                else
                {
                    //agenda=abreArquivo('a',"Agenda.txt");
                    agenda=fopen("Agenda.txt","a");
                    // fprintf(agenda,"Data: %d/%d/%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
                    //fprintf(agenda,"Data Da Escrita:\n%d/%d/%d\n\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
                    fprintf(agenda,"%s\n",frasee);
                    fclose(agenda);
                    flag3=0;
                    agendaler();
                }



                /*
                     FILE *arquivo;
                printf("Seu Login: ");
                scanf("%s",&nome);
                printf("Sua senha: ");
                scanf("%s",&senha);
                arquivo=abreArquivo('a',"Login.txt");
                fprintf(arquivo,"%s %s\n",nome,senha);
                fecharArquivo(arquivo);


                     */




            }
            else if(menuagend == 1)
            {
                system("cls");
                flag3++;
                FILE *agenda;
                char frase[300];

                agenda=fopen("Agenda.txt","rt");
                printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Data de Acesso ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
                printf("   ³                                      ³\n");
                if(tm.tm_mday<10)
                {
                    printf("   ³              0%d/%d/%d               ³\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
                }
                else
                {
                    printf("   ³              %d/%d/%d               ³\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
                }

                time_t tempo; //variável que guarda um tempo
                struct tm *sTempo;  //estrutura que guarda um tempo
                tempo = time( NULL ); //recebe tempo
                sTempo = localtime( &tempo );

                if(sTempo->tm_sec<10)
                {
                    printf("   ³              %d:%d:0%d                ³\n",sTempo->tm_hour, sTempo->tm_min, sTempo->tm_sec);
                }
                else
                {
                    printf("   ³              %d:%d:%d                ³\n",sTempo->tm_hour, sTempo->tm_min, sTempo->tm_sec);
                }

                if(agenda == NULL)
                {
                    printf("\nEsta Vazio");
                    Sleep(5000);
                    flag3=0;
                    agendaler();

                }
                while(fgets(frase,300,agenda)!= NULL)
                {
                    printf("     %s",frase);
                }
                fclose(agenda);
                system("pause");
                flag3=0;
                agendaler();

            }
            else if(menuagend == 2)
            {
                system("cls");
                flag3++;
                flag2=0;
                Trabalho();
            }
        }
        if((t == 115)||(t == 80))
        {
            menuagend++;

        }
        else if((t == 119)||(t == 72))
        {
            menuagend--;
        }
        if(menuagend > 2 )
        {
            menuagend = 0;
        }
        if(menuagend < 0)
        {
            menuagend = 2;
        }

    }
    while(flag3 == 0);
}
void loginProfessor()
{
    char c;
    char login[50];
    char senha[50];
    int a=10;
    int i=0,z;
    int g=0;

    int data[cont],turma[cont];

    char loginparaler[cont][50];
    char senhaparaler[cont][50];
    char nome[cont][500],email[cont][300],tele[cont][300];
    //  char nome[cont][300];
    //  int data[cont];





    // char login[300],senha[300];
    // char senhamestre[50];
//char nome[300];
    //  int data=0;

//fprintf(arquivo,"%s %s %s %d %d\n",nome,data,cpf);/


/*
        FILE *arquivo;
        arquivo=fopen("loginProfessor.txt","rt");

        for(g=0; g<cont; g++)
        {
            fscanf(arquivo,"%s %s\n",loginparaler[g],senhaparaler[g]);

        }
        fecharArquivo(arquivo);
        */


    FILE *arquivo;
    arquivo=fopen("INFOPROFESSOR.txt","rt");

    for(g=0; g<cont; g++)
    {
        fscanf(arquivo,"%s %s %s %d %s %s %d\n",loginparaler[g],senhaparaler[g],nome[g],&data[g],email[g],tele[g],&turma[g]);
        printf("%s",loginparaler[g]);
        printf("%s",senhaparaler[g]);
    }
    fclose(arquivo);


    //printf("%s",loginparaler[0]);
   // printf("%s",senhaparaler[0]);
    system("pause");

    system("cls");
    printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄ Acesso Privado ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("   ³                                      ³\n");
    printf("          Login : ");
    getchar();
    scanf("%s",login);
    printf("\n");
    printf("          Senha: ");
    while((c=getch())!=13)  //13 = ENTER
    {
        senha[i]=c;
        i++;
        printf("*");      //imprime o Anterisco
    }
    senha[i]='\0';
    i=0;
    system("cls");
    //a= (strcmp(senha,"teste") && (login,"teste"));                                    //antes
    //a= ((strcmp(senha,senhaparaler) == 0) && ((login,loginparaler) == 0));
    //if((login == &loginparaler) && (senha == &senhaparaler)){
    //if(a==0){                                                                           //antes


    //for(g=0;g<40;g++){
    // inveter(senha[g],' ','a');
    // }


    g=0;

    do
    {
        if((strcmp(senha,senhaparaler[g]) == 0) && (strcmp(login,loginparaler[g]) == 0))
        {
            printf("passou %d",g);
            system("pause");
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
                printf("%d",g);
                system("pause");
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
                printf("%d",g);
                system("pause");
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
                else if(turma[k] == 2)
                {
                    // turmaB();
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
    int loginparaler[cont];
    char senhaparaler[cont][300],nome[cont][300],email[cont][300],tele[cont][100];
    int data[cont];
    int g=0,z=0;
    int op=0;
    int media[cont];
    int nota1[cont];
    int nota2[cont];
    int nota3[cont];
    int nota4[cont];
    int dd=0;

    int presen[cont],falta[cont];

//


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
            printf("   ³ %c Voltar                             ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        t = getch();
        if(t == 13)
        {
            if(menuturmaA == 0)
            {


                int z=0;
                system("cls");
                flag6++;
                printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
                printf("                                           \n");
                printf("                   Turma A                 \n");
                printf("                Lista De Alunos            \n");
                printf("                                           \n");
                printf("                                                         PESO 1       PESO 2       PESO 3       PESO 4\n\n");
                for(z=0; z<cont; z++)
                {
                    inveter(nome[z],'_',' ');
                    if(z<9)
                    {
                        if((presen[z]<10)&&(falta[z]<10))
                        {
                            if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-0%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-0%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-00%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<10)&&(nota3[z]<10)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-00%d) (Notas-00%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }










                        }
                        else if((presen[z]<100)&&(falta[z]<100))
                        {
                            if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-0%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-0%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }

                            else if((nota1[z]<10)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-00%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<10)&&(nota3[z]<10)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-00%d) (Notas-00%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }

                        }
                        else if((presen[z]<10)&&(falta[z]<100))
                        {
                            if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-0%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-0%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }

                            else if((nota1[z]<10)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-00%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<10)&&(nota3[z]<10)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-00%d) (Notas-00%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }

                        }
                        else if((presen[z]<100)&&(falta[z]<10))
                        {
                            if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-0%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-0%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }

                            else if((nota1[z]<10)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-00%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<10)&&(nota3[z]<10)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-00%d) (Notas-00%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }

                        }
                        else if(presen[z]<10)
                        {
                            if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-0%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-0%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }

                            else if((nota1[z]<10)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-00%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<10)&&(nota3[z]<10)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-00%d) (Notas-00%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }

                        }
                        else if(falta[z]<10)
                        {
                            if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-0%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-0%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }

                            else if((nota1[z]<10)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-00%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<10)&&(nota3[z]<10)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-00%d) (Notas-00%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }

                        }
                        else
                        {
                            printf("        0%d- %s  (Presen%ca-%d) (Falta-%d) (Notas-%d)   (Notas-%d) (Notas-%d) (Notas-%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                        }
                    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                    else
                    {
                        if((presen[z]<10)&&(falta[z]<10))
                        {
                            if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-0%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-0%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-00%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<10)&&(nota3[z]<10)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-00%d) (Notas-00%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                        }
                        else if((presen[z]<100)&&(falta[z]<100))
                        {
                            if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-0%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-0%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }

                            else if((nota1[z]<10)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-00%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<10)&&(nota3[z]<10)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-00%d) (Notas-00%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }

                        }
                        else if((presen[z]<10)&&(falta[z]<100))
                        {
                            if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-0%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-0%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }

                            else if((nota1[z]<10)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-00%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<10)&&(nota3[z]<10)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-00%d) (Notas-00%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }

                        }
                        else if((presen[z]<100)&&(falta[z]<10))
                        {
                            if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-0%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-0%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }

                            else if((nota1[z]<10)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-00%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<10)&&(nota3[z]<10)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-00%d) (Notas-00%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }

                        }
                        else if(presen[z]<10)
                        {
                            if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-0%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-0%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }

                            else if((nota1[z]<10)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-00%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<10)&&(nota3[z]<10)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-00%d) (Notas-00%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }

                        }
                        else if(falta[z]<10)
                        {
                            if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-0%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<100)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-0%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }

                            else if((nota1[z]<10)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-00%d) (Notas-0%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<100)&&(nota3[z]<10)&&(nota4[z]<100))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-0%d) (Notas-00%d) (Notas-0%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<100)&&(nota2[z]<10)&&(nota3[z]<100)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-0%d) (Notas-00%d) (Notas-0%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }
                            else if((nota1[z]<10)&&(nota2[z]<10)&&(nota3[z]<10)&&(nota4[z]<10))
                            {
                                printf("        0%d- %s  (Presen%ca-00%d) (Falta-00%d)   (Notas-00%d) (Notas-00%d) (Notas-00%d) (Notas-00%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                            }

                        }
                        else
                        {
                            printf("        0%d- %s  (Presen%ca-%d) (Falta-%d) (Notas-%d)   (Notas-%d) (Notas-%d) (Notas-%d) (Media-%d)\n\n",z+1,nome[z],135,presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z],media[z]);
                        }
                    }
                }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                printf("                                           \n");
                printf("                                           \n");
                printf("                                           \n");
                printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
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
                for(z=0; z<cont; z++)
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
                    FILE *arquivo;
                    arquivo=fopen("INFOALUNOA.txt","wt");
                    for(g=0; g<cont; g++)
                    {
                        inveter(nome[g],' ','_');
                        inveter(tele[g],' ','_');
                        fprintf(arquivo,"%d %s %s %d %s %s %d %d %d %d %d %d\n",loginparaler[g],senhaparaler[g],nome[g],data[g],email[g],tele[g],presen[g],falta[g],nota1[g],nota2[g],nota3[g],nota4[g]);
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

                FILE *arquivo;
                arquivo=fopen("INFOALUNOA.txt","rt");
                for(g=0; g<cont; g++)
                {
                    fprintf(arquivo,"%d %s %s %d %s %s %d %d %d %d %d %d\n",loginparaler[g],senhaparaler[g],nome[g],data[g],email[g],tele[g],presen[g],falta[g],nota1[g],nota2[g],nota3[g],nota4[g]);
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
                    for(i=0; i<cont; i++)
                    {
                        inveter(nome[i],'_',' ');
                        printf("\n         %s : ",nome[i]);
                        do
                        {
                            scanf("%d",&nota1[i]);
                            inveter(nome[i],' ','_');
                        }
                        while((nota1[i]<=0)&&(nota1[i]>=100));
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
                    for(i=0; i<cont; i++)
                    {
                        inveter(nome[i],'_',' ');
                        printf("\n         %s : ",nome[i]);
                        do
                        {
                            scanf("%d",&nota2[i]);
                            inveter(nome[i],' ','_');
                        }
                        while((nota2[i]<=0)&&(nota2[i]>=100));
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
                    for(i=0; i<cont; i++)
                    {
                        inveter(nome[i],'_',' ');
                        printf("\n         %s : ",nome[i]);
                        do
                        {
                            scanf("%d",&nota3[i]);
                            inveter(nome[i],' ','_');
                        }
                        while((nota3[i]<=0)&&(nota3[i]>=100));
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
                    for(i=0; i<cont; i++)
                    {
                        inveter(nome[i],'_',' ');
                        printf("\n         %s : ",nome[i]);
                        do
                        {
                            scanf("%d",&nota4[i]);
                            inveter(nome[i],' ','_');
                        }
                        while((nota4[i]<=0)&&(nota4[i]>=100));
                    }
                    printf("\n                                           \n");
                    printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
                    break;
                }

                arquivo=fopen("INFOALUNOA.txt","wt");
                for(z=0; z<cont; z++)
                {
                    inveter(nome[z],' ','_');
                    inveter(tele[z],' ','_');
                    fprintf(arquivo,"%d %s %s %d %s %s %d %d %d %d %d %d\n",loginparaler[z],senhaparaler[z],nome[z],data[z],email[z],tele[z],presen[z],falta[z],nota1[z],nota2[z],nota3[z],nota4[z]);
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
        if(menuturmaA > 3 )
        {
            menuturmaA = 0;
        }
        if(menuturmaA < 0)
        {
            menuturmaA = 3;
        }
    }
    while(flag6 == 0);
}
void LoginAluno()
{
    char c;
    int g;
    i=0;
    kk=0;

    int loginparaler[cont],data[cont],presen[cont],falta[cont],nota1[cont],nota2[cont],nota3[cont],nota4[cont];
    char senhaparaler[cont][150],nome[cont][150],email[cont][150],tele[cont][150];

    char senha[150];
    int login;


    FILE *arquivo;
    arquivo=fopen("INFOALUNOA.txt","rt");

    for(g=0; g<cont; g++)
    {
        fscanf(arquivo,"%d %s %s %d %s %s %d %d %d %d %d %d\n",&loginparaler[g],senhaparaler[g],nome[g],&data[g],email[g],tele[g],&presen[g],&falta[g],&nota1[g],&nota2[g],&nota3[g],&nota4[g]);

    }
    fecharArquivo(arquivo);

    system("cls");
    printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄ Area Do Aluno ÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("   ³                                      ³\n");
    printf("          Login : ");
    getchar();
    scanf("%d",&login);
    printf("\n");
    printf("          Senha: ");
    while((c=getch())!=13)  //13 = ENTER
    {
        senha[i]=c;
        i++;
        printf("*");      //imprime o Anterisco
    }
    senha[i]='\0';
    i=0;
    g=0;

    do
    {
        if((strcmp(senha,senhaparaler[g]) == 0) && (strcmp(login,loginparaler[g]) == 0))
        {
            kk=g;
            continuu++;
            system("cls");
            menuinfoaluno=0;
            flag8=0;
            menualuno();

        }
        else
        {
            if(g == cont)
            {
                continuu++;

                printf("\n\nA SENHA DIGITADA ESTA ERRADA\n\nSenha Digitada : %s\n",senha);
                for(int z=3; z>0; z--)
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
    while(continuu == 0);

}
void menualuno()
{
    int g;

    int loginparaler[cont],data[cont],presen[cont],falta[cont],nota1[cont],nota2[cont],nota3[cont],nota4[cont];
    char senhaparaler[cont][150],nome[cont][150],email[cont][150],tele[cont][150];


    FILE *arquivo;
    arquivo=fopen("INFOALUNOA.txt","rt");

    for(g=0; g<cont; g++)
    {
        fscanf(arquivo,"%d %s %s %d %s %s %d %d %d %d %d %d\n",&loginparaler[g],senhaparaler[g],nome[g],&data[g],email[g],tele[g],&presen[g],&falta[g],&nota1[g],&nota2[g],&nota3[g],&nota4[g]);

    }
    fecharArquivo(arquivo);


    do
    {
        if(menuinfoaluno == 0)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³             Area Do Aluno            ³\n");
            printf("   ³                                      ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Notas                              ³\n",16);
            printf("   ³                                      ³\n");
            printf("   ³   Minhas Informa%coes                 ³\n",135);
            printf("   ³                                      ³\n");
            printf("   ³   Voltar                             ³\n");
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menuinfoaluno == 1)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³             Area Do Aluno            ³\n");
            printf("   ³                                      ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Notas                              ³\n");
            printf("   ³                                      ³\n");
            printf("   ³ %c Minhas Informa%coes                 ³\n",16,135);
            printf("   ³                                      ³\n");
            printf("   ³   Voltar                             ³\n");
            printf("   ³                                      ³\n");
            printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        else if(menuinfoaluno == 2)
        {
            system("cls");
            printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
            printf("   ³                                      ³\n");
            printf("   ³             Area Do Aluno            ³\n");
            printf("   ³                                      ³\n");
            printf("   ³                                      ³\n");
            printf("   ³   Notas                              ³\n");
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
            if(menuinfoaluno == 0)
            {
                flag8++;
                system("cls");
                printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
                printf("   ³                                      ³\n");
                printf("   ³            Area Do Aluno             ³\n");
                printf("   ³                                      ³\n");
                printf("   ³                                      ³\n");
                printf("   ³   Primeira Prova :(000)              ³\n");
                printf("   ³                                      ³\n");
                printf("   ³   Segunda Prova  :(000)              ³\n");
                printf("   ³                                      ³\n");
                printf("   ³   Terceira Prova :(000)              ³\n");
                printf("   ³                                      ³\n");
                printf("   ³   Quarta Prova   :(000)              ³\n");
                printf("   ³                                      ³\n");
                printf("   ³                                      ³\n");
                printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
                getch();
                menuinfoaluno=0;
                flag8=0;


            }
            else if(menuinfoaluno == 1)
            {
                system("cls");
                flag8++;
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
                printf("\n   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
                printf("                                          \n");
                printf("                Area Do Aluno              \n");
                printf("                                          \n");
                printf("       Login : %d                         \n",loginparaler[k]);
                printf("                                          \n");
                printf("       Senha : %s                         \n",senhaparaler[k]);
                printf("                                          \n");
                printf("       Nome  : %s                         \n",nome[k]);
                printf("                                          \n");



                if((w<10)&&(t<10))
                {
                    printf("       Data  : 0%d|0%d|%d                   \n",w,t,i);
                }
                else if(w<10)
                {
                    printf("       Data  : 0%d|%d|%d                   \n",w,t,i);
                }
                else if(t<10)
                {
                    printf("       Data  : %d|0%d|%d                   \n",w,t,i);
                }
                else
                {
                    printf("       Data  : %d|%d|%d                   \n",w,t,i);
                }



                printf("                                          \n");
                printf("       Email : %s                         \n",email[k]);
                printf("                                          \n");
                printf("       Telefone : %s                      \n",tele[k]);
                printf("                                          \n");
                printf("                                          \n");
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


