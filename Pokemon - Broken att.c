#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

/*Sorteio Escolha do que vai fazer */
int RespUm(int *sort)
{

    srand(time(NULL));
    for (int i = 0; i < 1; i++)
    {
        *sort = 1 + rand() % 3;
    }
    return *sort;
}
// Sorteio Escolha do segundo movimento //
int RespDois(int *sort)
{

    srand(time(NULL));
    for (int i = 0; i < 1; i++)
    {
        *sort = 1 + rand() % 2;
    }
    return *sort;
}
void ResponseSt(float *EnerSt, float *VidaSt, float *VidaChari)
{

    float defChar = 30, enfren = 50, WaterG = 60, HydroP = 75, SkullBash = 225, HealSt = 90;
    int sort, sorTA;

    // entrando na resposta do Squirtle na luta;
    if (*EnerSt >= 100)
    {
        printf("1 - ataque, 2 - curar, esp = 3:   \n");
        int RespUm(int *sort);
        sort = RespUm(&sort);
        printf("Squirtle vai executar %d \n", sort);
        system("pause");
        system("cls");
    }
    else
    {
        printf("1 - ataque, 2 - curar:   \n");
        sort = RespDois(&sort);
        printf("Squirtle vai executar %d \n", sort);
        system("pause");
        system("cls");
    }
    if (sort == 1)
    {
        printf("Opcao 1 -  Enfrentamento (dano 50) \n");
        printf("Opcao 2 -  Water Gun  (dano 60)\n");
        printf("Opcao 3 -  leech Seed (dano 75 )\n");
        RespUm(&sorTA);
        printf("%d \n", sorTA);
        system("cls");

        if (sorTA == 1)
        {
            printf("Squirtle atacou com Enfrentamento, CAUSOU 50 de Dano \n");
            *VidaChari = *VidaChari - (enfren - defChar);
            *EnerSt = ((*EnerSt - enfren) + 35) * 1.38;
            if (*VidaChari < 0)
            {
                printf("charmander foi derrotado \n");
            }
            if (*VidaChari > 0)
            {
                printf("Charmander possui %f \n", *VidaChari);
            }
        }
        else if (sorTA == 2)
        {

            printf("Squirtle atacou com Water Gun , CAUSOU 60 de dano \n");
            *VidaChari = *VidaChari - (WaterG - defChar);
            *EnerSt = ((*EnerSt - WaterG) + 35) * 1.38;
            if (*VidaChari < 0)
            {
                printf("charmander foi derrotado \n");
            }
            if (*VidaChari > 0)
            {
                printf("Charmander possui %f \n", *VidaChari);
                ;
            }
        }
        if (sorTA == 3)
        {
            printf("Squirtle atacou com Hydro Pump , CAUSOU 75 de dano \n");
            *VidaChari = *VidaChari - (HydroP - defChar);
            *EnerSt = ((*EnerSt - HydroP) + 40) * 1.20;
            if (*VidaChari < 0)
            {
                printf("charmander foi derrotado \n");
            }
            if (*VidaChari > 0)
            {
                printf("Charmander possui %f \n", *VidaChari);
            }
        }
    }
    if (sort == 2)
    {
        printf("Squirtle  comeu frutinha esta curando 90 pontos de vida \n");
        *VidaSt = *VidaSt + HealSt;
        printf("Vida Atual do Squirtle = %0.2f \n\n", *VidaSt);
        *EnerSt = (*EnerSt + 35) * 1.38;
    }
    if (sort == 3)
    {

        printf("Squirtle  ataca com Skull Bash \n");
        *VidaChari = *VidaChari - (SkullBash - defChar);
        *EnerSt = (35 + (*EnerSt - SkullBash)) * 1.38;
        if (*VidaChari <= 0)
        {
            *VidaChari = 0;
            printf("Charmander  Foi derrotado \n\n");
        }
        else
        {
            printf("Squirtle deu 225 de dano, Char esta com %0.2f de vida \n", *VidaChari);
        }
    }

    system("pause");
    system("cls");
}

// respondendo ataque do charizard//
void ResponseBull(float *EnerBull, float *VidaBull, float *VidaChar)
{
    float invest = 30, chicote = 35, leech = 40, SeedBomb = 200, HealBull = 75;
    float VidaBull = 900, defBull = 50, EnerBull = 30;

    float defChar = 30;
    int sort, sorTA;

    // entrando na resposta do bullbasauro na luta;
    if (*EnerBull >= 100)
    {
        printf("1 - ataque, 2 - curar, esp = 3:   \n");
        int RespUm(int *sort);
        sort = RespUm(&sort);
        printf("BullBa vai executar %d \n", sort);
        system("pause");
        system("cls");
    }
    else
    {
        printf("1 - ataque, 2 - curar:   \n");
        sort = RespDois(&sort);
        printf("BullBa vai executar %d \n", sort);
        system("pause");
        system("cls");
    }
    if (sort == 1)
    {
        printf("Opcao 1 -  INVESTIDA (dano 30 / Custo 30)\n");
        printf("Opcao 2 -  Chicote de vinha  (dano 45 /  Custo 40)\n");
        printf("Opcao 3 -  leech Seed (dano 60 / Custo 50)\n");
        RespUm(&sorTA);
        printf("%d \n", sorTA);
        system("cls");

        if (sorTA == 1)
        {
            printf("BULBA VAI TAKAR MAGIA \n");
            printf("bulba atacou com INVESTIDA, CAUSOU 30 de dano \n");
            *VidaChar = *VidaChar - (invest - defChar);
            *EnerBull = ((*EnerBull - invest) + 40) * 1.20;
            if (*VidaChar < 0)
            {
                printf("charmander foi derrotado \n");
            }
            if (*VidaChar > 0)
            {
                printf("Charmander possui %f \n", *VidaChar);
            }
        }
        else if (sorTA == 2)
        {
            printf("KKKKKK oia a magia 2 ai \n");
            printf("bulba atacou com Chicote de vinha , CAUSOU 45 de dano \n");
            *VidaChar = *VidaChar - (chicote - defChar);
            *EnerBull = ((*EnerBull - chicote) + 40) * 1.20;
            if (*VidaChar < 0)
            {
                printf("charmander foi derrotado \n");
            }
            if (*VidaChar > 0)
            {
                printf("Charmander possui %f \n", *VidaChar);
                ;
            }
        }
        if (sorTA == 3)
        {
            printf("KKKKKK oia a magia 2 ai \n");
            printf("bulba atacou com leech Seed , CAUSOU 60 de dano \n");
            *VidaChar = *VidaChar - (leech - defChar);
            *EnerBull = ((*EnerBull - leech) + 40) * 1.20;
            if (*VidaChar < 0)
            {
                printf("charmander foi derrotado \n");
            }
            if (*VidaChar > 0)
            {
                printf("Charmander possui %f \n", *VidaChar);
            }
        }
    }
    if (sort == 2)
    {
        printf("Bulbasaur comeu frutinha esta curando 70 pontos de vida \n");
        *VidaBull = *VidaBull + HealBull;
        printf("Vida Atual do Bulbasaur = %0.2f \n\n", *VidaBull);
        *EnerBull = (*EnerBull + 40) * 1.20;
    }
    if (sort == 3)
    {
        if (*EnerBull >= 100)
        {
            printf("Bulbasaur  ataca com SEED BOMB \n");
            *VidaChar = *VidaChar - (SeedBomb - defChar);
            *EnerBull = (30 + (*EnerBull - SeedBomb)) * 1.20;
            if (*VidaChar <= 0)
            {
                *VidaChar = 0;
                printf("Charmander  Foi derrotado \n\n");
            }
            else
            {
                printf("Bulbasaur deu 200 de dano, Char esta com %0.2f de vida \n", *VidaChar);
            }
        }
        else
        {
            printf("ta tentando explorar os bug do jogo KKKKKKKKKK \n");
        }
    }
    system("pause");
    system("cls");
}
/* Batalha dos pokemons*/
void battle(int *inic)
{
    int op, OpAtk, esc;
    float garra = 60, firex = 70, lanca = 87.5, blitz = 150;
    float CusGarra = 30, CusFirex = 40, Cuslanca = 50, Cusblitz = 100;
    float defChar = 30, enfren = 50, WaterG = 60, HydroP = 75, SkullBash = 225, HealSt = 90;

    float VidaChari = 600, HealChar = 100, EnerChar = 50;
    float invest = 30, chicote = 35, leech = 40, SeedBomb = 200, HealBull = 75;
    float CustInvest = 45, CustChicote = 40, CustLeech = 55, CustSeed = 100;
    float VidaBull = 900, defBull = 50, EnerBull = 30;

    float enfren = 35, WaterG = 40, HydroP = 55, SkullBash = 125;
    float VidaSt = 850, defSt = 40, HealSt = 90, EnerSt = 50;

    if (*inic == 1)
    {
        RespDois(&esc);

        if (esc == 1)
        {
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
                        printf("Charmander deu 60 de dano, Bull esta com %0.2f de vida \n", VidaBull);
                        if (VidaBull <= 0)
                        {
                            printf("Bullbasaur Foi derrotado \n\n");
                        }
                        if (VidaBull > 0)
                        {
                            printf("\n\n");
                            ResponseBull(&EnerBull, &VidaBull, &VidaChari);
                            system("cls");
                        }
                    }
                    else if (OpAtk == 1 && EnerChar < CusGarra)
                    {
                        printf("Energia de Charmande eh insuficiente para executar garra");
                        EnerChar = (EnerChar + 30) * 1.29;
                        system("pause");
                        system("cls");
                        if (VidaBull > 0)
                        {
                            printf("\n\n");
                            ResponseBull(&EnerBull, &VidaBull, &VidaChari);
                            system("cls");
                        }
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
                        if (VidaBull > 0)
                        {
                            printf("\n\n");
                            ResponseBull(&EnerBull, &VidaBull, &VidaChari);
                        }
                        system("cls");
                    }
                    else if (OpAtk == 2 && EnerChar < CusFirex)
                    {
                        printf("Energia de Charmande eh insuficiente para executar Explosao de Fogo \n");
                        EnerChar = (EnerChar + 30) * 1.29;
                        system("pause");
                        system("cls");

                        if (VidaBull > 0)
                        {
                            printf("\n\n");
                            ResponseBull(&EnerBull, &VidaBull, &VidaChari);
                        }
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
                        if (VidaBull > 0)
                        {
                            printf("\n\n");
                            ResponseBull(&EnerBull, &VidaBull, &VidaChari);
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
                        if (VidaBull > 0)
                        {
                            printf("\n\n");
                            ResponseBull(&EnerBull, &VidaBull, &VidaChari);
                        }
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
                    if (VidaBull > 0)
                    {
                        ResponseBull(&EnerBull, &VidaBull, &VidaChari);
                    }
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
                        if (VidaBull > 0)
                        {
                            ResponseBull(&EnerBull, &VidaBull, &VidaChari);
                        }
                        system("pause");
                        system("cls");
                    }
                    else
                    {
                        printf("ta tentando explorar os bug do jogo KKKKKKKKKK \n");
                        system("pause");
                        system("cls");
                        if (VidaBull > 0)
                        {
                            ResponseBull(&EnerBull, &VidaBull, &VidaChari);
                        }
                    }
                }
                if (op < 1 && op > 3)
                {
                    printf("Tente novamente...");
                }
            } while (VidaChari > 0 && VidaBull > 0);
        }
        else
        {
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
                        VidaSt = VidaSt - (garra - defSt);
                        EnerChar = ((EnerChar - CusGarra) + 30) * 1.29;
                        if (VidaBull < 0)
                        {
                            VidaBull = 0;
                        }
                        printf("Charmander deu 60 de dano, Bull esta com %0.2f de vida \n", VidaBull);
                        if (VidaBull <= 0)
                        {
                            printf("Bullbasaur Foi derrotado \n\n");
                        }
                        if (VidaBull > 0)
                        {
                            printf("\n\n");
                            ResponseSt(&EnerSt, &VidaSt, &VidaChari);
                            system("cls");
                        }
                    }
                    else if (OpAtk == 1 && EnerChar < CusGarra)
                    {
                        printf("Energia de Charmande eh insuficiente para executar garra");
                        EnerChar = (EnerChar + 30) * 1.29;
                        system("pause");
                        system("cls");
                        if (VidaBull > 0)
                        {
                            printf("\n\n");
                            ResponseSt(&EnerSt, &VidaSt, &VidaChari);
                            system("cls");
                        }
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
                        if (VidaBull > 0)
                        {
                            printf("\n\n");
                            ResponseSt(&EnerSt, &VidaSt, &VidaChari);
                        }
                        system("cls");
                    }
                    else if (OpAtk == 2 && EnerChar < CusFirex)
                    {
                        printf("Energia de Charmande eh insuficiente para executar Explosao de Fogo \n");
                        EnerChar = (EnerChar + 30) * 1.29;
                        system("pause");
                        system("cls");

                        if (VidaBull > 0)
                        {
                            printf("\n\n");
                            ResponseSt(&EnerSt, &VidaSt, &VidaChari);
                        }
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
                        if (VidaBull > 0)
                        {
                            printf("\n\n");
                            ResponseSt(&EnerSt, &VidaSt, &VidaChari);
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
                        if (VidaBull > 0)
                        {
                            printf("\n\n");
                            ResponseSt(&EnerSt, &VidaSt, &VidaChari);
                        }
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
                    if (VidaBull > 0)
                    {
                        ResponseSt(&EnerSt, &VidaSt, &VidaChari);
                    }
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
                        if (VidaBull > 0)
                        {
                            ResponseSt(&EnerSt, &VidaSt, &VidaChari);
                        }
                        system("pause");
                        system("cls");
                    }
                    else
                    {
                        printf("ta tentando explorar os bug do jogo KKKKKKKKKK \n");
                        system("pause");
                        system("cls");
                        if (VidaBull > 0)
                        {
                            ResponseSt(&EnerSt, &VidaSt, &VidaChari);
                        }
                    }
                }
                if (op < 1 && op > 3)
                {
                    printf("Tente novamente...");
                }
            } while (VidaChari > 0 && VidaSt > 0);
        }
    }
    // ESCOLHENDO O BULBA COMO INICIAL >
    else if (*inic == 2)
    {
        RespDois(&esc);
        do
        {
            printf("Energia Atual do Bulba = %0.2f \n", EnerBull);
            printf("Qual movimento deseja fazer? \n");
            if (EnerBull >= 100)
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
    
                printf("Opcao 1 -  INVESTIDA (dano 30 / Custo 30)\n");
                printf("Opcao 2 -  Chicote de vinha  (dano 45 /  Custo 40)\n");
                printf("Opcao 3 -  leech Seed (dano 60 / Custo 50)\n");
                printf("escolha qual movimento deseja utilizar:  ");
                scanf("%d", &OpAtk);
                system("cls");

                float CustInvest = 45, CustChicote = 40, CustLeech = 55, CustSeed = 100;

                if (OpAtk == 1 && EnerBull >= CustInvest )
                {
                    printf("Bulba Ataca com INVESTIDA  \n");
                    VidaChari = VidaChari - (invest - defChar);
                    EnerBull = ((EnerBull - CustInvest) + 30) * 1.20;
                    if (VidaChari < 0)
                    {
                        VidaChari = 0;
                    }
                    printf("Charmander deu 60 de dano, Bull esta com %0.2f de vida \n", VidaChari);
                    if (VidaChari <= 0)
                    {
                        printf("Bullbasaur Foi derrotado \n\n");
                    }
                    if (VidaChari > 0)
                    {
                        printf("\n\n");
                        //ResponseBull(&EnerBull, &VidaBull, &VidaChari);
                        system("cls");
                    }
                }
                else if (OpAtk == 1 && EnerBull < CustInvest)
                {
                    printf("Energia de Bulba eh insuficiente para executar INVESTIDA");
                    EnerBull = (EnerBull + 30) * 1.20;
                    system("pause");
                    system("cls");
                    if (VidaChari > 0)
                    {
                        printf("\n\n");
                        //ResponseBull(&EnerBull, &VidaBull, &VidaChari);
                        system("cls");
                    }
                }
                else if (OpAtk == 2 && EnerBull >= CustChicote)
                {
                    printf("charizard Ataca com Explosao de fogo \n");
                    VidaChari = VidaChari - (chicote - defChar);
                    EnerBull = ((EnerBull - CustChicote) + 30) * 1.20;
                    if (VidaChari < 0)
                    {
                        VidaChari = 0;
                    }
                    printf("Charmander deu 70 de dano, Bull esta com %0.2f de vida\n", VidaChari);
                    if (VidaChari <= 0)
                    {
                        printf("Charizard Foi derrotado \n\n");
                    }
                    if (VidaChari > 0)
                    {
                        printf("\n\n");
                        // ResponseBull(&EnerBull, &VidaBull, &VidaChari);
                    }
                    system("cls");
                }
                else if (OpAtk == 2 && EnerBull < CustChicote)
                {
                    printf("Energia de Charmande eh insuficiente para executar Explosao de Fogo \n");
                    EnerBull = (EnerBull + 30) * 1.29;
                    system("pause");
                    system("cls");

                    if (VidaChari > 0)
                    {
                        printf("\n\n");
                        // ResponseBull(&EnerBull, &VidaBull, &VidaChari);
                    }
                }
                else if (OpAtk == 3 && EnerBull >= CustLeech)
                {
                    printf("bulbassauro  ataca com Lanca-Chamas \n");
                    VidaChari = VidaChari - (leech - defChar);
                    EnerBull = ((EnerBull - CustLeech) + 30) * 1.29;
                    if (VidaChari < 0)
                    {
                        VidaChari = 0;
                    }
                    printf("Bulbassauro deu 87.5 de dano, Bull esta com %0.2f de vida \n", VidaBull);
                    if (VidaBull <= 0)
                    {
                        printf("Charizard Foi derrotado \n\n");
                    }
                    if (VidaBull > 0)
                    {
                        printf("\n\n");
                        // ResponseBull(&EnerBull, &VidaBull, &VidaChari);
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
                    if (VidaBull > 0)
                    {
                        printf("\n\n");
                        ResponseBull(&EnerBull, &VidaBull, &VidaChari);
                    }
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
                if (VidaBull > 0)
                {
                    ResponseBull(&EnerBull, &VidaBull, &VidaChari);
                }
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
                    if (VidaBull > 0)
                    {
                        ResponseBull(&EnerBull, &VidaBull, &VidaChari);
                    }
                    system("pause");
                    system("cls");
                }
                else
                {
                    printf("ta tentando explorar os bug do jogo KKKKKKKKKK \n");
                    system("pause");
                    system("cls");
                    if (VidaBull > 0)
                    {
                        ResponseBull(&EnerBull, &VidaBull, &VidaChari);
                    }
                }
            }
            if (op < 1 && op > 3)
            {
                printf("Tente novamente...");
            }
        } while (VidaChari > 0 && VidaBull > 0);
    }
}
//* Confirmando escolha para iniciar a batalha
void escBatalha(int *inic)
{
    int resp;
    printf("deseja confirmar essa escolha? 1-sim, 2-nao:  ");
    scanf("%d", &resp);

    if (resp == 1 && *inic == 1)
    {
        printf("\n\nITS A CHAAAAARIZARDDDDDDDDD\n\n\n");
        system("pause");
        system("cls");
        battle(&*inic);
    }
    else if (resp == 1 && *inic == 2)
    {
        printf("\n\nBULBA NA AREAAAAAA\n\n");
    }
    else if (resp == 1 && *inic == 3)
    {
        printf("\n\nESSe vai dar canseira\n\n");
    }
    else
    {
        printf("reiniciando");
        system("pause");
        system("cls");
    }
}
// Exibindo status dos pokemons >
void status(int *inic)
{
    int info;
    printf("\nDeseja Receber informacoes ? \n1 - sim, 2 - nao:  ");
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
// Escolhendo um pokemon inicial
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