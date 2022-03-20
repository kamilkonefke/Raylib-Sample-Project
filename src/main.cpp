#include <iostream>
#include "raylib.h"

using namespace std;

const int WIDTH = 640;
const int HEIGHT = 480;
const char *TITLE = "UNTITLED";

int main(int argc, char *argv[])
{
    InitWindow(WIDTH, HEIGHT, TITLE);

    while(!WindowShouldClose())
    {
        BeginDrawing();

            ClearBackground(WHITE);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
