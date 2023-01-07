#include<iostream>
#include<windows.h>
using namespace std;

void printMaze();
void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
void printPacman();
void erasePacman();
int pacmanX=4;
int pacmanY=4;
main()
{


bool gameRunning = true;
system("cls");
printMaze();
gotoxy(pacmanX, pacmanY);
cout << "P";
while (gameRunning){
if (GetAsyncKeyState(VK_LEFT))
{
char nextLocation = getCharAtxy(pacmanX - 1, pacmanY);
if (nextLocation == ' ')
 {
    erasePacman();
    pacmanX = pacmanX - 1;
    printPacman();
 }
}

if (GetAsyncKeyState(VK_RIGHT))
{
char nextLocation = getCharAtxy(pacmanX + 1, pacmanY);
if (nextLocation == ' ')
 {
    erasePacman();
    pacmanX = pacmanX + 1;
    printPacman();
 }
}

if (GetAsyncKeyState(VK_UP))
{
char nextLocation = getCharAtxy(pacmanX, pacmanY - 1);
if (nextLocation == ' ')
{
    erasePacman();
    pacmanY = pacmanY - 1;
    printPacman();
}
}

if (GetAsyncKeyState(VK_DOWN))
{
char nextLocation = getCharAtxy(pacmanX, pacmanY + 1);
if (nextLocation == ' ')
{
    erasePacman();
    pacmanY = pacmanY + 1;
    printPacman();
}
}

if (GetAsyncKeyState(VK_ESCAPE))
{
gameRunning = false;
}
Sleep(100);
}
}


void printMaze()
{

cout<<"######################################################################                                           \n";
cout<<"||.. .......................................................   ......||                                          \n";
cout<<"||.. %%%%%%%%%%%%%%  ............  %%%%%%%%%%%%%%   |%|    %%%%      ||                                          \n";
cout<<"||..    |%|     |%|   ...........  |%|        |%|   |%|     |%|      ||                                          \n";
cout<<"||..    |%|     |%|        ...     |%|        |%|   |%|     |%|      ||                                          \n";
cout<<"||..    %%%%%%%%%%%.. . |%|...     %%%%%%%%%%%%%%   |%|    %%%%      ||                                          \n";
cout<<"||..    |%|          .. |%|...      .............                .   ||                                          \n";
cout<<"||..    %%%%%%%%%%%%%.. |%|...      %%%%%%%%%%%%%%          %%%% .   ||                                          \n";
cout<<"||..              |%|.. |%|...      |%|.........      |%|....|%|.    ||                                          \n";
cout<<"||..              |%|.. |%|...      |%|  .......|%|   |%|....|%|.    ||                                          \n";
cout<<"||..     .........|%|.    ..........     .......|%|   |%|....|%|.    ||                                          \n";
cout<<"||.. |%| |%|%%%|%|.                      .......|%|   |%|....|%|.    ||                                          \n";
cout<<"||.. |%| |%|   |%|.    ................  %%%%%%%%%%                  ||                                          \n";
cout<<"||.. |%| |%|   |%|.    ....    |%|.....                              ||                                          \n";
cout<<"||.. |%|  ......       ....    |%|.....       |%|......|%|...        ||                                          \n";
cout<<"||   |%|  ......       ....    |%|.....       |%|......|%|...        ||                                          \n";
cout<<"||..     |%|           ....    |%|.....       |%|......|%|...        ||                                          \n";
cout<<"||..     |%|  |%|  |%|..    %%%%%%%%%%%%%     |%|......|%|...        ||                                          \n";
cout<<"||..     |%|  |%|  |%|...    .............       ......|%|%%%%%%%    ||                                          \n";
cout<<"||..     |%|                                      |%| ...... |%|.... ||                                          \n";
cout<<"||..     |%|  %%%%%%%%%%%%%%%%%%                  |%|        |%|.... ||                                          \n";
cout<<"||..                                           |%|........|%|....    ||                                          \n";
cout<<"||..  ......................................  .......................||                                          \n";
cout<<"######################################################################                                           \n";

}

void erasePacman()
{
    
gotoxy(pacmanX, pacmanY);
cout << " ";
}

void printPacman()
{
    
gotoxy(pacmanX, pacmanY);
cout << "P";
}

char getCharAtxy(short int x, short int y)
{
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}

void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}
