#include "raylib.h"
#include <stdio.h>
#include <math.h>

const int WIDTH = 800;
const int HEIGHT = 700;
// string and ball

typedef struct Pendulum{
    int stringlength;

    int ball_mass;
    int ball_radius;

    int hinge_x;
    int hinge_y;

    int ballacceleration_x;
    int ballacceleration_y;

    int ballvelocity_x;
    int ballvelocity_y;

    int ball_x;
    int ball_y;
}Pendulum;

int main(void)
{
    InitWindow(WIDTH, HEIGHT, "PONG v0.1");
    SetTargetFPS(60);

    Pendulum pendulum;
    pendulum.hinge_y = 10;
    pendulum.hinge_x = WIDTH/2;
    pendulum.ball_y =  HEIGHT/2;
    pendulum.ball_x = WIDTH/2;
    pendulum.ball_radius = 10;
    pendulum.stringlength = HEIGHT/2 - 10;


    while (!WindowShouldClose()){
        if(IsMouseButtonDown(MOUSE_BUTTON_LEFT)){
            pendulum.ball_x = GetMouseX();
        }
        pendulum.ball_y = sqrt(pendulum.stringlength*pendulum.stringlength - (pendulum.ball_x - pendulum.hinge_x)*(pendulum.ball_x - pendulum.hinge_x)) + pendulum.hinge_y;
        // theta is angle between vertical and string
        float tan_theta = ((pendulum.ball_x - pendulum.hinge_x)/pendulum.ball_y);
        pendulum.ballacceleration_x += tan_theta;
        pendulum.ballvelocity_x += pendulum.ballacceleration_x;
        pendulum.ball_x += pendulum.ballvelocity_x;

        BeginDrawing();
        ClearBackground(BLACK);

        // DrawText(TextFormat("SCORE: %i", score), 0, 0, 30, WHITE);
        DrawLine(pendulum.hinge_x, pendulum.hinge_y, pendulum.ball_x, pendulum.ball_y, WHITE);
        DrawCircle(pendulum.ball_x, pendulum.ball_y, pendulum.ball_radius , RED);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
