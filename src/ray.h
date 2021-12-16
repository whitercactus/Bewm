#ifndef __BEWM_RAY_H
#define __BEWM_RAY_H

#include <SDL.h>


class Ray
{
public:
    Ray();
    Ray(SDL_Renderer *ren, double x, double y, double angle);

    double cast(const int wallX, const int wallY, const double wallW, const double wallH);
    void render(const double destX, const double destY);
    double get_x() { return x; }
    double get_y() { return y; }

private:
    double x, y;
    double angle;
    SDL_Renderer *renderer_;
};


#endif //__BEWM_RAY_H
