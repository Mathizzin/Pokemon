#include <stdio.h>
#include <stdlib.h>
void counter()
{
}
void battle(int *inic)
{

    int op, OpAtk;
    float garra = 60, firex = 70, lanca = 87.5, blitz = 150;
    float CusGarra = 30, CusFirex = 40, Cuslanca = 50, Cusblitz = 100;
    float VidaChari = 600, defChar = 30, HealChar = 100, EnerChar = 50;

    float invest = 30, chicote = 35, leech = 40, SeedBomb = 200;
    float VidaBull = 900, defBull = 50, HealBull = 75, EnerBull = 30;

    float enfren = 35, WaterG = 40, HydroP = 55, SkullBash = 125;
    float VidaSt = 850, defSt = 40, HealSt = 90, EnerSt = 50;

    if (*inic == 1)
    {
        printf("Charizard Vs Bullbasair \n");
        system("pause");
        system("cls");

        do
        {
            printf("Energia Atual do Charizard = %0.2f \n", EnerChar);
            printf("Qual movimento deseja fazer? \n");
            if (EnerChar >= 100)
            {
                printf("1 - ataque, 2 - curar, esp = 3:   ");
                scanf("%d", &op);
                system("cls");
            }
            else
            {
                printf("1 - ataque, 2 - curar:   ");
                scanf("%d", &op);
                system("cls");
            }

            if (op == 1)
            {
                printf("Opcao 1 -  Garra do dragao (dano 60/ Custo 30)\n");
                printf("Opcao 2 -  Explosao de fogo (dano 70 Custo 40)\n");
                printf("Opcao 3 -  Lanca-chamas (dano 87.5 / Custo 50)\n");
                printf("escolha qual movimento deseja utilizar:  ");
                scanf("%d", &OpAtk);
                system("cls");

                if (OpAtk == 1 && EnerChar >= CusGarra)
                {

                    printf("charmander ataca com Garra do Dragao \n");
                    VidaBull = VidaBull - (garra - defBull);
                    EnerChar = ((EnerChar - CusGarra) + 30) * 1.29;
                    if (VidaBull < 0)
                    {
                        VidaBull = 0;
                    }
                    printf("Charmander deu 60 de dano, Bull esta com %0.2f \n de vida", VidaBull);
                    if (VidaBull <= 0)
                    {
                        printf("Bullbasaur Foi derrotado \n\n");
                    }
                    system("pause");
                    system("cls");
                }
                else if (OpAtk == 1 && EnerChar < CusGarra)
                {
                    printf("Energia de Charmande eh insuficiente para executar garra");
                    EnerChar = (EnerChar + 30) * 1.29;
                    system("pause");
                    system("cls");
                }
                else if (OpAtk == 2 && EnerChar >= CusFirex)
                {
                    printf("charizard Ataca com Explosao de fogo \n");
                    VidaBull = VidaBull - (firex - defBull);
                    EnerChar = ((EnerChar - CusFirex) + 30) * 1.29;
                    if (VidaBull < 0)
                    {
                        VidaBull = 0;
                    }
                    printf("Charmander deu 70 de dano, Bull esta com %0.2f de vida\n", VidaBull);
                    if (VidaBull <= 0)
                    {
                        printf("Bullbasaur Foi derrotado \n\n");
                    }
                    system("pause");
                    system("cls");
                }
                else if (OpAtk == 2 && EnerChar < CusFirex)
                {
                    printf("Energia de Charmande eh insuficiente para executar Explosao de Fogo \n");
                    EnerChar = (EnerChar + 30) * 1.29;
                    system("pause");
                    system("cls");
                }
                else if (OpAtk == 3 && EnerChar >= Cuslanca)
                {

                    printf("charmander ataca com Lanca-Chamas \n");
                    VidaBull = VidaBull - (lanca - defBull);
                    EnerChar = ((EnerChar - Cuslanca) + 30) * 1.29;
                    if (VidaBull < 0)
                    {
                        VidaBull = 0;
                    }
                    printf("Charmander deu 87.5 de dano, Bull esta com %0.2f de vida \n", VidaBull);
                    if (VidaBull <= 0)
                    {
                        printf("Bullbasaur Foi derrotado \n\n");
                    }
                    system("pause");
                    system("cls");
                }
                else if (OpAtk == 3 && EnerChar < Cuslanca)
                {
                    printf("Energia de Charmande eh insuficiente para executar Lanca-Chamas \n");
                    EnerChar = (EnerChar + 30) * 1.29;
                    system("pause");
                    system("cls");
                }
            }
            if (op == 2)
            {
                printf("Charizard comeu frutinha está curando 100 pontos de vida \n");
                VidaChari = VidaChari + HealChar;
                printf("Vida Atual do Charizard = %0.2f \n\n", VidaChari);
                EnerChar = (EnerChar + 30) * 1.29;
                system("pause");
                system("cls");
            }
            if (op == 3)
            {
                if (EnerChar >= 100)
                {
                    printf("charmander ataca com Flare Blitz \n");
                    VidaBull = VidaBull - (blitz - defBull);
                    EnerChar = (30 + (EnerChar - Cusblitz)) * 1.29;
                    if (VidaBull < 0)
                    {
                        VidaBull = 0;
                    }
                    printf("Charmander deu 150 de dano, Bull esta com %0.2f de vida \n", VidaBull);
                    if (VidaBull <= 0)
                    {
                        printf("Bullbasaur Foi derrotado \n\n");
                    }
                    system("pause");
                    system("cls");
                }
                else
                {
                    printf("ta tentando explorar os bug do jogo KKKKKKKKKK \n");
                    system("pause");
                    system("cls");
                }
            }
            if (op < 1 && op > 3)
            {
                printf("Tente novamente...");
            }

        } while (VidaChari > 0 && VidaBull > 0);
    }
}

void escBatalha(int *inic)
{
    int resp, pokeum;

    printf("deseja confirmar essa escolha? 1-sim, 2-nao:  ");
    scanf("%d", &resp);

    if (resp == 1 && *inic == 1)
    {
        printf("ITS A CHAAAAARIZARDDDDDDDDD \n\n");
        system("pause");
        system("cls");
        battle(&*inic);
    }
    else if (resp == 1 && *inic == 2)
    {
        printf(" BULBA NA AREAAAAAA");
    }
    else if (resp == 1 && *inic == 3)
    {
        printf("ESSe vai dar canseira");
    }

    else
    {
        printf("reiniciando");
        system("cls");
    }
}

void status(int *inic)
{
    int info;

    printf("\n\nDeseja Receber informacoes ? \n 1 - sim, 2 - nao:  ");
    scanf("%d", &info);

    system("cls");

    if (info == 1)
    {

        if (*inic == 1)
        {
            printf("Garra do dragao - dano 30 \nExplosao de fogo - dano 40 \nlanca-chamas - dano 50\n");
            printf("Custo de energia = dano causado \n");
            printf("defesa = 30 \n");
            printf("especial - Flare blitz - dano 150      -   multiplicador por rodada 1.29 \n");
            printf("vida -  1000\n");
            printf("Healing = 100 no turno \n");
            printf("Energia 30 por Round - comeca com 50");
            printf("\n\n");
            system("pause");
            system("cls");

            escBatalha(&*inic);
        }
        else if (*inic == 2)
        {
            printf("Investida - dano 30 \nchicote de vinha - dano 35 \nleech seed - dano 40\n");
            printf("Custo de energia = dano causado \n");
            printf("defesa = 50 \n");
            printf("especial - SEED BOMB - dano 200      -   multiplicador por rodada 1.20 \n");
            printf("vida -  1500\n");
            printf("Healing = 75 no turno \n");
            printf("Energia 40 por Round - comeca com 30");
            printf("\n\n");
            system("pause");
            system("cls");

            escBatalha(&*inic);
        }
        else if (*inic == 3)
        {
            printf("Enfrentar - dano 35 \nWater Gun - dano 40 \nHydro Pump - dano 55\n");
            printf("Custo de energia = dano causado \n");
            printf("defesa = 40 \n");
            printf("especial - Skull Bash - dano 125      -   multiplicador por rodada 1.30 \n");
            printf("vida -  1300\n");
            printf("Healing = 90 no turno \n");
            printf("Energia 30 por Round - comeca com 50");
            printf("\n\n");
            system("pause");
            system("cls");

            escBatalha(&*inic);
        }
    }
    else if (info == 2)
    {
        escBatalha(&*inic);
    }
    else
    {
        printf("Reiniciando");
    }
}

void choose()
{
    int inicial, I = 1;

    do
    {
        printf("\nescolha um pokemon:");
        printf("\nCharizard = 1 \nBullbasaur = 2 \nSquirtle = 3 \nSair = 4 \n");
        printf("Selecione uma opcao: ");

        scanf("%d", &inicial);

        system("cls");

        switch (inicial)
        {
        case 1:
            printf("\n\nO Pokemon escolhido foi Charizard \n");

            status(&inicial);

            break;
        case 2:
            printf("\n\nO Pokemon escolhido foi Bullbasaur \n");
            status(&inicial);

            break;
        case 3:
            printf("\n\nO Pokemon escolhido foi Squirtle \n");
            status(&inicial);
            break;

        case 4:
            I = 2;

        default:
            break;
        }

    } while (I == 1);
}
int main()
{
    choose();
    return 0;
}
