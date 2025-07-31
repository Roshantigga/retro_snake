
#include <iostream>
#include <raylib.h>

using namespace std;

Color green = {173,204,96,255};
Color darkGreen = {43,51,24,255};

int main() 
{
    cout<<"Starting the game.. "<<endl;
    InitWindow(750,750,"Retro snake");
    SetTargetFPS(60);

    while(WindowShouldClose() == false) //untill and unless the esc is pressed the game will not close , if esc pressed then it will return the true value
    {
        BeginDrawing();

        //Drawing
        ClearBackground(green);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}