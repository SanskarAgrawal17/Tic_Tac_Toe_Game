#include <stdio.h>
void game1(int);
void game2(int);
int check();
void new_value();
char ch[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char pl1 = '#';
char pl2 = '@';
int count = 0;
int c = 0;
int main()
{
    int i, choise;

    new_value();

    printf("\n\nTIC TAK TOE GAME USING C PROGRAMMING ::::::::::\n\n");
    printf("For Player 1: #\n");

    printf("For Player 2: @\n\n");

    for (i = 1; i <= 2; i++)
    {
        if (i == 1)
        {
            printf("\n\nPlayer: 1 \n ");
            printf("\nEnter Your Choise::");
            scanf("%d", &choise);
            if (choise == 1 || choise == 2 || choise == 3 || choise == 4 || choise == 5 || choise == 6 || choise == 7 || choise == 8 || choise == 9)
            {
                game1(choise);
                check();
                if (c == 1)
                {
                    i = 0;
                    c = 0;
                }
            }
            else
            {
                printf("<<<<<<<<<<:: Wrong Choise!! Plz Choose Right Key ::>>>>>>>>>> ");
                i = 0;
            }
        }
        else
        {
            printf("\n\nPlayer: 2 \n ");
            printf("\nEnter Your Choise::");
            scanf("%d", &choise);
            if (choise == 1 || choise == 2 || choise == 3 || choise == 4 || choise == 5 || choise == 6 || choise == 7 || choise == 8 || choise == 9)
            {
                game2(choise);
                check();
                i = 0;
                if (c == 1)
                {
                    i = 1;
                    c = 0;
                }
            }
            else
            {
                printf("<<<<<<<<<<:: Wrong Choise!! Plz Choose Right Key ::>>>>>>>>>> ");
                i = 1;
            }
        }
        if (count == 1)
        {
            return;
        }
    }
}

void game1(int choise)
{
    if (choise == 1 && ch[0] == '1')
    {
        ch[0] = pl1;
        new_value();
    }
    else
    {
        if (choise == 2 && ch[1] == '2')
        {
            ch[1] = pl1;
            new_value();
        }
        else
        {
            if (choise == 3 && ch[2] == '3')
            {
                ch[2] = pl1;
                new_value();
            }
            else
            {
                if (choise == 4 && ch[3] == '4')
                {
                    ch[3] = pl1;
                    new_value();
                }
                else
                {
                    if (choise == 5 && ch[4] == '5')
                    {
                        ch[4] = pl1;
                        new_value();
                    }
                    else
                    {
                        if (choise == 6 && ch[5] == '6')
                        {
                            ch[5] = pl1;
                            new_value();
                        }
                        else
                        {
                            if (choise == 7 && ch[6] == '7')
                            {
                                ch[6] = pl1;
                                new_value();
                            }
                            else
                            {
                                if (choise == 8 && ch[7] == '8')
                                {
                                    ch[7] = pl1;
                                    new_value();
                                }
                                else
                                {
                                    if (choise == 9 && ch[8] == '9')
                                    {
                                        ch[8] = pl1;
                                        new_value();
                                    }
                                    else
                                    {
                                        printf("\n::::Wrong Choise::::");
                                        c = 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void game2(int choise)
{
    if (choise == 1 && ch[0] == '1')
    {
        ch[0] = pl2;
        new_value();
    }
    else
    {
        if (choise == 2 && ch[1] == '2')
        {
            ch[1] = pl2;
            new_value();
        }
        else
        {
            if (choise == 3 && ch[2] == '3')
            {
                ch[2] = pl2;
                new_value();
            }
            else
            {
                if (choise == 4 && ch[3] == '4')
                {
                    ch[3] = pl2;
                    new_value();
                }
                else
                {
                    if (choise == 5 && ch[4] == '5')
                    {
                        ch[4] = pl2;
                        new_value();
                    }
                    else
                    {
                        if (choise == 6 && ch[5] == '6')
                        {
                            ch[5] = pl2;
                            new_value();
                        }
                        else
                        {
                            if (choise == 7 && ch[6] == '7')
                            {
                                ch[6] = pl2;
                                new_value();
                            }
                            else
                            {
                                if (choise == 8 && ch[7] == '8')
                                {
                                    ch[7] = pl2;
                                    new_value();
                                }
                                else
                                {
                                    if (choise == 9 && ch[8] == '9')
                                    {
                                        ch[8] = pl2;
                                        new_value();
                                    }
                                    else
                                    {
                                        printf("\n::::Wrong Choise::::");
                                        c = 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void new_value()
{
    system("cls");
    int i;
    for (i = 0; i < 3; i++)
    {
        if (i == 2)
        {
            printf("%c", ch[i]);
        }
        else
        {
            printf("%c | ", ch[i]);
        }
    }
    printf("\n--|---|--\n");
    for (i = 3; i < 6; i++)
    {
        if (i == 5)
        {
            printf("%c", ch[i]);
        }
        else
        {
            printf("%c | ", ch[i]);
        }
    }
    printf("\n--|---|--\n");
    for (i = 6; i < 9; i++)
    {
        if (i == 8)
        {
            printf("%c", ch[i]);
        }
        else
        {
            printf("%c | ", ch[i]);
        }
    }
}

int check()
{
    if (ch[0] == ch[1] && ch[0] == ch[2])
    {
        printf("\n\nplayer %c Is Won::\n\n", ch[0]);
        return count = 1;
    }
    else
    {
        if (ch[0] == ch[4] && ch[0] == ch[8])
        {
            printf("\n\nplayer %c Is Won::\n\n", ch[0]);
            return count = 1;
        }
        else
        {
            if (ch[0] == ch[3] && ch[0] == ch[6])
            {
                printf("\n\nplayer %c Is Won::\n\n", ch[0]);
                return count = 1;
            }
            else
            {
                if (ch[1] == ch[4] && ch[1] == ch[7])
                {
                    printf("\n\nplayer %c Is Won::\n\n", ch[1]);
                    return count = 1;
                }
                else
                {
                    if (ch[2] == ch[5] && ch[2] == ch[8])
                    {
                        printf("\n\nplayer %c Is Won::\n\n", ch[2]);
                        return count = 1;
                    }
                    else
                    {
                        if (ch[2] == ch[4] && ch[2] == ch[6])
                        {
                            printf("\n\nplayer %c Is Won::\n\n", ch[2]);
                            return count = 1;
                        }
                        else
                        {
                            if (ch[3] == ch[4] && ch[3] == ch[5])
                            {
                                printf("\n\nplayer %c Is Won::\n\n", ch[3]);
                                return count = 1;
                            }
                            else
                            {
                                if (ch[6] == ch[7] && ch[6] == ch[8])
                                {
                                    printf("\n\nplayer %c Is Won::\n\n", ch[6]);
                                    return count = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (ch[0] != '1' && ch[1] != '2' && ch[2] != '3' && ch[3] != '4' && ch[4] != '5' && ch[5] != '6' && ch[6] != '7' && ch[7] != '8' && ch[8] != '9')
    {
        printf("\n\n:::: No Any Player is Won ::::\n");
        return count = 1;
    }
}