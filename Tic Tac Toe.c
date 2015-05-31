#include<stdio.h>
char board[3][3];
char ply2;
int x=0,u=0,y=0,z=0,v=0;
void plyr2ply1st(void);
int ply1st(void);
void plyerplygame();


char com,plyer;
void plyrplyr();
void tictaktio ();
void guessgame ();
int user1st();
void plygame();
int plyagain();
void computerply();
void playerply();
int findwin(char);
int mid();
int corner();
int midside();
int win(char);
int Boxvaild(int);
int m,o;
char pw[100],ch,pw1[100];
int main(void)
{
int t,z,h,k,r,q,e=0;

int a;
printf("\t\t\t     BRUTE FORCE TEAM\n");
            printf("\n\n\t\t\t\t\1 MY PASSWORD\n\n\n");
            printf("\t\t\t\t\   ");
while(1)

{
if(m<0){
m=0;
}
ch=getch();
if(ch==13)
break;
if(ch==8)
{
if(m=="NULL"){
m--;
}
pw[m--]="NULL";

system("cls");
printf("\t\t\t     BRUTE FORCE TEAM\n");
            printf("\n\n\t\t\t\t\1 MY PASSWORD\n\n\n");
            printf("\t\t\t\t\   ");
for(z=0;z<m;z++){
printf("*");
}
continue;
}
pw[m++]=ch;
ch='*';
putch(ch);
}
system("cls");
printf("\t\t\t     BRUTE FORCE TEAM\n");
printf("\n\n\t\t\t  \1 ENTER GUESS PASSWORD\n\n\n ");
printf("\t\t\t\t\   ");
while(1){

while(1)

{
if(o<0){
o=0;
}
ch=getch();
if(ch==13)
break;
if(ch==8)
{

pw1[o--]="NULL";

system("cls");
printf("\t\t\t     BRUTE FORCE TEAM\n");
printf("\n\n\t\t\t  \1 ENTER GUESS PASSWORD\n\n\n ");
printf("\t\t\t\t\   ");
for(q=0;q<o;q++){
printf("*");
}
continue;
}
pw1[o++]=ch;
ch='*';
putch(ch);
}
if(e==4){
break;
}
if(strcmp(pw,pw1)==0){

break;
}
system("cls");
printf("\t\t\t     BRUTE FORCE TEAM\n");


printf("\n\n\n\t\t   WARNING ! YOU ARE ENTER WRONG PASSWORD\n\n\n");
printf("\n\n\t\t\t     \1 PLESE TRY AGAIN\n\n\n ");

printf("\t\t\t\t\   ");
e=e+1;
o=0;
}

if(strcmp(pw,pw1)==0){
            system("cls");
            printf("\t\t\t     BRUTE FORCE TEAM\n");
printf("\n\t\t\t   WELCOME TO OUR PROJECT");
    do
    {


    printf("\n\n\n\n");
    printf("\t\t\t\t1. TIC TAK TIO\n");
    printf("\t\t\t\t2. GUESS GAME\n");
    printf("\t\t\t\t3. TEAM MEMBER\n");
    printf("\t\t\t\t4. SECORE\n");
    printf("\t\t\t\t5. EXIT\n");
    printf("\n\n");
    printf("\t\t\t    Plese press any one(1-5)..  ");
int p;
 int q;       scanf("%d",&a);
        switch(a)
        {
        case 1:
        system("cls");
        printf("\t\t\t     BRUTE FORCE TEAM\n");
        printf("\n\n\n\n");
        printf("\t\t\t 1: COMPUTER VS PLAYER PLAY\n\n\n");
        printf("\t\t\t 2: PLAYER VS PLAYER PLAY\n\n");
        printf("\t\t\tPLESE PRESS (1 or 2)..... ");
            scanf("%d",&p);
            switch(p){
            case 1:
            tictaktio();
            break;
            case 2:
            plyrplyr();
            break;
            default :
            system("cls");
            printf("\t\t\t\tWRONG CHOICE");
            }
            break;
        case 2:
        system("cls");
            guessgame();
            break;
          case 3:
          system("cls");

            printf("\t\t\t\tBRUTE FORCE MEMBER\n\n\nn");
            printf("\t\t\t   *** Sudip kumar sarker ***\n\n");
            printf("\t\t\t\t*** 131-15-2222 ***");












          break;
          case 4:
          system("cls");
          printf("\t\t\t\t   BRUTE FORCE TEAM\n");
          printf("\n\n\t\t\t\t1 : TAC TAK TIO SCORE\n");
          printf("\n\n\t\t\t\t2 : GUESS GAME SCORE\n\n");
          printf("\n\n\t\t\t\tPLESE PRESS (1 OR 2)... ");
          scanf("%d",&k);
          switch( k){
            case 1 :
system("cls");
printf("\t\t\t     BRUTE FORCE TEAM\n");
        printf("\n\n\n\n");
        printf("\t\t\t 1: COMPUTER VS PLAYER SCORE\n\n\n");
        printf("\t\t\t 2: PLAYER VS PLAYER SCORE\n\n");

          printf("\t\t\tPLESE PRESS (1 or 2)..... ");
          scanf("%d",&q);
          switch(q){
            case 1:
            system("cls");
            printf("\t\t\t     BRUTE FORCE TEAM\n");
          printf("\n\n\n\t\t\t   COMPUTER WIN %d TIMES\n\n",x);
          printf("\n\n\n\t\t\t    PLAYER WIN %d TIMES\n",y);
          printf("\n\n\t\t\t\tTOTAL WIN\n");
          if(x==y)
          {
          printf("\n\t\t\t\t   DRAW\n");

          }
         else if(x>y){

          printf("\n\n\t\t\t\tCOMPUTER WIN\n");
          }

         else if(x<y){
          printf("\n\n\t\t\t\tPLAYER WIN\n");

          }
          printf("\n\n\t\tIF YOU PRESS (1)..DELET SCOER.ELSE PRESS (2).. ");
          scanf("%d",&h);
          if(h==1){
          x=0;
          y=0;
          system("cls");
          printf("\n\n\n\n\n\t\t\tYOUR DATA IS SUESSFULLY DELET\n");
          }

          system("cls");


          break;
          case 2:
          system ("cls");
          printf("\t\t\t     BRUTE FORCE TEAM\n");
          printf("\n\n\n\t\t\t   PLAYER 1 WIN %d TIMES\n",u);
         printf("\n\n\n\t\t\t   PLAYER 2 WIN %d TIMES\n\n",z);

         printf("\n\n\t\t\t\tTOTAL WIN\n");

         if(u==z)
          {
          printf("\n\t\t\t\t  DRAW\n\n");

          }
         else if(u>z){

          printf("\n\t\t\t\tPLAYER 1 WIN\n");
          }

         else if(u<z){
          printf("\n\t\t\t\tPLAYER 2 WIN\n");

          }
         printf("\n\n\t\tIF YOU PRESS (1)..DELET SCOER.ELSE PRESS (2).. ");
          scanf("%d",&t);
          if(t==1){
          u=0;
          z=0;
          system("cls");
          printf("\n\n\n\n\n\t\t\tYOUR DATA IS SUESSFULLY DELET\n");
          }
          /*else{
                      system("cls");
            printf("\n\n\n\n\t\t\t\tWRONG CHOSE");
          break;
          }*/
          system("cls");
           break;
          default :
          system("cls");
          printf("\n\n\n\t\t\t\tWRONG CHOSE\n");
          }
          break;
          case 2:
          system("cls");
          printf("\n\n\n\n\t\t\t\tPLYER GUESS WIN %d TIME\n\n\n",v);
          printf("\n\n\n\t\t\tIF PRESS (1) DELET SCORE.ELSE PRESS (2)..  ");
          scanf("%d",&r);
          if(r==1){
                      system("cls");
          printf("\n\n\n\t\t\t YOUR DATA IS SUCESSFULLY DELET\n\n ");
          v=0;
          }
          break;
          }

          break;
        case 5:
        system("cls");
        printf("\t\t\t\tBRUTE FORCE TEAM\n");

            printf("\n\n\n\n\n\t\t\t\tTHANK YOU EVERYONE\n\n\t\t\t\t     GOOD BYE\n\n\n\n");
            printf("\n\n\n\n");
            break;
            default:
            system("cls");
            printf("\t\t\t     BRUTE FORCE lTEAM\n");
            printf("\n\n\n\n\t\t\t\tWRONG CHOSE\n\n\n");


        }
    }while(a!=5);
}
else{
            system("cls");
            printf("\t\t\t     BRUTE FORCE TEAM\n");

printf("\n\n\n\t\t\t  YOU ENTER WRONG PASSWORD\n\n");
 printf("\n\n\t\t\t   SORRY DON'T ( LOG IN ) \n\n\n\n\n\n\n");
}

    return 0;
}
void tictaktio ()
{

    while(1)
    {
                system("cls");
        printf("\t\t\t     BRUTE FORCE TEAM\n");
        printf("\t\t\t\tTIC TAK TIO\n");
        int i,j,k;
        for (i =0; i< 3; i++)
        {
            for (j=0; j<3; j++)
            {
                board[i][j] = ' ';
            }
        }
        if (user1st())
        {
            com = 'O';
            plyer = 'X';
        }
        else
        {
            com = 'X';
            plyer = 'O';
        }
        printf("\n");
        for (k=0; k<3; k++)
        {
            printf("\t\t\t\t   |   |   \n");
            printf("\t\t\t\t %c | %c | %c \n", board[k][0], board[k][1], board[k][2]);
            printf("\t\t\t\t   |   |   \n");
            if (k!= 2)
                printf("\t\t\t\t-----------\n");
        }
        printf("\n");
        plygame();

        if (!plyagain())
        {

            break;
        }

    }
}
int user1st(void)
{
    char ch;
    printf("\t\t   ARE YOU PLAY FRIST? PLESE TYPE (Y/N) ");
    do
    {
        ch = getchar();
    }
    while ((ch != 'y') && (ch != 'Y') &&
            (ch!= 'n') && (ch!='N'));
    if ((ch == 'y')||(ch== 'Y'))
        return 1;
    else
        return 0;
}
void plygame(void)
{
    int i,j;

    for (i = 1; i <= 9; i++)
    {
        if (i% 2 == 1)
        {
            if (com == 'X')
                computerply();
            else
                playerply();
        }
        else
        {
            if (com == 'O')
                computerply();
            else
                playerply();
        }
        system("cls");
        printf("\t\t\t     BRUTE FORCE TEAM\n");
        printf("\t\t\t\tTIC TAK TIO\n");



        printf("\n");
        for (j = 0; j<3; j++)
        {

            printf("\t\t\t\t   |   |   \n");
            printf("\t\t\t\t %c | %c | %c \n", board[j][0], board[j][1], board[j][2]);
            printf("\t\t\t\t   |   |   \n");
            if (j!= 2)
                printf("\t\t\t\t-----------\n");
        }

        printf("\n");
        if (win(com))
        {
                    x=x+1;
            printf("\n\t\t!!!!!!!!!!!!!!!!!!!!COMPUTER WIN!!!!!!!!!!!!!!!!!!!!!!!\n");
            return;
        }
        else if (win(plyer))
        {
                    y=y+1;
            printf("\n\t\t!!!!!!!!!!!!!!!!!CONGRATULATIONS,YOU WIN!!!!!!!!!!!!!!\n");
            return;
        }
    }
    printf("\n\t\t\t   THE GAME IS A DRAW.\n\n");
    return;
}
int plyagain(void)
{
    char ch;

    printf("\t\t\tDO YOU WANT TO PALY AGAIN? (Y/N) ");
    do
    {
        ch = getchar();
    }
    while ((ch!= 'y') && (ch!= 'Y') &&
            (ch!= 'n') && (ch != 'N'));

 system("cls");

    if ((ch== 'y') || (ch == 'Y'))
        return 1;
    else
        return 0;
}
void computerply(void)
{
    int box;
    int i,j;
    box = findwin(com);
    if (!box)
        box = findwin(plyer);
        if (!box)
       box= mid();
    if (!box)
    box= corner();


    if (!box)
        box = midside();
    printf("\n\t\t\tCOMPUTER CHOSE  %d!NUMBER BOX\n", box);
    i = (box - 1) / 3;
    j = (box - 1) % 3;
    board[i][j] = com;
    return;
}
int findwin(char symbol)
{
    int box, i,j;
    int result = 0;
    for (box = 1; box <= 9; box++)
    {
        i=(box - 1) / 3;
        j=(box- 1) % 3;
        if (board[i][j] == ' ')
        {
            board[i][j] = symbol;
            if (win(symbol))
            {
                result = box;
            }
            board[i][j] = ' ';
        }
    }
    return result;
}
int mid(void)
{
    if(board[1][1] == ' ')
        return 5;
    else
        return 0;
}
int corner(void)
{
    if (board[0][0] == ' ')
        return 1;
    if (board[0][2] == ' ')
        return 3;
    if (board[2][0] == ' ')
        return 7;
    if (board[2][2] == ' ')
        return 9;

    return 0;
}
int midside(void)
{
    if (board[0][1] == ' ')
        return 2;
    if (board[1][0] == ' ')
        return 4;
    if (board[1][2] == ' ')
        return 6;
    if (board[2][1] == ' ')
        return 8;

    return 0;
}
int win(char ch)
{
    int i,j;

    for (i = 0; i < 3; i++)
    {
        if ((board[i][0] == ch) && (board[i][1] == ch) && (board[i][2] == ch))
            return 1;
    }

    for (j=0; j<3; j++)
    {
        if ((board[0][j] == ch) && (board[1][j] == ch) && (board[2][j] == ch))
            return 1;
    }

    if ((board[0][0] == ch) && (board[1][1] == ch) && (board[2][2] == ch))
        return 1;

    if ((board[0][2] == ch) && (board[1][1] == ch) && (board[2][0] == ch))
        return 1;

    return 0;
}
void playerply(void)
{
    int n,i,j;
    do
    {
        printf("\t\t\t   ENTER A BOX NUMBER:..  ");
        scanf("%d", &n);
    }
    while(!boxvalid(n));
    i=(n - 1) / 3;
    j=(n - 1) % 3;
    board[i][j] = plyer;
    return;
}
int boxvalid(int n)
{
    int j, i;
    i=(n - 1) / 3;
    j=(n - 1) % 3;
    if((n>=1)&&(n<=9))
    {
        if (board[i][j]==' ')
            return 1;
    }
    return 0;
}
void guessgame (){

int num,guess=-1,tries=0,pass=0;

while(1){
time_t t;   //long integer capable of representing the time and date of the system in an encoded
srand((unsigned)time(&t)); //set starting point...for rand number sequence generator..rand()....

system("cls");
printf("\t\t\t\t   BRUTE FORCE TEAM\n");
printf("\t\t\t\t      GUESS GAME\n");
printf("\n\t\t\t\tWELCOME TO GUESS GAME");

num=rand()%100;
while((guess!=num)&&tries<6)
{
printf("\n\t   ENTER THE GUESS NUM (1------100)(you have %d tries left out)",(6-tries)); scanf("%d",&guess);
tries++;
if(guess==num)
{
            v=v+1;
printf("\n\t\t\tHURRAH YOU GUESSED THE NUMBER CORRECTLY!!!\n");
pass=1;
}
else if(num< guess)
printf("\n\t\t\t\tYOUR GUESS IS  HIGH\n");
else
printf("\n\t\t\t\tYOUR GUESS IS  LOW\n");
}
if(pass==0)
printf("\n\t\t\tSORRY YOU LOST! THE CORRECT NUMBER IS %d\n",num);

num,guess=-1,tries=0,pass=0;

if (!plyagain())
        {

            break;
        }
}
}
void plyrplyr(){

   while(1)
    {
                system("cls");
        printf("\t\t\t     BRUTE FORCE TEAM\n");
        printf("\t\t\t\tTIC TAK TIO\n");
        int i,j,k;
        for (i =0; i< 3; i++)
        {
            for (j=0; j<3; j++)
            {
                board[i][j] = ' ';
            }
        }
        if (ply1st())
        {
        printf("\n\n\t\t\tPLAYER1 IS 'X' AND PLAYER2 IS 'O'\n\n");
            ply2 = 'O';
            plyer = 'X';
        }
        else
        {
                 printf("\n\n\t\t\tPLAYER1 IS 'O' AND PLAYER2 IS 'X'\n\n");
            ply2 = 'X';
            plyer = 'O';
        }
        printf("\n");
        for (k=0; k<3; k++)
        {
            printf("\t\t\t\t   |   |   \n");
            printf("\t\t\t\t %c | %c | %c \n", board[k][0], board[k][1], board[k][2]);
            printf("\t\t\t\t   |   |   \n");
            if (k!= 2)
                printf("\t\t\t\t-----------\n");
        }
        printf("\n");
        plyerplygame();

        if (!plyagain())
        {

            break;
        }

    }
}
void plyerplygame(void)
{
    int i,j;

    for (i = 1; i <= 9; i++)
    {
        if (i% 2 == 1)
        {
            if (ply2 == 'X')
                plyr2ply1st();
            else
                playerply();
        }
        else
        {
            if (ply2 == 'O')
                 plyr2ply1st();
            else
                playerply();
        }
        system("cls");
        printf("\t\t\t     BRUTE FORCE TEAM\n");
        printf("\t\t\t\tTIC TAK TIO\n");



        printf("\n");
        for (j = 0; j<3; j++)
        {

            printf("\t\t\t\t   |   |   \n");
            printf("\t\t\t\t %c | %c | %c \n", board[j][0], board[j][1], board[j][2]);
            printf("\t\t\t\t   |   |   \n");
            if (j!= 2)
                printf("\t\t\t\t-----------\n");
        }

        printf("\n");
        if (win(ply2))
        {
                    z=z+1;
            printf("\n\t\t!!!!!!!!!!!!!!!!!!!!PLAYER  2 WIN!!!!!!!!!!!!!!!!!!!!!!!\n");
            return;
        }
        else if (win(plyer))
        {
                    u=u+1;
            printf("\n\t\t!!!!!!!!!!!!!!!!!PLYER 1 WIN!!!!!!!!!!!!!!\n");
            return;
        }
    }
    printf("\n\t\t\t   THE GAME IS A DRAW.\n\n");
    return;
}
void plyr2ply1st(void)
{
    int n,i,j;
    do
    {
        printf("\t\t\t   ENTER PLAYER 2 A BOX NUMBER:.. ");
        scanf("%d", &n);
    }
    while(!boxvalid(n));
    i=(n - 1) / 3;
    j=(n - 1) % 3;
    board[i][j] = ply2;
    return;
}

int ply1st(void){
    char ch;
    printf("\n\n\t IF PRESS 'Y' PLAYER1 PLAY 1ST OR 'N' PLAYER2 PLAY FRIST (Y/N).. ");
    do
    {
        ch = getchar();

    }

    while ((ch != 'y') && (ch != 'Y') &&
            (ch!= 'n') && (ch!='N'));
    if ((ch == 'y')||(ch== 'Y'))
        return 1;
    else
        return 0;
}


