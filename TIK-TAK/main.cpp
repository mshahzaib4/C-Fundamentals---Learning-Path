#include <iostream>
#include <stdlib.h>
using namespace std;
bool over();
int number,R,C,ex=2,x=0;
char Number[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char player='X';
int Body()
{

         cout<<"\n\n\t\t\t\t   Player 1 [X]\n\n\t\t\t\t   Player 2 [O]"<<endl<<endl<<endl;
         cout<<"\t\t\t__________|__________|__________"<<endl;
         cout<<"\t\t\t          |          |          "<<endl;
         cout<<"\t\t\t     "<< Number[0][0]<<"    |     "<< Number[0][1]<<"    |     "<< Number[0][2]<<"    "<<endl;
         cout<<"\t\t\t__________|__________|__________"<<endl;
         cout<<"\t\t\t          |          |          "<<endl;
         cout<<"\t\t\t     "<< Number[1][0]<<"    |     "<< Number[1][1]<<"    |     "<< Number[1][2]<<"    "<<endl;
         cout<<"\t\t\t__________|__________|__________"<<endl;
         cout<<"\t\t\t          |          |          "<<endl;
         cout<<"\t\t\t     "<< Number[2][0]<<"    |     "<< Number[2][1]<<"    |     "<< Number[2][2]<<"    "<<endl;
         cout<<"\t\t\t__________|__________|__________"<<endl;
         cout<<"\t\t\t          |          |          "<<endl;

}

void Inside_body()
{

    if(player=='X'){
         cout<<"Player 1 [X] : ";system("Color 01");}
    else if(player=='O'){
         cout<<"Player 2 [0] : ";system("Color 0A");}
         cin>>number;

switch(number)
    {
        case 1:R=0;C=0;ex=0;break;
        case 2:R=0,C=1;ex=0;break;
        case 3:R=0,C=2;ex=0;break;
        case 4:R=1,C=0;ex=0;break;
        case 5:R=1,C=1;ex=0;break;
        case 6:R=1,C=2;ex=0;break;
        case 7:R=2,C=0;ex=0;break;
        case 8:R=2,C=1;ex=0;break;
        case 9:R=2,C=2;ex=0;break;
        default:cout<<"\n\t\t\t You Enter Invalid Invalid Try again!!";break;
        over();
        }
}
bool over()
{
    int a;
if(player=='X'&&Number[R][C]!='X' &&Number[R][C]!='O'&&ex==0)
{
    Number[R][C]='X';
    player='O';
    if( (Number[0][0]==Number[0][1]&&Number[0][1]==Number[0][2])||
        (Number[1][0]==Number[1][1]&&Number[1][1]==Number[1][2])||
        (Number[2][0]==Number[2][1]&&Number[2][1]==Number[2][2]) )
         a=1;
    else if
         ( (Number[0][0]==Number[1][0]&&Number[1][0]==Number[2][0])||
         (Number[0][1]==Number[1][1]&&Number[1][1]==Number[2][1])||
         (Number[0][2]==Number[1][2]&&Number[1][2]==Number[2][2]) )
          a=1;
    else if((Number[0][0]==Number[1][1]&&Number[1][1]==Number[2][2])||
            (Number[0][2]==Number[1][1]&&Number[1][1]==Number[2][0]))
          a=1;

    }
else if(player=='O'&&ex==0&&Number[R][C]!='X' &&Number[R][C]!='O')
    {
    Number[R][C]='O';
    player='X';
     if( (Number[0][0]==Number[0][1]&&Number[0][1]==Number[0][2])||
         (Number[1][0]==Number[1][1]&&Number[1][1]==Number[1][2])||
         (Number[2][0]==Number[2][1]&&Number[2][1]==Number[2][2]) )
          a=2;
    else if
         ( (Number[0][0]==Number[1][0]&&Number[1][0]==Number[2][0])||
         (Number[0][1]==Number[1][1]&&Number[1][1]==Number[2][1])||
         (Number[0][2]==Number[1][2]&&Number[1][2]==Number[2][2]) )
          a=2;
    else if((Number[0][0]==Number[1][1]&&Number[1][1]==Number[2][2])||
            (Number[0][2]==Number[1][1]&&Number[1][1]==Number[2][0]))
          a=2;
    }
if(( Number[0][0]=='X'||Number[0][0]=='O')
    &&(Number[0][1]=='X'||Number[0][1]=='O')
    &&(Number[0][2]=='X'||Number[0][2]=='O')

    &&( Number[1][0]=='X'||Number[1][0]=='O')
    &&(Number[1][1]=='X'||Number[1][1]=='O')
    &&(Number[1][2]=='X'||Number[1][2]=='O')

    &&( Number[2][0]=='X'||Number[2][0]=='O')
    &&(Number[2][1]=='X'||Number[2][1]=='O')
    &&(Number[2][2]=='X'||Number[2][2]=='O'))
{   system("color 07");
      cout<<"\n\n\t\t\t------------------------------------"<<endl<<endl;
      cout<<"\t\t\t\t   Game Over";
      cout<<"\n\n\t\t\t------------------------------------"<<endl<<endl;
      return false;
      }
if(a==1||a==2)
        {
        system("cls");
        Body();
        cout<<"\n\n\t\t\t------------------------------------"<<endl<<endl;
        cout<<"\t\t\t\tPlayer "<<a<<" is Winner!!"<<endl<<endl;
        cout<<"\t\t\t------------------------------------"<<endl;
        return false;
        }
}

void All()
{
while(over()==true)
{
    system("cls");
    Body();
    Inside_body();

    }
}

int main()
{

    All();

}
