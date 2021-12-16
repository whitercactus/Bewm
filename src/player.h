#ifndef __BEWM_PLAYER_H
#define __BEWM_PLAYER_H

#include <SDL.h>


class Player
{
public:
    Player();
    Player(SDL_Renderer *ren, const float x, const float y);
    ~Player();
    void move(double deltaTime);
    double get_x() {return x;}
    double get_y() {return y;}
    double get_angle() {return angle;}
    void render();
    void handle_key_presses(const Uint8 *&keystate, const double deltaTime);

private:
    double x, y;
    double angle;
    SDL_Renderer *renderer;
    float velocity;
};


#endif //__BEWM_PLAYER_H
